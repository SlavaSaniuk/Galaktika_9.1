// ����⥪�
   cgOs_15_OS      = 15;  // ��
   cgOs_16_NMA     = 16;  // ���
   cgOs_115_OS     = 115; // �� ��娠
   cgOs_116_NMA    = 116; // ��� ��娠
   cgOs_215_OS     = 215; // �� 蠡���
   cgOs_216_NMA    = 216; // ��� 蠡���

// ��� ����樨 ��/ (SysOper)
   cgOs_1_Post     =  1;  // ����㯫����
   cgOs_2_VnuPer   =  2;  // ����७��� ��६�饭��
   cgOs_3_IzmStm   =  3;  // ��������� �⮨����
   cgOs_4_Vybyt    =  4;  // ���⨥
   cgOs_5_Amort    =  5;  // ����⨧���
   cgOs_6_Pereoz   =  6;  // ��८業��
   cgOs_7_IzmGrV   =  7;  // ��������� ��㯯�/���� �� (����/���� ���)
   cgOs_9_ChgPar   =  9;  // ��������� ��ࠬ��஢ � ����窥 ��/��� �� ������� ��ਮ� �६���.
   cgOs_10_OsRazn  = 10;  // ����� ࠧ��� ��� ��
   cgOs_13_NalOp   = 13;  // ��������� ������
   cgOs_15_NalAm   = 15;  // ��������� ����⨧���
   cgOs_21_MovePers = 21;  // ��।�� ��/��� ࠡ�⭨��. ��� ����� ���
   cgOs_51_Amort   = 51;  // ���४�஢�� ����⨧�樨 ��/���
   cgOs_101_OsRazn = 101; // ���४�஢�� ࠧ��� ��� �� (���������)
   cgOs_201_OsRazn = 201; // ���४�஢�� ࠧ��� ��� �� (����)
   cgOs_102_OsRazn = 102; // ���४�஢�� ࠧ��� ��� ��� (���������)
   cgOs_202_OsRazn = 202; // ���४�஢�� ࠧ��� ��� ��� (����)

// ��ॢ�� ��ꥪ⮢ � �� (���)
   osfKatStroy = 1; // ��ந⥫��⢮ -- ��室�� ��ꥪ� (KatStroy)
   osfMBP      = 2; // ��� -- ��室�� ��ꥪ� (MBPIn)
// �� �ࠦ�஢���� ���� ��⠢���� ��뫪� ����� �뫠 �� �⮣�   osfTirOs    = 3; // ����窠 ���ࠦ�஢���

// ��⠢ �⮨���� �� ���筨��� 䨭���஢����
   ssOperPostOs     = 1;   // ������ ����㯫���� ��/���
   ssOperIzmStoimOs = 2;   // ������ ��������� �⮨���� ��/���
   ssInvKartOs      = 15;  // ������ୠ� ����窠 ��
   ssInvKartNma     = 16;  // ������ୠ� ����窠 ���

   // ��⠢ ��ꥪ�
   cgOsSostav_Simple  = 1; // ���⮩
   cgOsSostav_Complex = 2; // ᫮���

//---------------------------------------------
// ������ ���������
// ��ਠ��� ��।������ ᯨ᪠ ��
   cgListMC_NotDef    = 0; // �� ��।���� (�᫨, ���ਬ��, ��⠫�� �����)
   cgListMC_Simple    = 1; // �� ��뫪�� �� ��������� ����祪
   cgListMC_MakeParty = 2; // � �ନ஢����� ���⨨ (�᫨ ���⨮��� ���)
   cgListMC_MakeMC    = 3; // � �ନ஢����� �� �� �� (�᫨ �� � � 㭨����� ��)
// ��ନ஢���� � �ਢ易��� ���㬥��� (�१ RefTable)
// (����� ��।����� ���冷� 㤠����� ���㬥�⮢)
   cgOsReal_Order     = 1; // ��室�� ᪫��᪮� �थ� 150
   cgOsReal_Nakl      = 2; // ��������� �� ���⨥ 201
   cgOsReal_DO        = 3; // �� �� �த��� 51
   cgOsReal_Factura   = 4; // ���-䠪��� ��� 72
   cgOsReal_McParty   = 5; // ����� ��
   cgOsReal_McOne     = 6; // ��

// ��ନ஢���� ����樨 ��६�饭�� ��⠢����� ����� ��ꥪ⠬�
   cgCrOsMcMov_Postup = 1; // (��१�ࢨ஢���)
   cgCrOsMcMov_Perem  = 2; // �ନ஢���� ��६�饭�� ����� ��ꥪ⠬�
   cgCrOsMcMov_Vibit  = 3; // �ନ஢���� ����� �� ��ꥪ�

// ����⭮� �஢������ ����権
   cgOpApply_NoMessage = 1; // ��� �뤠� ᮮ�饭��/����ᮢ
   cgOpApply_Protokol  = 2; // �ନ஢���� ��⮪���
   cgOpApply_GetTXO    = 4; // ࠧ�襭 �롮� ��饩 ����樨 ��� � �ନ஢���� �஢����
   cgOpApply_AllNastrOS= 8; // �஢������ ����樨 �� �ᥬ ��⮤�� ���
   cgOpApply_StartMessage = 16; // ����� �� ���� ����� �஢������/�⬥�� ����樨

//---------------------------------------------
   cgAmortLgotaProcDef = '��業� ����⨧�樮���� �죮�� �� 㬮�砭��';  // ������������ ���譥�� ��ਡ��


//---------------------------------------------
// �� OSCONST.VPP
  updOk     : integer = 0;  // ����䨪��� ������ ��諠 �ᯥ譮
  updDenied : integer = -1; // ������஢��� ����� �����
  updError  : integer = -2; // �訡�� �� ����䨪�樨 ������

//---------------------------------------------
// �� FNOSDLT.VPP
  dkoDEL_SLAVE  = true;  // ��� ��ࠬ��� 㤠����� ����. ����ᥩ
  dkoKEEP_SLAVE = false;
  dkoRECALC_SUM = true;  // ��� ��ࠬ��� ������ �㬬 �������� ����ᥩ
  dkoKEEP_SUM   = false;

  coPosPattern   = 51; // ������ ���� 蠡���� (���� ����ன�� 'OS.Pattern') � ��ப� ����ன��  'OS.PatternVision'

