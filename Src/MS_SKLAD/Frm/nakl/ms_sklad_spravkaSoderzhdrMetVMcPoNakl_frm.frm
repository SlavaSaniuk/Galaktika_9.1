.LinkForm 'ms_sklad_spravkaSoderzhdrMetVMcPoNakl_frm' Prototype is 'TOVN'
.Group 'Накладные на продажу'
.Group 'ТТН_600'
.Group 'ТТН_600 (fast)'
.NameInList '(МС) Справка о содержании драгметаллов в МЦ по накладной'
.DEFP PA4
.DEFO LANDSCAPE
.var
  sArr: ARRAY [1..50] of String
  dArr: ARRAY [1..50] of Double
  dArrT:Double
  i:LongInt
  ii:LongInt
.endvar
.Create                    view temp
from
  SpSopr,
  KatMc,
  Naldrag,
  KatDrag
  where
((
  спецификацияМЦ_нрек  == SpSopr.NRec
  and SpSopr.cMCUSL    == KatMC.NRec
  and word(3)          == Naldrag.TIDK
  and KatMC.NRec       == Naldrag.cKatos
  and Naldrag.cKatDrag == KatDrag.Nrec
))
;
.Create                    view tmp
from
  KatDrag (KatDrag03)
;
.fields
  Номер_с_дескриптором
  Дата
  Получатель
  sArr[1]
  sArr[2]
  sArr[3]
  sArr[4]
  sArr[5]
  sArr[6]
  sArr[7]
  sArr[8]
  sArr[9]
  sArr[10]
  Номер_пп
  Название
  ОтпЕд
  if(dArr[1]>0,doubletostr(dArr[1],'66666.888888'),'')
  if(dArr[2]>0,doubletostr(dArr[2],'66666.888888'),'')
  if(dArr[3]>0,doubletostr(dArr[3],'66666.888888'),'')
  if(dArr[4]>0,doubletostr(dArr[4],'66666.888888'),'')
  if(dArr[5]>0,doubletostr(dArr[5],'66666.888888'),'')
  if(dArr[6]>0,doubletostr(dArr[6],'66666.888888'),'')
  if(dArr[7]>0,doubletostr(dArr[7],'66666.888888'),'')
  if(dArr[8]>0,doubletostr(dArr[8],'66666.888888'),'')
  if(dArr[9]>0,doubletostr(dArr[9],'66666.888888'),'')
  if(dArr[10]>0,doubletostr(dArr[10],'66666.888888'),'')
.endfields
.begin
  i := 1
  tmp._loop KatDrag
  {
   sArr[i] := tmp.KatDrag.name
   i := i +1
  }
end.
.{
 Справка о содержании драгметаллов в МЦ по накладной №  ^  от ^

.if TOVN01
.else
.end
.if TOVN02
.else
.end
 Получатель : @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
 Ш────┬──────────────────────────────┬────────┬───────────┬───────────┬───────────┬───────────┬───────────┬───────────┬───────────┬───────────┬───────────┬───────────┬
№п/п│      Наименование МЦ         │ Ед.изм.│@@@@@@@@@@@│@@@@@@@@@@@│@@@@@@@@@@@│@@@@@@@@@@@│@@@@@@@@@@@│@@@@@@@@@@@│@@@@@@@@@@@│@@@@@@@@@@@│@@@@@@@@@@@│@@@@@@@@@@@│
────┴──────────────────────────────┴────────┴───────────┴───────────┴───────────┴───────────┴───────────┴───────────┴───────────┴───────────┴───────────┴───────────┴ И
.{
.begin
if (temp.GetFirst spsopr = tsok){}
   for (ii:=1; ii <= i; ii := ii+1 )
   {
  dArr[ii]:=0
   }
  dArrT := 0
  temp._loop naldrag
  {
   for (ii:=1; ii <= i; ii := ii+1 )
   {
   if (sArr[ii] = temp.katdrag.name)
      break;
   }
   dArr[ii] := temp.naldrag.kol
   dArrT := dArrT + dArr[ii]
  }
end.
.{?internal; ( dArrT>0 )
 И@@@ @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ @@@@@@@@ @@@@@@@@@@@ @@@@@@@@@@@ @@@@@@@@@@@ @@@@@@@@@@@ @@@@@@@@@@@ @@@@@@@@@@@ @@@@@@@@@@@ @@@@@@@@@@@ @@@@@@@@@@@ @@@@@@@@@@@ И
.}
.}
.{CheckEnter TOVNUSL
.}
.{
.}
.}
 И─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────
.endform
