.LinkForm 'SKORDER_003' Prototype is 'SKORDER'
.Group '�����᪮� �थ�'
.NameInList '�� ��������� �����'
.var
  sender:String
  recipient:String
.endvar
.Create  view localSklOrder
from
  SklOrder
;
.fields
  //CommonFormHeader
  OrdName
  nOrder
  dOrder
  Osnov
  Sklad
  '� '+RublSimv
  '� '+RublSimv
  NNomer
  MC
  ED
  Kol
  Price
  Summ
  Itogo
  //sender
  recipient
.endfields
��
.{

                            @@@@@@@@@ ����� �  ^
                               �� ^
.if SKLORDER01
   �᭮�����  : ^
.if SKLORDER02
.else
.end
.else
.end
   �����      : @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

�������������������������������������������������������������������������������������������������������������
�����������멳    ���ਠ���  業����   � ������ �    ������⢮    �     ����      �    �⮨�����
    �����     �                             �����७��                  � @~@@@@@@@@@@@ �  @~@@@@@@@@@@@
�����������������������������������������������������������������������������������������������������������
.{
.{
&&&&&&&&&&&&&& @@@@@@@@@@@@@@@@@@@@@@@@@@@@@ @@@@@@@@@ &'&&&&&&&&&&&&&&&& &&&&&&&&&&&&&&& &'&&&&&&&&&&&&&&&
.}
.}
�����������������������������������������������������������������������������������������������������������
��   �⮣� :                                                                                &&&&&&&&&&&&&&&&&��
.}
.begin
  sender    := '_____________________';
  recipient := '_____________________';
  localSklOrder.GetFirst SklOrder where ((SklOrderRec == SklOrder.nRec));
  if (localSklOrder.SklOrder.vidOrder = 0) // ��室��
  {
    if (Mol = '')
    then sender := '_____________________'
    else sender := Mol;
  }
  if (localSklOrder.SklOrder.vidOrder = 1) // ��室��
  {
    if (Mol = '')
    then recipient := '_____________________'
    else recipient := Mol;
  }
end.

                ���ᠫ :^��

               �஢����:
.endform
