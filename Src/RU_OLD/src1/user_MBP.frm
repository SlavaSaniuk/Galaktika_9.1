.LinkForm 'SPIS_MBP_006' Prototype is 'SPIS_MBP'
.Group '��� �� ᯨᠭ�� ���'
.Group '��� �� ᯨᠭ�� ��� (�����)'
.NameInList '�� ��� �����'
.p 40
.DEFO PORTRAIT
.LL 80
.var
  TotSum:Double
  IznSum:Double
  KolStr:Integer
  KolStr2:Integer
  KolPage:Integer
  KolPage2:Integer
  KolLine:Integer
  i:Integer
  arKolStr: ARRAY [1..2] of Integer
  arDate: ARRAY [1..2] of String
  arFIO: ARRAY [1..2] of String
  arTabN: ARRAY [1..2] of String
  arPerc: ARRAY [1..2] of Double
  arOstSt: ARRAY [1..2] of Double
  Header:String
  NomAct:String
  Org:String
  OKPO:String
  Podraz:String
  DatAct:String
  �����_童��_�����ᨨ:Word
  ���ᨢ_����_�����ᨨ_nRec: ARRAY [1..2] of Comp
  ���ᨢ_����_�����ᨨ_���: ARRAY [1..2] of String
  ���ᨢ_����_�����ᨨ_�������_�����: ARRAY [1..2] of String
  ���ᨢ_����_�����ᨨ_���������: ARRAY [1..2] of String
.endvar
.fields
  Header
  NomAct
  Org
  OKPO
  Podraz
  DatAct
  Podraz
  MBPName
  MBPNum
  MBPEd
  Kol
  Price
  if (wGetTune('Fin.MBP.OstStoim') = 0, SumPr, SumPr - SumIsn)
  SumIsn
  TotSum
  IznSum
  arFIO  [KolStr2 + KolStr]
  arTabN [KolStr2 + KolStr]
  DatAct
  arPerc [KolStr2 + KolStr]
  arOstSt[KolStr2 + KolStr]
