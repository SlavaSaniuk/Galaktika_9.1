.LinkForm 'PRIHNKL_MC' Prototype is 'tovn'
.Group 'ā¨åŽ¤­ëĨ ­ ĒĢ ¤­ëĨ'
.NameInList 'MC - ŽāŦ¨āŽĸ ­¨Ĩ § ĸŽ¤áĒŽŠ æĨ­ë '
.var
  i:Integer
.endvar
.Create   view tSP
from
   SpSopr (ReadOnly)
  ,KatParty
where
((
    á¯Ĩæ¨ä¨Ē æ¨ī_­āĨĒ  == SpSopr.nrec
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
  tsP.katparty.CENAZAV:= Ē        //Ĩ­ _­ æ;
  tsP.update current katparty;
  inc(i);
  }
  else
  message('Ĩ ­ Š¤Ĩ­  ¯ āâ¨ī ¤Ģī  '+ §ĸ ­¨Ĩ);
  }
end.
.}
.{CheckEnter TOVNUSL
.}
.{
.}
 ^   .
.}
.endform
