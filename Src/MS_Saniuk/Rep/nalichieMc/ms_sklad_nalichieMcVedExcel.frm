.LinkForm 'ms_sklad_nalichieMcVed_frm' Prototype is 'NAL_ALL'
.Group '000'
.NameInList '(МС) ВЕДОМОСТЬ НАЛИЧИЯ (ВЭД, Excel)'
.f 'NUL'
.var
  excelTemplate: String;
  isRunReport: boolean;
  mcNrec, krNrec, spName :String;
  rowIncr: longint;
  kauVed: String; // Вн. КАУ МЦ; Распределение по хоз. деятельности
  kauImp: String; // Вн. КАУ МЦ: Импортные ТМЦ
  mcKauVedPrev: String;
  mcVedSumm: Double;
.endvar
.create view KausVed
  from KatMc, KauReff, SpKau
  where ((
    Comp(NrecMc) == KatMc.nrec
    and KatMc.nrec == KauReff.crec
    and Word(1411) == KauReff.cotable
    and Word(10265) == KauReff.wkau
    and KauReff.ckau == SpKau.nrec
));
.create view KausImport
  from KatMc, KauReff, SpKau
  where ((
    Comp(NrecMc) == KatMc.nrec
    and KatMc.nrec == KauReff.crec
    and Word(1411) == KauReff.cotable
    and Word(10261) == KauReff.wkau
    and KauReff.ckau == SpKau.nrec
));
.create view mcss as select * from KatMcVed(KatMcVed02); // Table for sorting;
.fields
.endfields
.begin
  // Run report flag:
  isRunReport:=true;

  // check if excel template exist:
  excelTemplate:=StartPathName+'Xls\MS_RES\ms_saniuk\nalichie_mc_ved_excel.xltm';
  if(not ExistFile(excelTemplate)){
    message('По пути ' +excelTemplate +' шаблон не обнаружен! Отчет не будет сформирован!');
    isRunReport:=false;
  }

  // Try to create message log:
  OpenMessageLog(GetDefaultUserPath+'nalichie_mc_ved_excel.log',mfLog2Stream+mfNoTimeStamp);

  // Try to open excel template:
  if(xlCreateNewExcelWithTemplate(excelTemplate,true))
    writeMessageLog('Формирование ведомости наличия в формате Excel:');

  rowIncr:=1;

  // Clear buffer of sorting table:
  mcss.clearBuffer(tnKatMcVed);

  mcVedSumm:=0;
