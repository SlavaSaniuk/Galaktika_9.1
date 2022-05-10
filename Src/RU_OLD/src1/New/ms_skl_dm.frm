.LinkForm 'TINYPAR_003MS' Prototype is 'TinyPar'
.Group '�����������'
.NameInList '� ᮤ�ঠ���� �ࠣ��⠫��� ��'
.p 60
.[H SKIP
��  ����@np@
���������������������������������������������������������������������������������������������������������������������������������������
 ������������ ��/�ࠣ���. �  ������. �����   ���.��.�  �������� �������  �       ������       �       ������       ���������� �������
���������������������������������������������������������������������������������������������������������������������������������������
          (1)             �       (2)        �  (3) �        (4)         �         (5)        �         (6)        �         (7)
�����������������������������������������������������������������������������������������������������������������������������������������
.]H
.var
  molKolB:Double
  molKolA:Double
  molKolS:Double
  molKolE:Double
  SklKol:Double
  AllKol:Double
.endvar
.Create view VDrag
from  KatDrag(readonly), NalDrag(readonly), KatEd(readonly), TmpSaldo2, synonym NalDrag NalDrag2
where
(( word(3)          == NalDrag.TiDk   and
   ��_४           == NalDrag.cKatOS and
   NalDrag.cKatDrag == KatDrag.nRec   and
   KatDrag.cKatEd   == KatEd.nRec
))
;
.Create view MOLDrag
from  KatDrag(readonly),  KatEd(readonly)
where
(( ���_४          == TmpSaldo2.cMOL (noindex) and
   -1               == TmpSaldo2.cPodr(noindex) and
   TmpSaldo2.cMC    == KatDrag.nRec   and
   KatDrag.cKatEd   == KatEd.nRec
))
;
.Create view PodrDrag
from  KatDrag(readonly),  KatEd(readonly)
where
(( ᪫��_४        == TmpSaldo2.cPodr(noindex) and
   -1               == TmpSaldo2.cMOL (noindex) and
   TmpSaldo2.cMC    == KatDrag.nRec    and
   KatDrag.cKatEd   == KatEd.nRec
))
;
.Create view AllDrag
from  KatDrag(readonly),  KatEd(readonly)
where
(( -2               == TmpSaldo2.cPodr(noIndex) and
   TmpSaldo2.cMC    == KatDrag.nRec             and
   KatDrag.cKatEd   == KatEd.nRec
))
;
.function IF01(_d:double):double;
begin
  if01 := if ( abs(_d) < GetPresision_forKol, 1, _d) ;
end.
.function INSERTTMP2_DM(cDM_, cPodr_, cMOL_:comp):boolean;
begin
InsertTmp2_DM := true;
 
if VDrag.GetFirst TmpSaldo2 where ((cDM_   == TmpSaldo2.cMC   and
                                    cPodr_ == TmpSaldo2.cPodr and
                                    cMOL_  == TmpSaldo2.cMOL ))<>tsOk
  { VDrag.TmpSaldo2.cMC  := cDM_;
    VDrag.TmpSaldo2.cMOL := cMOL_;
    VDrag.TmpSaldo2.cPodr:= cPodr_;
    VDrag.TmpSaldo2.kol := tbk * VDrag.NalDrag.Kol;  VDrag.TmpSaldo2.kolP:= tak * VDrag.NalDrag.Kol;
    VDrag.TmpSaldo2.kolR:= tsk * VDrag.NalDrag.Kol;  VDrag.TmpSaldo2.sumP:= tek * VDrag.NalDrag.Kol;
    VDrag.insert current TmpSaldo2;
  }
else
  { VDrag.TmpSaldo2.kol := VDrag.TmpSaldo2.kol  + tbk * VDrag.NalDrag.Kol;
    VDrag.TmpSaldo2.kolP:= VDrag.TmpSaldo2.kolP + tak * VDrag.NalDrag.Kol;
    VDrag.TmpSaldo2.kolR:= VDrag.TmpSaldo2.kolR + tsk * VDrag.NalDrag.Kol;
    VDrag.TmpSaldo2.sumP:= VDrag.TmpSaldo2.sumP + tek * VDrag.NalDrag.Kol;
    VDrag.update current TmpSaldo2;
  }
