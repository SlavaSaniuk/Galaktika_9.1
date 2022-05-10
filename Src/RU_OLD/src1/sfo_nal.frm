.LinkForm 'SFO_DOLG_02ZZ' Prototype is 'SFO_DOLGPROT'
.Group '����� ������������'
.NameInList '"����㣮த��� ���" - ��ࠢ�� � ������������ �� ��� (� ��������)'
.var
  frmSum:Double
  spcSum:Double
  OrigSum:Double
  NDSSum:Double
  ProdNalSum:Double
  Sum_frm_Spec:Double
  All_Sum:Double
  All_NDSSum:Double
  All_ProdNalSum:Double
  wRound:Word
.endvar
.fields
  CommonFormHeader
  OrgName
  SprNo
  DateToStr( sprDate, 'DD')
  DateToStr( sprDate, 'Mon')
  DateToStr( sprDate, 'YYYY')
  FIO
  TabN
  Podr
  DateToStr( uvDate, 'DD/MM/YYYY')
  frName
  frKod
  frEd
  DateToStr( frGiveDate, 'DD/MM/YYYY')
  frKol
  frKol*frOrigPrice        //frPrice
  frSrok
  frOstSr
  if ( Longint( frEndDate) > 0, DateToStr( frEndDate, 'DD/MM/YYYY'), '')
  if ( Word( frSrok) > 0, frPrice/Word( frSrok), 0)
  frDolgSum
  OrigSum
  frmSum
  spName
  spKod
  spEd
  DateToStr( spGiveDate, 'DD/MM/YYYY')
  spKol
  spKol*spOrigPrice                //spPrice
  spSrok
  spOstSr
  if ( Longint( spEndDate) > 0, DateToStr( spEndDate, 'DD/MM/YYYY'), '')
  if ( Word( spSrok) > 0, spPrice/Word( spSrok), 0)
  spDolgSum
  OrigSum
  spcSum
.endfields
.function MY_ROUND(value: Double; tochn: Double; tip: Word): Double; // �㭪�� ���㣫���� ��� �ࠢ�� � ������������;
var i: Integer;    // tip : 0 - ���㣫��� � �ࠢ����, 1 - � ������� ��஭�
var tmp: Double;  // value - �� ���㣫���, tochn - �筮���
begin
  if (tochn <> 0)
  {
    i := 0;
    my_Round := Value;
    tmp := tochn;
 
    Case tip Of
    //------------------
      0: if (tochn > 1)
         {
           do
           {
             i := i + 1;
             tochn := tochn / 10;
           }
           While tochn > 1
 
           my_Round := Round(Value, -i);
         }
         else
         {
           While tochn < 1
           do
           {
             i := i + 1;
             tochn := tochn * 10;
           }
 
           my_Round := Round(Value, i);
         }
    //------------------
      1: if (tochn > 1)
         {
           do
           {
             i := i + 1;
             tochn := tochn / 10;
           }
           While tochn > 1
 
           my_Round := Trunc(Value, -i);
 
           if ((Value - Trunc(Value, -i)) > 0)
             my_Round := my_Round + Tmp;
         }
         else
         {
           While tochn < 1
           do
           {
             i := i + 1;
             tochn := tochn * 10;
           }
 
           my_Round := Trunc(Value, i);
 
           if ((Value - Trunc(Value, i)) > 0)
             my_Round := my_Round + Tmp;
         }
    //------------------
      End; // case
  }
  else
    my_Round := Value;
end.
.function GETKOP( pSum : double) : String;
begin
  getKop := DoubleToStr( pSum, '\2p88');
end.
.fields
  Sum_frm_Spec
  DoubleToStr( Sum_frm_Spec, '\2p\m4')
  GetKop( Sum_frm_Spec)
  NDSSum
  DoubleToStr( NDSSum, '\2p\m4')
  GetKop( NDSSum)
  ProdNalSum
  DoubleToStr( ProdNalSum, '\2p\m4')
  GetKop( ProdNalSum)
  All_Sum
  DoubleToStr( All_Sum, '\2p\m4')
  GetKop( All_Sum)              //  MainBuhShort
  FIO
.endfields
.begin
  frmSum := 0;  spcSum := 0;  OrigSum := 0;
  NDSSum := 0;  ProdNalSum := 0;
  wRound := wGetTune ( 'Fin.ReportRound');
end.
 ^
 ^

                        ������� � ��^��
                     � ������������ ࠡ�⭨��
                 �� ᯥ樠�쭮� (�ଥ����) ������
                       "��^��" ��^�� ��^�� �.

