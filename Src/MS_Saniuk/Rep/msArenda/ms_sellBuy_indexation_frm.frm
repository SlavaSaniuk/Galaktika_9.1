.LinkForm 'ms_saniuk_indexation_frm' Prototype is 'PRBDOC'
.Group 'Устаревшие формы (предоплата продаж)'
.Group 'Устаревшие формы (продажа)'
.Group 'Счет лесопользователя'
.NameInList '(МС) Счет - индексация'
.f 'NUL'
.var
  NrecOS:Comp
  oAiExt:iExtAttr
  oKatOrgAttr:KatOrgAttr
  PatchShablon:String
  NameOrg:String
  boRunReport:Boolean
  iRowStart:Integer
  iNpp:Integer
  FormulaCalc:String
  datNezemnal:Date
  totalSumBezNds:Double
  totalNDS:Double
  totalSumSNds:Double
  sumNDSmy:Double
  ColumnRecordUsl_3_7:String
  ColumnPrintUsl:String
  ColumnRecordUsl_2:String
  ColumnRecordUsl_8:String
  KodTarif:String
  sNDov:String
  sDDov:String
  sFIO:String
  sIOF:String
  sFullName:String
  sDolzh:String
  PersNRec:Comp
  rate_code_by_service:String
  executor_position:String
  executor_name:String
  executor_sname:String
  executor_fname:String
  executor_pname:String
  executor_tel:String
  executor_tel_last_nums:String
  printIndexation: Integer
  sPrintIndexation: String // Строковое представление вн. атр. печати индексации;
  indexationParam: String // Вн. атр. услуги (параметр индексации);
  indexationValue: Double // Сумма индексации;
  isFactRashod: Boolean // Флаг фактических расходов;
  factRashod: Double // Фактические расходы;
  indexationKoef: Double // Коэффициент индексации;
  arMergeRow: array [0..99] of Integer // Массив, содержащий строки с объед. ячейками;
  arIter: Integer // Итератор по массиву;
  arIterSt: Integer // Итератор по массиву 2;
  //======================================
  reportNote: String // Примечание;
  isPrintReportNote: Boolean // Флаг печати примечания;
.endvar
.Create view AppArenda
from
  BaseDoc
 ,StepDoc
 ,SpStep
 ,Katorg
 ,KatUsl
 ,SpDocNal
 ,KatBank KatBankKontr
 ,Nezemnal
 ,ListPar
 ,Katpodr
 ,Kattar
 ,TRSTV
 ,tuneval, tuneval tuneval_fio, persons, appointments, catalogs
where ((
  BaseDocNrec      == BaseDoc.nRec
  and Basedoc.nrec     == StepDoc.cBasedoc
  and StepDoc.nrec     == Spstep.cstepdoc
  and SpStep.nrec      == SpDocNal.CSPDOC
  and word(1201)       == SpDocNal.tipDoc
  and Basedoc.corg     == Katorg.nrec
  and Basedoc.Cdogovor == Dogovor.nrec
  and Dogovor.CCURPODR == Katpodr.nrec
  and SpStep.cmcusl    == KatUsl.nrec
  and Basedoc.cBank    == KatBankKontr.nrec
  // Получить исполнителя по дескриптору пользователя:
  and 184h == tuneval.ctune
  and BaseDoc.descr == tuneval.strval
  and 1 == tuneval_fio.obj
  and tuneval.cuser == tuneval_fio.cuser
  and 0001000000003EE1h == tuneval_fio.ctune
  and tuneval_fio.compval == persons.nrec
  // Получить должность исполнителя:
  and persons.appointcur == appointments.nrec
  and appointments.post  == catalogs.nrec
));
.fields
.endfields
.begin
PatchShablon:=StartPathName+'Xls\MS_RES\ms_saniuk\ms_sf_indexation.xltm';
boRunReport:=true;
if(not ExistFile(StartPathName+'Xls\MS_RES\ms_saniuk\ms_sf_indexation.xltm'))
  {
    message('По пути '+PatchShablon+' шаблон не обнаружен! Отчет не будет сформирован!');
    boRunReport:=false;
  }
