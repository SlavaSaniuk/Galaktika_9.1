.LinkForm 'PRIHNKL_MC' Prototype is 'tovn'
.Group '��室�� ��������'
.NameInList 'MC - ��ନ஢���� �����᪮� 業� ��'
.var
  i:Integer
.endvar
.Create   view tSP
from
   SpSopr (ReadOnly)
  ,KatParty
where
((
    ᯥ�䨪��_�४  == SpSopr.nrec
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
  tsP.katparty.CENAZAV:=������        //����_��恍;
  tsP.update current katparty;
  inc(i);
  }
  else
  message('�� ������� ����� ��� �� '+��������);
  }
end.
.}
.{CheckEnter TOVNUSL
.}
.{
.}
���������� ^ ������� ������������ ���������.
.}
.endform