end.
.fields
  ���_��砫쭠�
  ���_����筠�
  sPodr
  sMOL
  sMC
  sParty
  ᪫��_���
  ���_���
  ��_���
  ��_���
  ��_���_���
  VDrag.KatDrag.Name
  VDrag.KatDrag.Kod
  VDrag.KatEd.Name
  DoubleToStr(tbk * VDrag.NalDrag.Kol, '[|-]3666`666`666`666.8889999999')
  DoubleToStr(tak * VDrag.NalDrag.Kol, '[|-]3666`666`666`666.8889999999')
  DoubleToStr(tsk * VDrag.NalDrag.Kol, '[|-]3666`666`666`666.8889999999')
  DoubleToStr(tek * VDrag.NalDrag.Kol, '[|-]3666`666`666`666.8889999999')
  MOLDrag.KatDrag.Name
  MOLDrag.KatDrag.Kod
  MOLDrag.KatEd.Name
  DoubleToStr(MOLDrag.TmpSaldo2.kol , '[|-]3666`666`666`666.8889999999')
  DoubleToStr(MOLDrag.TmpSaldo2.kolP, '[|-]3666`666`666`666.8889999999')
  DoubleToStr(MOLDrag.TmpSaldo2.kolR, '[|-]3666`666`666`666.8889999999')
  DoubleToStr(MOLDrag.TmpSaldo2.sumP, '[|-]3666`666`666`666.8889999999')
  PodrDrag.KatDrag.Name
  PodrDrag.KatDrag.Kod
  PodrDrag.KatEd.Name
  DoubleToStr(PodrDrag.TmpSaldo2.kol , '[|-]3666`666`666`666.8889999999')
  DoubleToStr(PodrDrag.TmpSaldo2.kolP, '[|-]3666`666`666`666.8889999999')
  DoubleToStr(PodrDrag.TmpSaldo2.kolR, '[|-]3666`666`666`666.8889999999')
  DoubleToStr(PodrDrag.TmpSaldo2.sumP, '[|-]3666`666`666`666.8889999999')
  ALLDrag.KatDrag.Name
  ALLDrag.KatDrag.Kod
  ALLDrag.KatEd.Name
  DoubleToStr(ALLDrag.TmpSaldo2.kol , '[|-]3666`666`666`666.8889999999')
  DoubleToStr(ALLDrag.TmpSaldo2.kolP, '[|-]3666`666`666`666.8889999999')
  DoubleToStr(ALLDrag.TmpSaldo2.kolR, '[|-]3666`666`666`666.8889999999')
  DoubleToStr(ALLDrag.TmpSaldo2.sumP, '[|-]3666`666`666`666.8889999999')
.endfields

��
       ��ୠ� ��� �ࠣ�業��� ��⠫��� (������) � ��
        (����⭠� ��������� � ^ �� ^)
��
  �ᯮ��㥬� 䨫���� :
  �����  : ^
  ���    : ^
  ��     : ^
  ����� : ^
��
  ����@np@
���������������������������������������������������������������������������������������������������������������������������������������
 ������������ ��/�ࠣ���. �  ������. �����   ���.��.�  �������� �������  �       ������       �       ������       ���������� �������
���������������������������������������������������������������������������������������������������������������������������������������
          (1)             �       (2)        �  (3) �        (4)         �         (5)        �         (6)        �         (7)
�����������������������������������������������������������������������������������������������������������������������������������������
.begin
delete all TmpSaldo2;
end.
.{CheckEnter TINYPARPODR
����� ^
.{CheckEnter TINYPARMOL
��� ^
.{CheckEnter TINYPARMC
.begin
//if VDrag.getFirst NalDrag <>tsOk  { message(��_४); TinyPar_003.fcontinue; }
end.
��@@@@@@@@@@@@@@@@@@@@@@@@@@ @@@@@@@@@@@@@@@@@@ @@@@@@��
.{CheckEnter TINYPARPARTY
.}
.{table 'VDrag.NalDrag'
.begin
   InsertTmp2_DM(VDrag.KatDrag.nRec, -1       , ���_४); //�㬬��㥬 �� �� ���
   InsertTmp2_DM(VDrag.KatDrag.nRec, ᪫��_४, -1);      //�㬬��㥬 �� ����.
   InsertTmp2_DM(VDrag.KatDrag.nRec, -2       ,  0);      //�㬬��㥬 ��騩 �⮣
end.
�� @@@@@@@@@@@@@@@@@@@@@@@@@ @@@@@@@@@@@@@@@@@@ @@@@@@ &&&&&&&&&&&.&&&&&&& &&&&&&&&&&&&&.&&&&&& &&&&&&&&&&&&.&&&&&&& &&&&&&&&&&&&&.&&&&&&��
.}
.}
 ����� �� ���
.{table 'MOLDrag.TmpSaldo2'
�� @@@@@@@@@@@@@@@@@@@@@@@@@ @@@@@@@@@@@@@@@@@@ @@@@@@ &&&&&&&&&&&.&&&&&&& &&&&&&&&&&&&&.&&&&&& &&&&&&&&&&&&.&&&&&&& &&&&&&&&&&&&&.&&&&&&��
.}
.begin
delete TmpSaldo2 where (( ���_४ == TmpSaldo2.cMOL  (noindex) and
                               -1 == TmpSaldo2.cPodr (noindex) ));
end.
.}
����� �� ������
.{table 'PodrDrag.TmpSaldo2'
�� @@@@@@@@@@@@@@@@@@@@@@@@@ @@@@@@@@@@@@@@@@@@ @@@@@@ &&&&&&&&&&&.&&&&&&& &&&&&&&&&&&&&.&&&&&& &&&&&&&&&&&&.&&&&&&& &&&&&&&&&&&&&.&&&&&&��
.}
�� ---------------------------------------------------------------------------------------------------------------------------------------��
.begin
delete TmpSaldo2 where (( ᪫��_४ == TmpSaldo2.cPodr (noindex) and
                               -1   == TmpSaldo2.cMOL  (noindex) ));
end.
.}
����� �� ���������
.{table 'AllDrag.TmpSaldo2'
�� @@@@@@@@@@@@@@@@@@@@@@@@@ @@@@@@@@@@@@@@@@@@ @@@@@@ &&&&&&&&&&&.&&&&&&& &&&&&&&&&&&&&.&&&&&& &&&&&&&&&&&&.&&&&&&& &&&&&&&&&&&&&.&&&&&&��
.}

   �㪮����⥫� �।�����

   ������ ��壠���

   �.�.
.endform