OpenMessageLog(GetDefaultUserPath+'CreateProtokolIndexation.log',mfLog2Stream+mfNoTimeStamp);
RunInterface('MS_Shilin::GetPodpis', sNDov, sDDov, sFIO, sIOF, sDolzh, sFullName, persNRec);
end.
.{
.begin
// Инициализация переменных:
NameOrg:='';
totalSumBezNds:=0;
totalNDS:=0;
totalSumSNds:=0;
iRowStart:=22;
iNpp:=0;
arIter:=0;
isFactRashod:=false;
isPrintReportNote:=true;
// Конец инициализации переменных;
if(boRunReport)
  {
  if(xlCreateExcelWithTemplate(PatchShablon,true))
   {
     if(AppArenda.getfirst BaseDoc=tsok)
      {
       xlSetCellStringValue(AppArenda.BASEDOC.NODOC,3,4,3,5);
       xlSetCellStringValue(day(AppArenda.BASEDOC.DDOC),3,7,3,7);
       xlSetCellStringValue(datetostr(AppArenda.BASEDOC.DDOC,'Mon'),3,8,3,9);
       xlSetCellStringValue(Year(AppArenda.BASEDOC.DDOC)+' года',3,10,3,10);

       if(AppArenda.getfirst Katorg =tsok)
         {
           NameOrg:=AppArenda.Katorg.Name;

           xlSetCellStringValue(AppArenda.Katorg.Name,11,2,11,9);
           xlSetCellStringValue(oKatOrgAttr.GetPostAddr(AppArenda.Katorg.nrec),12,2,12,9);
         }

       //writeMessageLog('Обработано ДО номер '+AppArenda.BaseDoc.NODOC+' от '+AppArenda.basedoc.DFORM+' контрагента '+NameOrg+'!');

       if(AppArenda.getfirst KatBankKontr = tsok)
         {
           xlSetCellStringValue('Р/ счет № '+AppArenda.KatBankKontr.SCHET1+' в '+AppArenda.KatBankKontr.Addr,13,2,13,9);
           xlSetCellStringValue(AppArenda.KatBankKontr.Name+', БИК '+AppArenda.KatBankKontr.MFO1+', УНП '+AppArenda.Katorg.UNN,14,2,14,9);
         }

       if(AppArenda.getfirst Dogovor =tsok)
         {
           xlSetCellStringValue('Дог. '+AppArenda.Dogovor.NODOC_EXT+' от '+DateToStr(AppArenda.Dogovor.DDOC,'DD.MM.YYYY')+' г.',17,2,17,8);

           if(AppArenda.getfirst Katpodr =tsok)
           {
             xlSetCellStringValue('Арендуемый объект находится: '+AppArenda.Katpodr.Name,19,1,19,13);
           }
         }
       //xlSetCellStringValue(datetostr(AppArenda.BASEDOC.DDOC,'month'),18,6,18,7);
       //xlSetCellStringValue(Year(AppArenda.BASEDOC.DDOC)+' года',18,8,18,8);
       xlSetCellStringValue(datetostr(Sub_Months(date(1,Month(AppArenda.BASEDOC.DDOC),Year(AppArenda.BASEDOC.DDOC)),1),'month'),18,6,18,7);
       xlSetCellStringValue(Year(Sub_Months(date(1,Month(AppArenda.BASEDOC.DDOC),Year(AppArenda.BASEDOC.DDOC)),1))+' года',18,8,18,8);

       //Sub_Months(date(1,Month(AppArenda.BASEDOC.DDOC),Year(AppArenda.BASEDOC.DDOC)),1)

       if(AppArenda.getfirst StepDoc=tsok) {
        // Цикл по спецификации ДО:
        AppArenda._loop SpStep {
               datNezemnal:=date(0,0,0);
               NrecOS:=0;
               FormulaCalc:='';
               sumNDSmy:=0;
               ColumnRecordUsl_3_7:='';
               ColumnRecordUsl_2:='';
               ColumnRecordUsl_8:='';
               ColumnPrintUsl:='';
               KodTarif:='';

               // Получение текущей услуги из спецификации:
               if(AppArenda.getfirst KatUsl = tsok) {

                // **** Проверка индексации услуги ****
                printIndexation:=0; // Обнуление флага печати индексации;
                sPrintIndexation:=''; // Обнуление строкового флага печати индексации;
                sPrintIndexation:=oAiExt.sGetAttr(coKatUsl,KatUsl.nrec,'СчФакт_ПечатьИндексации');
                if(length(sPrintIndexation)=0) printIndexation:=0;
                else if(Boolean(sPrintIndexation)) printIndexation:=2;
                else printIndexation:=1;

                // Если услуга индексации, то она не печатается:
                if(printIndexation<>1) {

                  // Вставить пустую строку
                  if(iNpp<>0) xlInsertRange(-4121,iRowStart,1,iRowStart,13);


                  // **** Колонка 1 (Наименование услуги) *****
                  xlSetCellStringValue(AppArenda.KatUsl.name,iRowStart,1,iRowStart,1);
                  // **** Конец колонка 1 (Наименование услуги) *****

                  // **** Колонка 2 (Данные арендатора) *****
                  NrecOS:=oAiExt.coGetAttr(coSpStep,SpStep.nrec,'ОС');
                  datNezemnal:=Sub_Months(date(1,Month(AppArenda.BASEDOC.DDOC),Year(AppArenda.BASEDOC.DDOC)),1);

                  ColumnRecordUsl_2:=oAiExt.sGetAttr(coKatUsl,KatUsl.nrec,'СчФакт_Колонка_2');

                  if(length(ColumnRecordUsl_2)<>0){
                    if(AppArenda.getfirst ListPar where((ColumnRecordUsl_2 == ListPar.KATPARID
                                                        and  coSpStep          == ListPar.WTABLE
                                                        and  SpStep.nrec       == ListPar.CDoc )) = tsok){
                             xlSetCellStringValue(AppArenda.ListPar.Value,iRowStart,2,iRowStart,2);
                  }}
                  // **** Конец колонка 2 (Данные арендатора) *****

                  // **** Столбец 8 (Тариф) ****
                  ColumnRecordUsl_8:=oAiExt.sGetAttr(coKatUsl,KatUsl.nrec,'СчФакт_Колонка_8'); // Код тарифа по услуге;
                  if(substr(ColumnRecordUsl_8,1,5)='Тариф'){
                    rate_code_by_service := oAiExt.sGetAttr(coSpStep,SpStep.nrec,'Код тарифа'); // Код тарифа по услуге из СФ
                    if(length(rate_code_by_service)<>0){
                        writeMessageLog('Код тарифа по услуге: ' +rate_code_by_service);
                        if(AppArenda.getfirst KatTar where ((rate_code_by_service == Kattar.ID))=tsok){
                            writeMessageLog('Код тарифа из KatTer: ' +KatTar.nrec);
                                if(AppArenda.getfirst TRSTV where ((Kattar.nrec ==  TRSTV.CKATTAR and datNezemnal >>= TRSTV.DOWND(noindex) and datNezemnal <<= TRSTV.UPD(noindex)))=tsok){
                                          xlSetCellNumberValue(AppArenda.TRSTV.STAVKA,iRowStart,8,iRowStart,8);
                     }}} else if(AppArenda.getfirst Dogovor=tsok){ // Код тарифа по подразделению;
                        if(AppArenda.getfirst Katpodr =tsok){
                            writeMessageLog('Код тарифа по подразделению: ' +ColumnRecordUsl_8);
                            KodTarif:=oAiExt.sGetAttr(coKatpodr,Katpodr.nrec,ColumnRecordUsl_8);
                            if(AppArenda.getfirst KatTar where ((KodTarif == Kattar.ID))=tsok){
                                if(AppArenda.getfirst TRSTV where ((Kattar.nrec ==  TRSTV.CKATTAR and datNezemnal >>= TRSTV.DOWND(noindex) and datNezemnal <<= TRSTV.UPD(noindex)))=tsok){
                                    xlSetCellNumberValue(AppArenda.TRSTV.STAVKA,iRowStart,8,iRowStart,8);
                   // *** Данные арендатора из Nezemnal ***
                   }}}}}else {
                      if(length(ColumnRecordUsl_8)<>0) {
                          if(getfirst Nezemnal where((ColumnRecordUsl_8 == NezemNal.param and NrecOS == NezemNal.cOS and datNezemnal == NezemNal.DataN))= tsok) {
                              isFactRashod:=true; // Установка флага фактических расходов;
                              factRashod:=AppArenda.NezemNal.KOEF3;
                              xlSetCellStringValue(DoubleToStr(factRashod, doubleSumToExcelString2dec),iRowStart,8,iRowStart,8);
                   }}}
                   // **** Конец столбца 8 (Тариф) ****

                   ColumnRecordUsl_3_7:=oAiExt.sGetAttr(coKatUsl,KatUsl.nrec,'СчФакт_ПорядокКолонок_3_7');

                   while (instr(';',ColumnRecordUsl_3_7)<>0 and length(ColumnRecordUsl_3_7)<>0)
                     {
                       ColumnPrintUsl:=substr(ColumnRecordUsl_3_7,1,instr(';',ColumnRecordUsl_3_7)-1);
                       case ColumnPrintUsl of
                        '3':
                           {
                             if(AppArenda.getfirst Nezemnal where (( 'КолФизЛицОбщ_чел' == NezemNal.param     //'ОбщКолФизЛиц_чел' == NezemNal.param
                                                    and    NrecOS            == NezemNal.cOS
                                                    and    datNezemnal       == NezemNal.DataN))= tsok)
                               {
                                  xlSetCellNumberValue(AppArenda.NezemNal.KOEF3,iRowStart,3,iRowStart,3);
                               }
                           }
                        '4':
                           {
                             if(AppArenda.getfirst Nezemnal where (('ПлПомОбщ_m2' == NezemNal.param
                                                    and    NrecOS            == NezemNal.cOS
                                                    and    datNezemnal       == NezemNal.DataN))= tsok)
                               {
                                  xlSetCellNumberValue(AppArenda.NezemNal.KOEF3,iRowStart,4,iRowStart,4);
                               }
                           }
                        '5':
                           {
                             if(AppArenda.getfirst Nezemnal where (('ПлМестОбщПольз_м2' == NezemNal.param
                                                    and    NrecOS            == NezemNal.cOS
                                                    and    datNezemnal       == NezemNal.DataN))= tsok)
                               {
                                  xlSetCellNumberValue(AppArenda.NezemNal.KOEF3,iRowStart,5,iRowStart,5);
                               }
                           }
                        '6':
                           {
                             case KATUSL.KOD of
                              '033002':
                                   {
                                   if(AppArenda.getfirst Nezemnal where (('ФР_ЭлМощнОбщ_Квт' == NezemNal.param
                                                                    and    NrecOS            == NezemNal.cOS
                                                                    and    datNezemnal       == NezemNal.DataN))= tsok)
                                          {
                                             xlSetCellNumberValue(AppArenda.NezemNal.KOEF3,iRowStart,6,iRowStart,6);
                                          }
                                   }
                              else
                                   {
                                   if(AppArenda.getfirst Nezemnal where (('ЭлМощнОбщ_Квт' == NezemNal.param
                                                                 and    NrecOS            == NezemNal.cOS
                                                                 and    datNezemnal       == NezemNal.DataN))= tsok)
                                          {
                                             xlSetCellNumberValue(AppArenda.NezemNal.KOEF3,iRowStart,6,iRowStart,6);
                                          }
                                   }
                              end;
                           }
                        '7':
                           {
                             if(AppArenda.getfirst Nezemnal where (('ЭлМощнМестОП_Квт' == NezemNal.param
                                                    and    NrecOS            == NezemNal.cOS
                                                    and    datNezemnal       == NezemNal.DataN))= tsok)
                               {
                                  xlSetCellNumberValue(AppArenda.NezemNal.KOEF3,iRowStart,7,iRowStart,7);
                               }
                           }
                       end;
                       ColumnPrintUsl:='';
                       ColumnRecordUsl_3_7:=substr(ColumnRecordUsl_3_7,instr(';',ColumnRecordUsl_3_7)+1,length(ColumnRecordUsl_3_7)-instr(';',ColumnRecordUsl_3_7));
                     }

                   FormulaCalc:=oAiExt.sGetAttr(coKatUsl,KatUsl.nrec,'СчФакт_ПорядокРасчета');

                   xlSetCellStringValue(FormulaCalc,iRowStart,9,iRowStart,9);

                   xlSetCellNumberValue(Round(AppArenda.SPSTEP.PRICE*AppArenda.SPSTEP.KOLSKL,2),iRowStart,10,iRowStart,10);
                   if(AppArenda.getfirst SpdocNal = tsok)
                     {
                     if (AppArenda.SPDOCNAL.NALOG<>0)
                     {
                       xlSetCellStringValue(doubletostr(AppArenda.SPDOCNAL.NALOG,'666')+'%',iRowStart,11,iRowStart,11);    //вывод
                       sumNDSmy:=Round(AppArenda.SPDOCNAL.SUMNAL,2);
                       xlSetCellNumberValue(sumNDSmy,iRowStart,12,iRowStart,12);    //вывод
                     }
                     else
                     {
                       xlSetCellStringValue(' ',iRowStart,11,iRowStart,11);    //вывод
                       //sumNDSmy:=Round(AppArenda.SPDOCNAL.SUMNAL,2);
                       //xlSetCellNumberValue(' ',iRowStart,12,iRowStart,12);    //вывод
                       xlSetCellStringValue(' ',iRowStart,12,iRowStart,12);    //вывод
                     }

                     }
                   xlSetCellNumberValue(Round(AppArenda.SPSTEP.PRICE*AppArenda.SPSTEP.KOLSKL,2)+sumNDSmy,iRowStart,13,iRowStart,13);    //вывод

            // **********************************************************************
            // Если услуга индексируемая, то печатать строку индексации по услуге:
            if(printIndexation=2) {
              iRowStart++;
              xlinsertRange(-4121,iRowStart,1,iRowStart,13);
              //xlMergeCells(iRowStart, 1, iRowStart, 13); // Объединить ячейки;
              arIter++;
              arMergeRow[arIter]:=iRowStart;

              // Значение индексации:
              indexationParam:=oAiExt.sGetAttr(coKatUsl,KatUsl.nrec,'СчФакт_ПараметрИндексации'); // Параметр индексации из вн. атр. услуги
              if(getfirst Nezemnal where((indexationParam == NezemNal.param and NrecOS == NezemNal.cOS and datNezemnal == NezemNal.DataN))= tsok)
                indexationValue:=AppArenda.NezemNal.KOEF3;

              // Коэффициент индексации:
              indexationKoef:=(factRashod+indexationValue)/factRashod;

              // Печать строки индексации:
              xlSetCellStringValue('Коэффициент индексации = ('
                +DoubleToStr(factRashod, doubleSumToExcelString2dec)
                +' + ' +DoubleToStr(indexationValue, doubleSumToExcelString2dec)
                +')/' +DoubleToStr(factRashod, doubleSumToExcelString2dec)
                +'=' +DoubleToStr(indexationKoef, doubleSumToExcelString5dec) +': из них '
                +DoubleToStr(factRashod, doubleSumToExcelString2dec) +' руб.коп. - фактические расходы по услуге, '
                +DoubleToStr(indexationValue, doubleSumToExcelString2dec) +' руб.коп. - индексация по услуге.'
                ,iRowStart, 1, iRowStart, 1);

                // Если строка индексации печатается, то не печатать примечание:
                isPrintReportNote:=false;
              } // Конец печати услуги индексации;

              iRowStart++;
              iNpp++;

              totalSumBezNds+=Round(AppArenda.SPSTEP.PRICE*AppArenda.SPSTEP.KOLSKL,2);
              totalNDS+=sumNDSmy;
              totalSumSNds+=Round(AppArenda.SPSTEP.PRICE*AppArenda.SPSTEP.KOLSKL,2)+sumNDSmy;
            } // Конец проверки печати услуги индексации;
          } // Конец услуги из спецификации;
          } // Конец цикла по спецификации ДО;

          for(arIterSt:=1; arIterSt<arIter+1; arIterSt++) {
            xlMergeCells(arMergeRow[arIterSt], 1, arMergeRow[arIterSt], 13); // Объединить ячейки;
            xlSetRowHeight(15, arMergeRow[arIterSt], 1, arMergeRow[arIterSt], 1); // Объединить ячейки;
          }


          xlSetCellNumberValue(totalSumBezNds,iRowStart,10,iRowStart,10);
          xlSetCellNumberValue(totalNDS,iRowStart,12,iRowStart,12);
          xlSetCellNumberValue(totalSumSNds,iRowStart,13,iRowStart,13);

          // *** Примечание ***
          iRowStart++;
          if(isPrintReportNote) {
            reportNote:='Примечание: коэффициент индексации = (фактические расходы по услуге арендодателя + индексация по услуге арендодателя) / фактические расходы по услуге арендодателя';
            xlSetCellStringValue(reportNote,iRowStart,1,iRowStart,1);
          }

          iRowStart++;
          xlSetCellStringValue(DoubleToString(comp(0),totalNDS),iRowStart,2,iRowStart,13);
          iRowStart:=iRowStart+2;
          xlSetCellStringValue(DoubleToString(comp(0),totalSumSNds),iRowStart,1,iRowStart,13);
         }
        writeMessageLog(' ');
      } // Конец прохода по ДО (BaseDoc)

      // **** ФИО и должность подписанта: ****
      iRowStart:=iRowStart+2;
      xlSetCellStringValue(sDolzh,iRowStart,1,iRowStart,1);
      iRowStart++;
      xlSetCellStringValue(sIOF,iRowStart,2,iRowStart,2);

      // **** ФИО и должность исполнителя: ****
      // Должность
      if(AppArenda.getfirst Catalogs = tsok) {
          executor_position := Catalogs.name;
          writeMessageLog('Должность исполнителя: ' +executor_position);
          iRowStart:=iRowStart+3;
          xlSetCellStringValue(executor_position,iRowStart,1,iRowStart,1);
      }

      // Фимилия И.О.
      if(AppArenda.getfirst Persons = tsok) {
          executor_name := Persons.fio;
          executor_sname := substr(executor_name,1,(Instr(' ',executor_name))-1);
          executor_name:=substr(executor_name,Instr(' ', executor_name)+1,Length(executor_name)- Instr(' ', executor_name)+1);
          executor_fname := substr(executor_name,1,1)+'.';
          executor_name:=substr(executor_name,Instr(' ', executor_name)+1,Length(executor_name)- Instr(' ', executor_name)+1);
          executor_pname := substr(executor_name,1,1)+'.';
          executor_name:= executor_fname +executor_pname +' ' +executor_sname;
          writeMessageLog('Исполнитель: ' +executor_name);
          iRowStart:=iRowStart+1;
          xlSetCellStringValue(executor_name,iRowStart,2,iRowStart,2);
      }
          
      // Телефон (269XXXX)
      if(AppArenda.getfirst Tuneval = tsok) {
        executor_tel_last_nums := trim(sGetTuneEx('USER.REMARK', UserOfficeFilial(Tuneval.cuser), Tuneval.cuser));
        executor_tel := 'Тел. ' +'8(017) ' +'269-' +executor_tel_last_nums;
        writeMessageLog('Телефон: ' +executor_tel);
        iRowStart:=iRowStart+1;
        xlSetCellStringValue(executor_tel,iRowStart,1,iRowStart,1);
      }


      xlKillExcel;
    }
  }
end.
.{CheckEnter ISBASEFIN
.}
.{CheckEnter ISEXCLASS
.}
.{CheckEnter ISGROUP
.}
.{
.}
.if DELIMITER
.else
.end
.}
.begin
  xlKillExcel;
  CloseMessageLog;
  processText(GetDefaultUserPath+'CreateProtokolIndexation.log',vfEscable+vfMacroSize,'Лог формирования счета индексации');
end.
.endform
