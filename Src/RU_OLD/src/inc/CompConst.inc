/*
 ���������������������������������������������������������������������������ͻ
 �                     (c) 1994,2001 ��௮��� ���������                    �
 � �஥��        : ���������                                                 �
 � ���⥬�       : �ந�����⢥��� ������                                   �
 � �����        : 7.xx                                                      �
 � �����祭��    : ����⠭�� ���������                                       �
 � �⢥��⢥��� : ���⪨� �਩ (cacJr)                                     �
 ���������������������������������������������������������������������������ͼ
*/
// ���ம�।������ ��� ���������� ����� ���������� � ����� ����䥩�,
// ��।������ �१ ��६����� � ��⮤� Load/GetVIPRef
// �ᯮ�짮���� � ᫥���饬 ��砥:
// �뫮         - LoadVIPRef(ifcVar, ifcName);
// ������ ���� - LoadVIPRef(ifcVar, #AddComp(CompName)ifcName);
// � ����⢥ CompName ����� �ᯮ�짮���� ������� ���� ����⠭��
// ࠧ���� ���� �����, ����� ��業��஢����
#ifdef ComponentVersion
#define AddComp(sComp) #sComp + '::' +
#define Licensed(FREE) Licensed (#FREE)
#else
#define AddComp(sComp) '' +
#define Licensed(FREE)
#end

// ����⠭�� ���������
TPPComp       = 'M_TPP';
GPComp        = 'M_GetPotr';
MNPComp       = 'M_MnPlan';
QLTComp       = 'M_Quality';
UMPComp       = 'M_UP';
DVSComp       = 'M_DVS';
EIXMLComp     = 'M_EIXML';
MScriptsComp  = 'M_Scripts';
MSklPlanComp  = 'M_SklPlan';
STAFFComp     = 'z_Staff';
TRNComp       = 'M_Transp';
PRICEComp     = 'L_Prices';
REPOPERComp   = 'L_RepOper';
SKLADComp     = 'L_Sklad';
TREETUNEComp  = 'C_TreeTune';

// ��� ���४⭮�� 㪠����� ������ ��� ���ᨢ�� � �������
// �� 3-� � �� 5-� �⫠����
#ifdef ATL51
#define _$(sInd) [#sInd]
#else
#define _$(sInd) $#sInd
#endif