.LinkForm 'MS__TINYPAR_0011_SHILIN' Prototype is 'TINYPAR'
.Group '��� � ����� ���⮢'
.NameInList '2022 MS �����᪨� 業� (��� � ����� ���⮢)'
.p 60
.var
  MyCena:Double
.endvar
.function IF01(_d:double):double;
begin
  if01 := if ( abs(_d) < GetPresision_forKol, 1, _d) ;
end.
.fields
  �����_1_ᨬ
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
  �����_���
  MyCena  //pbs/if01(pbk)
  if(pbk = 0, ' ', string(pbk,16, bGetTune('Round.KolSign')))
  pbs
  if(pak = 0, ' ', string(pak,16, bGetTune('Round.KolSign')))
  pas
  if(psk = 0, ' ', string(psk,16, bGetTune('Round.KolSign')))
  pss
  if(pek = 0, ' ', string(pek,16, bGetTune('Round.KolSign')))
  pes
  ibs
  ias
  iss
  ies
.endfields


��  ��������� ��������� �������� ��

  ��������� ��ନ஢���
    � ����� ������� ����७��
    � ����� ^
            � ^ �� ^

  �ᯮ��㥬� 䨫���� :
  �����  : ^
  ���    : ^
  ��     : ^
  ����� : ^
����@np@
������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������
                                                        �  ����           �     ������� �� ������              � ������                             � ������                             � ������� �� �����
       ������������                                     �                 ����������������������������������������������������������������������������������������������������������������������������������������������������
                                                        �                 � ������⢮      �  �㬬�           � ������⢮      � �㬬�            � ������⢮      �  �㬬�           � ������⢮     �   �㬬�
������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������
.{CheckEnter TINYPARPODR
����� ^
.{CheckEnter TINYPARMOL
 ��� ^
.{CheckEnter TINYPARMC
��  ^, ���.����� ^, ��.���. ^��
.{CheckEnter TINYPARPARTY
.begin
 MyCena:=if(pbs/if01(pbk)>0,pbs/if01(pbk),pas/if01(pak))
end.
  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@  &#'&&&&&&&&&&&.&& &&&&&&&&&&&&&&&&&  &#'&&&&&&&&&&&.&& &&&&&&&&&&&&&&&&& &#'&&&&&&&&&&&.&&  &&&&&&&&&&&&&&&&& &#'&&&&&&&&&&&.&& &&&&&&&&&&&&&&&&& &&&&&&&&&&&&&&.&&
.}
.}
.}
.}
 ..............................................................................................................................................................................................................................
  ����� �� ���������                                                                          &#'&&&&&&&&&&&.&&                   &#'&&&&&&&&&&&.&&                    &#'&&&&&&&&&&&.&&                  &#'&&&&&&&&&&&&.&&��
�� ..............................................................................................................................................................................................................................
.endform