#include FeeSigners.frn
.linkform 'ms-otchet-po-gsm_itogoviy' prototype is 'TexG_Rep'
.NameInList '(МС) Отчет по ГСМ (Итоговый 2)'
.Group 'Ведомость технико-эксплуатационных показателей для ГСМ'
#FeeSignersLinkVar
.var
  nameKategory, nameKategoryPrev: String;
  nameFunction, nameFunctionPrev: String;
  probegByFunction, probegByKategory, probegTotal : Double;
.endvar
.create view T92 // ============================== Топливо: АИ-92 ===========================================
  from PutLst, Toplivo, PutGsm, Transp, TipTex
  where (( NrecPl == PutLst.nrec
    and 'Бензин АИ-92' == Toplivo.name
    and 0 == PutGsm.tipinfo
    and PutLst.nrec == PutGsm.cputlst
    and Toplivo.nrec == PutGsm.ctoplivo
    and PutLst.cTransp == Transp.nrec
    and Transp.cTipTex == TipTex.nrec
)); // =====================================================================================================
.create view T95 // ============================= Топливо: АИ-95 ===========================================
  from PutLst, Toplivo, PutGsm, Transp, TipTex
  where (( NrecPl == PutLst.nrec
    and 'Бензин АИ-95' == Toplivo.name
    and 0 == PutGsm.tipinfo
    and PutLst.nrec == PutGsm.cputlst
    and Toplivo.nrec == PutGsm.ctoplivo
    and PutLst.cTransp == Transp.nrec
    and Transp.cTipTex == TipTex.nrec
)); // =====================================================================================================
.create view TSug // ============================= Топливо: СУГ ===========================================
  from PutLst, Toplivo, PutGsm, Transp, TipTex
  where (( NrecPl == PutLst.nrec
    and 'СУГ' == Toplivo.name
    and 0 == PutGsm.tipinfo
    and PutLst.nrec == PutGsm.cputlst
    and Toplivo.nrec == PutGsm.ctoplivo
    and PutLst.cTransp == Transp.nrec
    and Transp.cTipTex == TipTex.nrec
)); // =====================================================================================================
.begin
  probegTotal:=0;
end.
.fields
  Filter
.endfields
.{
^
.}
.fields
  NaimPred  BegDate EndDate
.endfields
^
КАРТОТЕКА
учета расхода топлива транспортными средствами
за период с ^ по ^
|    Функциональное назначение    |  Пробег  |
|---------------------------------|----------|
.{ CheckEnter GroupAnalGSM //============= GroupAnalGSM
.{?internal; substr(AnalGroup,1,12)='.1.Марка ГСМ' // ================================
.begin
  // Категории топлива:
  nameKategory:=substr(AnalGroup,15, length(AnalGroup)-1);

  if(nameKategory <> nameKategoryPrev) {
    nameKategoryPrev:=nameKategory;
    nameFunctionPrev:='';
    probegByKategory:=0;
  }
end.
.fields
  'Maрка ГСМ: ' +nameKategory
.endfields
| @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ |
|--------------------------------------------------------------------------------------|
.} // ================================================================================
.{ CheckEnter Shapka
.}
.{ CheckEnter DocAnalGSM
.begin
  // Функциональное назначение автомобиля:
  nameFunction:=substr(AnalGroup,32, length(AnalGroup)-1);
  if(nameFunction <> nameFunctionPrev and nameKategory = nameKategoryPrev) {
    nameFunctionPrev:=nameFunction;
    probegByFunction:=0;
  }

  // Пробег автомобилей:
  // Если топливо АИ-92:
  if(nameKategory = 'Бензин АИ-92') {
    if(T92.getfirst PutLst where ((Comp(NrecPl) == PutLst.nrec)) = tsOk) {
      if((T92.getfirst Toplivo = tsOk) and (T92.getfirst PutGsm = tsOk)) {
        if(T92.PutGsm.probegAll > 0)
          probegByFunction := probegByFunction + T92.PutGsm.probegAll;
  }}};

  // Если топливо АИ-95:
  if(nameKategory = 'Бензин АИ-95') {
    if(T95.getfirst PutLst where ((Comp(NrecPl) == PutLst.nrec)) = tsOk) {
      if((T95.getfirst Toplivo = tsOk) and (T95.getfirst PutGsm = tsOk)) {
        if(T95.PutGsm.probegAll > 0)
          probegByFunction := probegByFunction + T95.PutGsm.probegAll;
  }}};

  // Если топливо СУГ:
  if(nameKategory = 'СУГ') {
    if(TSug.getfirst PutLst where ((Comp(NrecPl) == PutLst.nrec)) = tsOk) {
      if((TSug.getfirst Toplivo = tsOk) and (TSug.getfirst PutGsm = tsOk)) {
        if(TSug.PutGsm.probegAll > 0)
          probegByFunction := probegByFunction + TSug.PutGsm.probegAll;
  }}};

end.
.}
.{ CheckEnter TotalAnalGSM
.{?internal; substr(AnalItg,1,40)='. Итого по 2.Функциональное назначение: ' // = Итоги по функ. назнач. ====
.begin
  probegByKategory:=probegByKategory +probegByFunction;
end.
.fields
  nameFunction
  DoubleToStr(probegByFunction, doubleToStrWoDec)
.endfields
| @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ | &&&&&& |
|---------------------------------|--------|
.} // ============================== Конец вывода итогов по функ. назнач ====================================
.{?internal; substr(AnalItg,1,23)='.Итого по 1.Марка ГСМ: ' // ==== Вывод итогов по категории ===============
.begin
  probegTotal:=probegTotal+probegByKategory;
end.
.fields
  'Итого по: ' +nameKategory
  DoubleToStr(probegByKategory, doubleToStrWoDec)
.endfields
| @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ | &&&&&& |
|---------------------------------|--------|
.} // ============================== Конец вывода итогов по категории =======================================
.}
.}
.fields
  DoubleToStr(probegTotal, doubleToStrWoDec)
.endfields
| Итого по отчету:                | &&&&&& |
|---------------------------------|--------|

#FeeSignersLinkInit(Texg_rep)
.endform
