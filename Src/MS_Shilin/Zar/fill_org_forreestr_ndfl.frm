.LinkForm 'REESBVIP_01_FILL_ORG' Prototype is 'REESBVIP'
.Group 'Реестры по перечислению в сбербанк'
.NameInList 'Заполнение организации-получателя НДФЛ'
.p 60
.var
  KolList:Integer
  SumList1:Double
  ItogSumma1:Double
  SummaStr1:String
  SummaStr2:String
  SummaStr3:String
  sOrg:String
  sBank:String
  sSchet:string
.endvar
.Create       view T
from
   sbban (readonly),
   spplban,
   lstab (readonly),
   katorg (readonly),
   katbank (readonly)
where
((
   sbbannrec == sbban.nrec

   and SpplbannRec == spplban.nrec

   and spplban.clsch == lstab.clschet
   and Year(dGetTune('UP.DATOTCH')) == lstab.yearn
   and Month(dGetTune('UP.DATOTCH')) == lstab.mesn

   and lstab.KauExtr[3] == katorg.nrec

   and katorg.nrec == katbank.corg
   and 1 == katbank.aktiv
))
;
.fields
  XarName
  ReesName
  Rab_Name
  Rab_Schet
  Rab_OKPO
  Rab_Bknm
  Rab_Mfo
  Mes
  God
  Npp//  Nom_lsh
  sOrg
  sBank
  sSchet
  FIO
  GetStrSummaExt(true, true, Sum_Per)
  KolList
  GetStrSummaExt(true, true, SumList1)
  SummaStr2
  SummaStr3
  Долж_рук
  Рук_пред
  Долж_бухг
  trim(GlavBuh_SignDoc)
  Гл_бухг
  KolList
  GetStrSummaExt(true, true, ItogSum_Reestr1)
  SummaStr2
  SummaStr3
  'true':'s'
.endfields
.begin
  KolList := 0;
  SumList1 := 0;
  ItogSumma1 := 0;
  sOrg:='';
end.
.{
.{
.[H OVERWRITE
.begin
  KolList:=KolList+1
end.
 Р Предприятие @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ Р
 Р @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ Р
 Р Получатель @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ Р
 Р Расчетный счет получателя ^ Код получателя ^ Р
 Р Банк ^ Р
 Р Код МФО банка ^ за ^ месяц &&&& г. Р
Заполнение происходит на основании 3-го уровня аналитики в лицевом счете в
закладке "Отнесение затрат"
 Р────┬──────────────────────────────┬──────────────────────────────┬─────────────────────────────┬────────────────────────────────────────┬───────────────── Р
 Р №  │       Организация            │            Банк              │            Счет             │          Фамилия, имя, отчество        │     Сумма Р
 Рп/п │                              │                              │                             │                                        │  перечисления Р
 Р────┼──────────────────────────────┼──────────────────────────────┼─────────────────────────────┼────────────────────────────────────────┼───────────────── Р
.]H
.begin
 if(t.getfirst sbban = tsOK) {};
 if (InStr('подох',LoCase(t.sbban.name)) = 0 and InStr('ндфл',LoCase(t.sbban.name)) = 0)
 {
   Message('Один из реестров не принадлежит перечислению подоходного налога.'''#13'В названии реестра должно быть слово "подоходный" или "НДФЛ"'''#13'Операция отменена');
   REESBVIP_01_fill_org.fExit;
 }
end.
.{
.begin
  SumList1 := SumList1 + Sum_Per;
  ItogSumma1 := ItogSumma1 + Sum_Per;
  if ((t.getfirst spplban = tsOK) and (t.getfirst lstab = tsOK) and (t.getfirst katorg = tsOK))
  {
    sOrg:=t.katorg.name
    if (t.getfirst katbank = tsOK)
    {
      sBank:=t.katbank.name;
      sSchet:=t.katbank.SCHET1;
      t.spplban.cpol := katorg.nrec;
      t.spplban.cbankpol := katbank.nrec;
      t.update current spplban;
    }
    else
    {
      sBank:='!!!Ошибка. Нет банка по умолчанию.';
      sSchet:='';
    }
  }
  else
  {
    sOrg:='!!!Ошибка. Проверьте привязку 3-го уровня аналитики в лицевом счете.'
  }
end.
 Р&&&&│@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@│@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@│@@@@@@@@@@@@@@@@@@@@@@@@@@@@@│@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@│&&&&&&&&&&&&&&&&& Р
.}
.[F OVERWRITE
 Р────┴──────────────────────────────┴──────────────────────────────┴─────────────────────────────┴────────────────────────────────────────┴───────────────── Р
 Р Итого по листу &&&:                                                                                                                    &#'&&&&&&&&&&&&&&&& Р
.begin
  //сумма прописью по листу
  SummaStr2 := '';
  SummaStr3 := '';
  SummaStr1 := DoubleToString(KodVal,SumList1);
  if length(SummaStr1) > 93
  {
    SummaStr2:= GetPartStr(SummaStr1,93);
    if Trim(SummaStr2)=''
     SummaStr2:=substr(SummaStr1,1,93);
     SummaStr3:= substr(SummaStr1,length(SummaStr2)+1,93);
  }
  else
  {
     SummaStr2:= SummaStr1;
     SummaStr3:= '';
  }
end.
 Р  Д@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ Д
  Д@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ Д
                             (сумма по листу прописью) Р
 Р  @@@@@@@@@@@@@@@@@@ ^ Р
 Р                                                 _______________ Р
 Р                                                    (подпись) Р
 Р  @@@@@@@@@@@@@@@@@@ ^ ^ Р
 Р                                                 _______________ Р
 Р                                                    (подпись) Р
.begin
 SumList1:=0 
end.
.]F
.}
 Р Кол-во листов &&&                     ВСЕГО К ПЕРЕЧИСЛЕНИЮ               &'&&&&&&&&&&&&&&&&&& Р
.begin
  //сумма прописью всего к перечислению
  SummaStr2:= '';
  SummaStr3:= '';
  SummaStr1:= DoubleToString(KodVal,ItogSum_Reestr1);
  if length(SummaStr1) > 93
  {
    SummaStr2:= GetPartStr(SummaStr1,93);
    if Trim(SummaStr2)=''
     SummaStr2:=substr(SummaStr1,1,93);
     SummaStr3:= substr(SummaStr1,length(SummaStr2)+1,93);
  }
  else
  {
    SummaStr2:= SummaStr1;
    SummaStr3:= '';
  }
end.
 Р  Д@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ Д
  Д@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ Д
                             (сумма прописью) Р
.begin
  KolList:= 0
end.
.if BRPAGE
^
.else
.end
.}
.endform