end.
.{
.}
.{
.[H OVERWRITE
.]H
.{CheckEnter
.begin
  // Clear buffer of sorting table:
  mcss.clearBuffer(tnKatMcVed);

  if(substr(NameMC,1,8) <> 'Итого по') {

    mcss.KatMcVed.nrec:=0;

    // Column 1 (MC Number):
    mcss.KatMcVed.mcNum:=CodeMC;
    // End column 1;

    // Column 2 (MC Name):
    mcss.KatMcVed.mcName:=NameMC;
    // End column 2;

    // Column 3 (MC Ved):
    if(KausVed.getfirst KauReff where ((Comp(NrecMc) == KauReff.crec
                                      and Word(1411) == KauReff.cotable
                                      and Word(10265) == KauReff.wkau  ))= tsOk) {
       if(KausVed.getfirst SpKau where ((KauReff.ckau == Spkau.nrec))= tsOk) {
         kauVed := KausVed.SpKau.name;
    }}
    mcss.KatMcVed.mcVed:=kauVed;
    // End column 3;

    // Column 4 (MC Import):
    if(KausImport.getfirst KauReff where ((Comp(NrecMc) == KauReff.crec
                                      and Word(1411) == KauReff.cotable
                                      and Word(10261) == KauReff.wkau  ))= tsOk) {
       if(KausImport.getfirst SpKau where ((KauReff.ckau == Spkau.nrec))= tsOk) {
         kauImp := KausImport.SpKau.name;
    }}
    mcss.KatMcVed.mcImport:=kauImp;
    // End column 4

    // Column 5 (MC measure units):
    mcss.KatMcVed.mcMu:=NameEd;
    // End column 5;

    // Column 6 (MC price):
    mcss.KatMcVed.mcPrice:=Price1;
    // End column 6;

    // Column 7 (MC kolvo):
    mcss.KatMcVed.mcKolvo:=Kol;
    // End column 7;

    // Column 8 (MC summ):
    mcss.KatMcVed.mcSum:=Summa1;
    // End column 8;

    // Column 9 (MC Department):
    mcss.KatMcVed.mcDep:=Podr;
    // End column 9;

    // Column 10 (MC MOL):
    mcss.KatMcVed.mcMol:=Mol;
    // End column 10

    mcss.insert current KatMcVed;

  }
end.
.}
.begin  // ****** Get first VED mc value:
  if((mcss.getfirst KatMcVed) = tsOk) mcKauVedPrev:=mcss.KatMcVed.mcVed;
end.
.{table 'mcss'
.begin

  if(mcss.KatMcVed.mcVed <> mcKauVedPrev) {
    // Inrement row:
    rowIncr:=rowIncr+1;
    xlSetFontStyle(1, rowIncr, 1, rowIncr, 8);
    xlMergeCells(rowIncr, 1, rowIncr, 7);
    xlSetCellStringValue('Итого по ' +mcKauVedPrev +':', rowIncr, 1, rowIncr, 1);
    xlSetCellNumberValue(mcVedSumm, rowIncr, 8, rowIncr, 8);
    mcKauVedPrev:=mcss.KatMcVed.mcVed;
    mcVedSumm:=0;
  }

  mcVedSumm:=mcVedSumm+mcss.KatMcVed.mcSum;

  // Inrement row:
  rowIncr:=rowIncr+1;

  // Print to Excel template:
  xlSetCellStringValue(mcss.KatMcVed.mcNum, rowIncr, 1, rowIncr, 1);
  xlSetCellStringValue(mcss.KatMcVed.mcName, rowIncr, 2, rowIncr, 2);
  xlSetCellStringValue(mcss.KatMcVed.mcVed, rowIncr, 3, rowIncr, 3);
  xlSetCellStringValue(mcss.KatMcVed.mcImport, rowIncr, 4, rowIncr, 4);
  xlSetCellStringValue(mcss.KatMcVed.mcMu, rowIncr, 5, rowIncr, 5);
  xlSetCellNumberValue(mcss.KatMcVed.mcPrice, rowIncr, 6, rowIncr, 6);
  xlSetCellNumberValue(mcss.KatMcVed.mcKolvo, rowIncr, 7, rowIncr, 7);
  xlSetCellNumberValue(mcss.KatMcVed.mcSum, rowIncr, 8, rowIncr, 8);
  xlSetCellStringValue(mcss.KatMcVed.mcDep, rowIncr, 9, rowIncr, 9);
  xlSetCellStringValue(mcss.KatMcVed.mcMol, rowIncr, 10, rowIncr, 10);

end.
.}
.}
.begin

  rowIncr:=rowIncr+1;
  xlSetFontStyle(1, rowIncr, 1, rowIncr, 8);
  xlMergeCells(rowIncr, 1, rowIncr, 7);
  xlSetCellStringValue('Итого по ' +mcKauVedPrev +':', rowIncr, 1, rowIncr, 1);
  xlSetCellNumberValue(mcVedSumm, rowIncr, 8, rowIncr, 8);

  xlKillExcel;
  CloseMessageLog;
  processText(GetDefaultUserPath+'nalichie_mc_ved_excel.log',vfEscable+vfMacroSize,'Лог формирования счета аренды');

  // Clear temporary table:
  delete all from KatMcVed;
end.
.endform
