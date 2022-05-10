.LinkForm 'PRIHNKL_MC' Prototype is 'tovn'
.Group 'Приходные накладные'
.NameInList 'MC - Формирование заводской цены МЦ'
.var
  i:Integer
.endvar
.Create   view tSP
from
   SpSopr (ReadOnly)
  ,KatParty
where
((
    спецификацияМЦ_нрек  == SpSopr.nrec
      and SpSopr.cParty  == KatParty.nRec
))
;
.fields
  i
.endfields
.begin
i:=0
end.
.{
.if TOVN01
.else
.end
.if TOVN02
.else
.end
.{
.begin
  if(tsP.getfirst spsopr = tsok)
  {
  if tsP.katparty.nrec <> 0
  {
  tsP.katparty.CENAZAV:=ЦНакБН        //Цена_нацБН;
  tsP.update current katparty;
  inc(i);
  }
  else
  message('Не найдена партия для МЦ '+Название);
  }
end.
.}
.{CheckEnter TOVNUSL
.}
.{
.}
ОБРАБОТАНО ^ ЗАПИСЕЙ СПЕЦИФИКАЦИИ НАКЛАДНОЙ.
.}
.endform
