.LinkForm 'ms_sklad_nalichieMcVed_frm' Prototype is 'NAL_ALL'
.Group '000'
.NameInList '(��) ��������� ������� ���� (���, FRM)'
.p 60
.var
  mcNrec, krNrec, spName :String;
.endvar
.create view Kaus
  from KatMc, KauReff, SpKau
  where ((
    Comp(NrecMc) == KatMc.nrec
    and KatMc.nrec == KauReff.crec
    and Word(1411) == KauReff.cotable
    and Word(10265) == KauReff.wkau
    and KauReff.ckau == SpKau.nrec
));
.fields
  CommonFormHeader
  DateToStr(dDate,'DD mon YYYY')
  VidUcheta
  FilterInfo
  NameMc
  CodeMC
  NameEd
  Podr
  Mol
  Party
  Kol
  Price1
  Summa1
  mcNrec
  krNrec
  spName
  Itogo1
.endfields
^
��                     � � � � � � � � �   � � � � � � �   � � � � � �
                      �� �।����� �� ^�.��

��
^
�������
.{
  ^
.}
.{
.[H OVERWRITE

������������������������������������������������������������������������������������������������������������������������������������������������������������
        ������������ ⮢��           ������������멳 ������ � ���ࠧ������� �      ���      �    �����    �  ������⢮ � ��⭠� 業� �   �⮨�����
                                      �    �����     �����७��               �               �              �             �              �� ����� 業��
������������������������������������������������������������������������������������������������������������������������������������������������������������
.]H
.{CheckEnter

.begin
  message('Nrec MC: ' +NrecMc);
  mcNrec := String(NrecMc);
  if(Kaus.getfirst KauReff where ((Comp(NrecMc) == KauReff.crec
                                    and Word(1411) == KauReff.cotable
                                    and Word(10265) == KauReff.wkau  ))= tsOk) {
     message('KauReff Nrec: ' +String(Kaus.KauReff.nrec));
     krNrec := String(Kaus.KauReff.nrec);
     if(Kaus.getfirst SpKau where ((KauReff.ckau == Spkau.nrec))= tsOk) {
       message('SpKau name: ' +Kaus.SpKau.name);
       spName := Kaus.SpKau.name;
  }}
end.

@@@@@@@@@@@@@@@@@@@@@@@@@ @@@@@@@@@@@@@@ @@@@@@@@@ @@@@@@@@@@@@@@@ @@@@@@@@@@@@@@@ @@@@@@@@@@@@@@ &'&&&&&&&&&&& &'&&&&&&&&&&&& &'&&&&&&&&&&&&&&
@@@@@@@@@@@@@@@@@@@@@@@@@ @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
.}

.}

��                ����� �� �����������                                                                                                  &'&&&&&&&&&&&&&&&&&&&&��


.endform
