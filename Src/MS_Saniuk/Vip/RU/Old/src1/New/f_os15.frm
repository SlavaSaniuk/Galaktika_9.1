.LinkForm 'PRINTINMOVNAK_30P' Prototype is 'printinmovnak'
.Group 'Vnut'
.NameInList '15. ��� �� ᤠ�� ����㤮����� � ���⠦ (��ଠ � OC-15)'
.p 60
.var
  PrintObr:Boolean
.endvar
.fields
  CommonFormHeader
  �࣠������ +' ��� '+���
  ' ���� '+���_����+' ���� '+���_����_���
  ' ��� '+���_����_���+' ��� '+���_����_��
  ����
  Nom
  Datetostr( Dat, 'DD/MM/YYYY')
  ���_����
  �࣠������
  ����
  ��㧮�����⥫�+' ��� '+��㧮�����⥫�_���
  ' ���� '+��㧮�����⥫�_����+' ���� '+��㧮�����⥫�_����_���+' ��� '+��㧮�����⥫�_����_���+' ��� '+��㧮�����⥫�_����_��
  NameMC  //NomMC
  substr(�����,1,10)
  DoubleToStr( Kol, Kol_Pr)
  DoubleToStr( Price, Cena_Pr)
  DoubleToStr( SumPr, Cena_Pr)
.endfields
.begin
  PrintObr := True;
end.
.{
�� ^
                                                                                                                      ��ଠ OC-15
                                                                                                                     �����������Ŀ
                                                                                                                     �    ����   �
                                                                                                                     �����������Ĵ
�࣠������-�����稪  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@        ��ଠ �� ���� �  0501037  �
   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                     �����������Ĵ
   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@            �� ����� �@~@@@@@@@@@�
                                                                                                                     �������������
�᭮����� ��� ��⠢����� ���           �������                                                                     �����������Ŀ
                                                                                                                �����           �
         ���                 �������������������������������                                                         �����������Ĵ
  � �ਥ���-��।��         �   �����    ���� ��⠢�����                                                    ��� �           �
    ����㤮�����             �����������������������������Ĵ                   �������������������������������������������������Ĵ
      � ���⠦               �@@@@@@@@@@@@�@~@@@@@@@@@@@   �                   ����,�����,��� �������᪮�� ��⠳           �
                             �������������������������������                   �������������������������������������������������Ĵ
                                                                               �         �            ���� � ���⠦ �           �
                                                                               � ���    ���������������������������������������Ĵ
                                                                               �         �    ᤠ� �  � �� �������� �           �
���� ��⠢����� ��� @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ �         � ��ᯫ�����������������������������Ĵ
                                                                               �         �             � 䠪��᪨  �           �
�࣠������-����⮢�⥫�_____________________________________________________  ���������������������������������������������������
                                                                                                                     �����������Ŀ
�࣠������-���⠢騪 @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@       �� ������@~@@@@@@@@@�
                                                                                                                     �����������Ĵ
���⠦��� �࣠������ @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@       �� ������           �
      @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@              �������������

 1. ����᫥���� ���� ����㤮����� ��।��� ��� ���⠦�
.{
.[H1
��������������������������������������������������������������������������������������������������������������������������������Ŀ
�                     ����㤮�����                       �����㯫���� ��   �          �      �⮨�����, ��           ��ਬ�砭���
�                                                        �᪫�� �����稪�  �������⢮�                               �          �
��������������������������������������������������������������������������Ĵ  ��.     �������������������������������Ĵ          �
�          ������������     �        �����           �⨯�          ������ �          �               �               �          �
�                           ������������������������Ĵ���  ���    ����  �          � �������       �    �ᥣ�      �          �
�                           ������.���ᯮ�⠳�� �奬���� �          ��ਥ���          �               �               �          �
��������������������������������������������������������������������������������������������������������������������������������Ĵ
�            1              �  2   �   3    �   4    � 5 �    6     �  7   �    8     �     9         �      10       �   11     �
��������������������������������������������������������������������������������������������������������������������������������Ĵ
.]H
.[H2
                                                                                                 ����⭠� ��஭� ��� OC-15
��������������������������������������������������������������������������������������������������������������������������������Ŀ
�            1              �  2   �   3    �   4    � 5 �    6     �  7   �    8     �     9         �      10       �   11     �
��������������������������������������������������������������������������������������������������������������������������������Ĵ
.]H
�@@@@@@@@@@@@@@@@@@@@@@@@@@@�      �        �        �   �@@@@@@@@@@�      �&#&&&&&&&&�&#&&&&&&&&&&.&&� &#&&&&&&&&&.&&�          �
.[F1
.begin
  PrintObr := True;
end.
����������������������������������������������������������������������������������������������������������������������������������


.]F
.[F2
.begin
  PrintObr := False;
end.
 ����������������������������������������������������������������������������������������������������������������������������������


.]F
.}
.{?internal;PrintObr
                                                                                               ����⭠� ��஭� ��� � OC-15

                               �� �ਥ��� ����㤮����� � ���⠦ ��⠭������:

����㤮����� ᮮ⢥����� �஥�⭮� ᯥ樠����樨 ��� ��⥦� (�᫨ �� ᮮ⢥�����, 㪠���� � 祬 ��ᮮ⢥��⢨�)

           �� ᮮ⢥�����

________________________________________________________________________________________________________________________

________________________________________________________________________________________________________________________

����㤮����� ��।��� �������⭮    ____________________________________________________________________________________
                     �� �������⭮
                                    (㪠���� ��⠢ �������� � �孨�᪮�  ���㬥��樨, �� ���ன �ந������ �ਥ�)

________________________________________________________________________________________________________________________

________________________________________________________________________________________________________________________


��䥪�� �� ���㦭�� �ᬮ�� ����㤮����� �� �����㦥��_________________________________________________________________
                                          �����㦥��             (�᫨ �����㦥��, ���஡�� �� ����᫨��)

_____________________________________________________________________________________________________________________

________________________________________________________________________________________________________________________


�ਬ�砭��: ��䥪��,  �����㦥���  ��    �ਥ��, ���⠦�,  �������  �  ���⠭��  ����㤮�����,   ��ଫ����� ��⮬ �

������� ��䥪�� ����㤮����� (�ଠ ���-16)


�����祭�� � �ਣ������ � ���⠦�:_____________________________________________________________________________________

________________________________________________________________________________________________________________________

����                                                           �ਭ�

�।�⠢�⥫� �࣠����樨-�����稪�                          �।�⠢�⥫� ���⠦��� �࣠����樨


______________________ ________________ _________________    ______________________ ________________ _________________

        (���������)       (�������)   (����஢�� ������)        (���������)         (�������)    (����஢�� ������)


        �.�.                                                  �.�.

  ��������� ����㤮����� �ਭ�� �� �⢥��⢥���� �࠭����

 ���ਠ�쭮 �⢥��⢥���� ��� ______________________ ________________ ________________________
                                        (���������)           (�������)    (����஢�� ������)��

.}
.}
.endform