������� ��� ����⢮: ��^��
���. �����: ��^��
���ࠧ�������: ��^��
��� 㢮�쭥���: ��^��
.{?internal;(frmFlag=True)

1. ��ଥ���� ������ � ����
����������������������������������������������������������������������������������������������������������������������������������������������Ŀ
�                     �           �         �          �      � ��ࢮ��砫쭠� �  �ப   �����   �ப   �      �㬬�     �      �㬬�      �
�     ������������    ��������. � � ��.���. ���� �뤠糊��-���    �⮨�����   � �㦡�  ��ப�� ����砭��   � 㤥ঠ���  �   � 㤥ঠ���   �
�                     �           �         �          �      �                �  (���)  �(���)�   ��᪨  �    �� �����    �                 �
��������������������������������������������������������������������������������������������������������������������������������������������Ĵ
.{CheckEnter FRMDLGCIR
.begin
  frmSum := frmSum + frDolgSum;
  OrigSum:= OrigSum + frKol*frOrigPrice;
  NDSSum := NDSSum + frNDSSum;
  ProdNalSum := ProdNalSum + frProdNalSum;
end.
�@@@@@@@@@@@@@@@@@@@@@�@@@@@@@@@@@�@@@@@@@@@�@@@@@@@@@@�&#&&&&�&#'&&&&&&&&&&.&&�&#&&&&&&&�&#&.&�@@@@@@@@@@�&#'&&&&&&&&&&.&&�&#'&&&&&&&&&&&.&&�
.}
������������������������������������������������������������������������������������������������������������������������������������������������
��  �⮣�:                                                      &#'&&&&&&&&&&&.&&                                             &#'&&&&&&&&&&&.&&��
.}
.{?internal;(spcFlag=True)
.begin
  OrigSum := 0;
end.

2. ���樠�쭠� ������ � ����
����������������������������������������������������������������������������������������������������������������������������������������������Ŀ
�                     �           �         �          �      � ��ࢮ��砫쭠� �  �ப   �����   �ப   �      �㬬�     �      �㬬�      �
�     ������������    ��������. � � ��.���. ���� �뤠糊��-���    �⮨�����   � �㦡�  ��ப�� ����砭��   � 㤥ঠ���  �   � 㤥ঠ���   �
�                     �           �         �          �      �                �  (���)  �(���)�   ��᪨  �    �� �����    �                 �
��������������������������������������������������������������������������������������������������������������������������������������������Ĵ
.{CheckEnter SPCDLGCIR
.begin
  spcSum := spcSum + spDolgSum;
  OrigSum:= OrigSum + spKol*spOrigPrice;
  NDSSum := NDSSum + spNDSSum;
  ProdNalSum := ProdNalSum + spProdNalSum;
end.
�@@@@@@@@@@@@@@@@@@@@@�@@@@@@@@@@@�@@@@@@@@@�@@@@@@@@@@�&#&&&&�&#'&&&&&&&&&&.&&�&#&&&&&&&�&#&.&�@@@@@@@@@@�&#'&&&&&&&&&&.&&�&#'&&&&&&&&&&&.&&�
.}
������������������������������������������������������������������������������������������������������������������������������������������������
��  �⮣�:                                                      &#'&&&&&&&&&&&.&&                                             &#'&&&&&&&&&&&.&&��
.}

.begin
  Sum_frm_Spec := if (wRound <> 0, my_Round( frmSum + spcSum, doGetTune( 'Fin.RoundRubDouble'), wRound - 1), frmSum + spcSum)
  NDSSum       := if (wRound <> 0, my_Round( NDSSum,          doGetTune( 'Fin.RoundRubDouble'), wRound - 1), NDSSum)
  ProdNalSum   := if (wRound <> 0, my_Round( ProdNalSum,      doGetTune( 'Fin.RoundRubDouble'), wRound - 1), ProdNalSum)
  All_Sum      := if (wRound <> 0, my_Round( Sum_frm_Spec + NDSSum + ProdNalSum, doGetTune( 'Fin.RoundRubDouble'), wRound - 1), Sum_frm_Spec + NDSSum + ProdNalSum)
end.
��  �⮣�:                 &#'&&&&&&&&&&&.&& ( ^��. ^ ���.)
  �㬬� ���:             &#'&&&&&&&&&&&.&& ( ^��. ^ ���.)
  �㬬� ������ � �த��: &#'&&&&&&&&&&&.&& ( ^��. ^ ���.)
  �⮣� � 㤥ঠ���:     &#'&&&&&&&&&&&.&& ( ^��. ^ ���.)��

 ��壠��� _____________________________________

 � ���⮬ ᮣ��ᥭ ___________________________  ^

.endform