.endfields
.{
.begin
  �����_童��_�����ᨨ := 0;


  for (�����_童��_�����ᨨ := 1; �����_童��_�����ᨨ <= Count(���ᨢ_����_�����ᨨ_nRec); �����_童��_�����ᨨ := �����_童��_�����ᨨ + 1)
  {
    ���ᨢ_����_�����ᨨ_nRec            [�����_童��_�����ᨨ] := comp(0);
    ���ᨢ_����_�����ᨨ_���             [�����_童��_�����ᨨ] := '';
    ���ᨢ_����_�����ᨨ_�������_����� [�����_童��_�����ᨨ] := '';
    ���ᨢ_����_�����ᨨ_���������       [�����_童��_�����ᨨ] := '';
  }

  �����_童��_�����ᨨ := 0;
end.
.{CheckEnter COMMISSIONMEMBER_SPISMBPPROT
.begin
  �����_童��_�����ᨨ := �����_童��_�����ᨨ + 1;
  ���ᨢ_����_�����ᨨ_nRec            [�����_童��_�����ᨨ] := ����_�����ᨨ_nRec;
  ���ᨢ_����_�����ᨨ_���             [�����_童��_�����ᨨ] := ����_�����ᨨ_���;
  ���ᨢ_����_�����ᨨ_�������_����� [�����_童��_�����ᨨ] := string(����_�����ᨨ_�������_�����);
  ���ᨢ_����_�����ᨨ_���������       [�����_童��_�����ᨨ] := ����_�����ᨨ_���������;
end.
.}
.begin
  �����_童��_�����ᨨ := 0;
end.
.begin
  KolStr   := 0
  KolStr2  := 0
  KolPage  := 0
  KolPage2 := 0
  Header := CommonFormHeader
  NomAct := Nom
  Org    :=  MyOrg
  OKPO   := ����
  Podraz := Podr
  DatAct := DateToStr( Dat, 'DD/MM/YYYY')
end.
.{CheckEnter SPSPIS
.[H
.begin
 TotSum := 0
 IznSum := 0
 KolPage := KolPage + 1
 KolStr2 := KolStr2 + KolStr
 KolStr := 0
end.
 ��^

                                      ����� ��� ��@@@@@@@@@@��                                                              �������������Ŀ
                   ������� ����業��� � ����ந���訢������ �।��⮢��                                              �     ����    �
                                                                                                                    �������������Ĵ
                                                                                                      ��ଠ �� ���� �   0320002   �
                                                                                                                    �������������Ĵ
 �࣠������  ��@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@��          �� ���� �@~@@@@@@@@@@@�
                            ��                                                                      ��                  ���������������
 ������୮� ���ࠧ�������  ��@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@��
                                                                               ��������������������������������������������������Ŀ
                                                                               �   ���   �   ���    �       C�����୮�          �
                                                                               �  ��⠢- �   ����   �      ���ࠧ�������         �
                                                                               �   �����  � ����樨 �                            �
                                                                               �          �          �                            �
                                                                               ��������������������������������������������������Ĵ
                                                                               ���@@@@@@@@@@���          ���@@@@@@@@@@@@@@@@@@@@@@@@@@@@���
                                                                               ����������������������������������������������������
���������������������������������������������������������������������������������������������������������������������������������Ŀ
�                        �।���                             ������� ����७��      �              �      �㬬�, ��. ���.      �
������������������������������������������������������������������������������Ĵ ����-�    ����,     ����������������������������Ĵ
�    ������������,                              ������������-����� ���������������⢮�   ��.���.   �  ��� ���  �   �����-    �
�  ���,ࠧ���,��ઠ                            � ��  ����� �   �             �      �              �     ���     �   ��樨      �
���������������������������������������������������������������������������������������������������������������������������������Ĵ
�                        1                      �     2      � 3 �      4      �   5  �      6       �      7      �       8      �
���������������������������������������������������������������������������������������������������������������������������������Ĵ
.]H
.begin
 i := 0;
end.
.{while ((GroupWrap(MBPName, i + 1, 21) <> '') or (GroupWrap(MBPNum, i + 1, 12) <> '') or (GroupWrap(PrName, i + 1, 17) <> ''))
.begin
 i := i + 1;
end.
.}
.begin
 KolLine := KolLine + i;

 if (4 - KolLine < 0)
   i := 4 - KolLine + i;
 else
    i := 0;
end.
.{while ((i > 0) and (KolStr > 0))
�                                               �            �   �             �      �              �             �              �
.begin
  i := i - 1;
end.
.}
.begin
 TotSum := TotSum + if ( wGetTune( 'Fin.MBP.OstStoim') = 0, SumPr, SumPr - SumIsn)
 IznSum := IznSum + SumIsn
 KolStr := KolStr + 1
 arDate [KolStr2 + KolStr] := if ( LongInt( explDate) > 0, DateToStr( explDate, 'DD/MM/YYYY'), '')
 arFIO  [KolStr2 + KolStr] := PersFIO
 arTabN [KolStr2 + KolStr] := TabNum
 arPerc [KolStr2 + KolStr] := tPerc
 arOstSt[KolStr2 + KolStr] := OstStoim
end.
�@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@�@@@@@@@@@@@@�   �@@@@@@@@@@@@@�&&&.&&�&'&&&&&&&&&.&&�&#'&&&&&&&.&&� &#'&&&&&&&.&&�
.[F
.begin
  arKolStr[KolPage] := KolStr
  KolLine := KolLine - 4;
end.
���������������������������������������������������������������������������������������������������������������������������������Ĵ
                                                                                              ���⮣���  ���&#'&&&&&&&.&&����� &#'&&&&&&&.&&���
 ��稭� ����� __________________________________________________                                  ������������������������������
                 __________________________________________________________________________________________________________________
                 __________________________________________________________________________________________________________________

 ������� (�ᯮ���⥫� ࠡ��)��   _________________     _______________________
                                   �������            ����஢�� ������

.]F
.}
.begin
  KolStr := 0
  KolStr2 := 0
end.
.{while (KolPage2 < KolPage)
.begin
  KolStr2 := KolStr2 + KolStr
  KolStr := 0
  KolPage2 := KolPage2 + 1
end.

.{?internal;KolPage2 > 1
 
.}
                                                                                                    ����⭠� ��஭� ���
 ���������������������������������������������������������������������������������������������������������������������������������Ŀ
 �                       �         �          �              �               ����� 㤥ঠ���                        �             �
 �                       �         �          �              �                                                       �             �
 �   �������, �., �.     �������멳   ���   �   �������    �������������������������������������������������������Ĵ             �
 �                       �  �����  � ��।�� �   ᤠ�襣�   �       � �⮨�����  �       ���            �           �������� ���,�
 �                       �         �          �  ����業��  ���業� �� ���⮬ ����������������������Ĵ           �����稢襣�  �
 �                       �         �          �  � ����ந�- ������-�����⨧�樨,����������������������Ĵ           �    ���      �
 �                       �         �          � ��訢��騥�� � ��樨 � ��. ���.  � ࠧ���  �   c㬬�,   �   �㬬�,  �             �
 �                       �         �          ��।���� (���)�       �            �(��業�)�  ��. ���. �  ��.���  �             �
 ���������������������������������������������������������������������������������������������������������������������������������Ĵ
 �           1           �    2    �    3     �       4      �   5   �     6      �    7    �      8     �     9     �     10      �
 ���������������������������������������������������������������������������������������������������������������������������������Ĵ��
.{while (KolStr < arKolStr[KolPage2])
.begin
  KolStr := KolStr + 1
end.
�� �@@@@@@@@@@@@@@@@@@@@@@@�@@@@@@@@@�@~@@@@@@@@�              �&#'&.&&�&#'&&&&&&.&&�         �            �           �             �
.}
 �������������������������������������������������������������������������������������������������������������������������������������
��

    "  " ___________201   �.��
.}

.}
.endform