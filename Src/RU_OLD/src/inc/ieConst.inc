// ���������������������������������������������������������������������������ͻ
// �                     (c) 1994,99 ��௮��� ���������                      �
// � �஥��        : ���������                                                 �
// � �����        : ��ᯮ�� - ������                                          �
// � �����        : 5.50                                                      �
// � �����祭��    : ����⠭��                                                 �
// � �⢥��⢥��� : ��������� �਩ ��堩�����                                 �
// ���������������������������������������������������������������������������ͼ
  // �ଠ�� ��ᯮ��-������  IEHead.MessType
  ieTextForm    = 0;     // ⥪�⮢�� �ଠ
  ieDBF         = 1;     // DBF
  ieDelimText   = 2;     // ⥪�� � ࠧ����⥫ﬨ
  ieXML         = 3;     // XML

  // ����⠭�� ��� �ࠢ�筨�� �����
  // ᬥ饭�� ��� �����
  iehDO         =  200;    // ��������� ��
  iesDO         =  400;    // ᯥ�䨪��� ��
  iehKS         =  600;    // ��������� ���������
  iesKS         =  800;    // ᯥ�䨪��� ���������
  iehSF         = 1000;    // ����-䠪���
  iesSF         = 1100;    // ᯥ�䨪��� ����-䠪���
  iehPD         = 1200;    // ��
  iesPD         = 1400;    // ᯥ�䨪��� ��
  iehPL         = 1600;    // ��������� �ࠩ� - ����
  iesPL         = 1800;    // ᯥ�䨪��� �ࠩ� - ����
  iehPA         = 2000;    // ���⨨
  iehVD         = 2200;    // ������ ���㬥���
  iehDF         = 2400;    // ��������
  iehKO         = 2600;    // ����ࠣ����
  iesKO         = 2800;    // �����
  iehMC         = 3000;    // ���業����
  iesMC         = 3200;    // ���᪭� ������� ��
  iehVG         = 3400;    // ������
  iehSK         = 3600;    // ���䨪��� ����⢠
  iesSK         = 3800;    // ᯥ�䨪��� ���䨪�� ����⢠
  iehVP         = 4000;    // ���祭�� ������⥫�� ����⢠
  iehLZ         = 4200;    // ����⭮-���ࠢ��� ��������
  iesLZ         = 4400;    // ᯥ�䨪��� ����⭮-���ࠢ�筮� ��������
  iehOB         = 4600;    // �஢����
  iehPV         = 4800;    // ���⥦�� ��������
  iesPV         = 5000;    // ᯥ�䨪��� ���⥦��� ��������
  iehDP         = 5200;    // �������� ������஢����
  iesDP         = 5400;    // ᯥ�䨪��� �������� ������஢����
  iehIT         = 5600;    // �������� ����窨
  iesIT         = 5800;    // ᯥ�䨪��� ��������� ����祪
  iehOS         = 6000;    // ����樨 ��
  iesOS         = 6200;    // ᯥ�䨪��� ����権 ��
  iehNMA	= 6400;    // �����ਠ��� ��⨢�
  iesNMA	= 6600;    // ᯥ�䨪��� ���
  iehPutLst     = 6800;    // ��⥢� �����
  iesPutLst     = 7000;    // ᯥ�䨪��� ��⥢�� ���⮢
  iehAkType     = 7200;    // ���� ��樧��� ��ப
  iehAkInOut    = 7400;    // ��室/��室 ��樧��� ��ப
  iesAkInOut    = 7600;    // ᯥ�䨪��� ��室�/��室� ��樧��� ��ப
  iehAkRequest  = 7800;    // ��� �� �/� �� ��樧�� ��ப
  iesAkRequest  = 8000;    // ᯥ�䨪��� ��� �� �/� �� ��樧�� ��ப
  iehDogovor    = 8200;    // �������
  iesDogovor    = 8400;    // ᯥ�䨪��� �������
  iehCalPlan    = 8600;    // �㭪� �������୮�� �����
  iesCalPlan    = 8800;    // ᯥ�䨪��� �㭪� �������୮�� �����
  iehDiary      = 9000;    // ������� ��� �������� �।�� - �����
  iesDiary      = 9200;    // ������� ��� �������� �।�� - ����䨪���
  iehRP         = 9400;    // ��।������ ���⥦�
  iesRP         = 9600;    // ᯥ�䨪��� ��।������ ���⥦�
  iehSKLord     = 9800;    // �����᪨� �थ�
  iesSKLord     = 9900;    // C���䨪��� ᪫��᪮�� �थ�
  iehArcOs      = 10000;   //��娢 ��������� ����祪
  iesArcOs      = 10100;   //����䨪��� ��娢� ��������� ����祪
  iehUSL        = 10200;   //��⠫�� ���
  iesUSL        = 10300;   //ᯥ�䨪��� ��⠫��� ���

  iehDOCREQ     = 10400;
  iesDOCREQ     = 10500;
  iehrzDoc      = 10600;
  iesrzDoc      = 10700;
  iehInv        = 10800;
  iesInv        = 10900;
  // 䫠��
  ieBoth        = 0;    // ��� ��ᯮ�� � ������
  ieImport      = 1;    // ��� ������
  ieExport      = 2;    // ⮫쪮 ��� ��ᯮ��

  ieAll         = 0;
  ieHeader      = 1;    // ���������
  ieSpec        = 2;    // ᯥ�䨪���

  // ���祭�� ���� IEHead.Reestr
  ieReestr      = 0;
  ieSingle      = 1;

  // ���᫥��� ��᪨ 䠩��
  ieStartNewMask  = 0;
  ieContinueMask  = 1;

  // १���� ������-��ᯮ��
  ieOk               =  0;   // �ᯥ譮� �����襭��

  // ⨯ ���㬥��
  ieDO       =  1;      // ���㬥��� - �᭮�����
  ieSopr     =  2;      // ��������
  ieSchFact  =  3;      // ��� - 䠪����
  iePlPor    =  4;      // ������ ���㬥���
  iePrice    =  5;      // �ࠩ� - �����
  ieParty    =  6;      // ���⨨
  ieValut    =  7;      // ������ �� ���������, etc.
  ieDiary    =  8;      // �������� ��� 130
  ieKatOrg   =  9;      // ��⠫�� ����ࠣ��⮢
  ieKatMC    = 10;      // ��⠫�� ���業���⥩
  ieVagon    = 11;      // ��⠫�� �������
  ieSertific = 12;      // ���䨪��� ����⢠
  ieValPokaz = 13;      // ���祭�� ������⥫�� ����⢠
  ieLZV      = 14;      // ����⭮-���ࠢ��� ��������
  ieOborot   = 15;      // �஢����
  iePlatVed  = 16;      // ���⥦�� ��������
  ieVedDepon = 17;      // �������� ������஢����
  ieInvTab   = 18;      // �������� ����窨
  ieMoveOS   = 19;      // ����樨 ��
  ieNMA      = 20;	// �����ਠ��� ��⨢�
  iePutLst   = 21;      // ��⥢� �����
  ieAkType   = 22;      // ���� ��樧��� ��ப
  ieAkInOut  = 23;      // ��室/��室 ��樧��� ��ப
  ieAkRequest= 24;      // ��� �� �/� �� �ந�����⢮ ��樧��� ��ப
  ieDogovor  = 25;      // ��������
  ieCalPlan  = 26;      // �㭪�� �������୮�� �����
  ieDistrib  = 27;      // ��।������ ���⥦�
  ieSKLord   = 28;      // ᪤��᪨� �थ�
  ieArcOs    = 29;      //��娢 �� ����窥
  iePickKatOS = 30;     // ����⪠ �� � ����⥪� ��/��� �� ���譥�� ���筨��
  ieKATUSL    = 31;     // ��⠫�� ���
  ieDOCREQ    = 32;
  ieRzDoc     = 33;
  ieInv       = 34;
  // ��� ExImLogR
  // ����� ��ॠ樨 :
  ieExported       = 0;        // ��ᯮ��஢��
  ieError          = 3;        // ����ࠡ�⠭��� �訡��
  ieImported       = 1;        // ������஢�� � �᭮���� ⠡����
  ieImportedInTemp = 2;      // ������஢�� �� �६������ ⠡����
  ieAbsentFields   = 4;        // �� ��।����
  ieNotDefined     = 5;        // �� ��।����
  ieErrorIndex     = 6;

  // ��� ExImLogT
  ieWasError       = 1;        // �뫠 �訡��
  ieWasSuccess     = 2;        // �ᯥ譮� �����襭��
  ieWasCanceled    = 3;        // ��ࢠ� ���짮��⥫��

  // ⨯ ������ - ��ᯮ�� :
  ieOld            = 0;        // ����
  ieClipboard      = 1;        // �१ ⠡���� Clipboard

  // �����䨪��� ����ࠣ��� / ����� ����ࠣ���
  ieName           = 0;        //  �� ������������
  ieOKPO           = 1;        //  �� ����
  ieUNN            = 2;        //  �� ���
  ieSchet          = 3;        //  �� �/�
  ieMFO            = 4;        //  ���
  ieCode           = 5;        //  ���

  // ����⠭�� ��� Clipboard
  clImportError        = 1999;
  clDocumentSignature  = 1;

  // ����� �ࠢ�筨�� �����
  ieVersionOfFields = '8.0.66';

  // 䫠�� ���� IEHEad.Reestr
  mskReestr           = 1;//01h;     // ��᪠ 䫠�� ॥���
  mskExportName       = 2;//02h;     // ��᪠ 䫠�� �ନ஢���� ����� 䠩�� � ����஬
  mskImportDuplicates = 12;//0Ch;     // ��᪠ ᯮᮡ� ��।������
                                 // ����������� ���-� �� ������
//  mskBankIdentification = 030h;  // ��᪠ �����䨪�樨 �������㥬��� �����
  mskVerifyDoc          = 32;//020h;  // �஢�ઠ ��易⥫��� ����� �������㥬��� ���㬥��
  mskRecalcSumma        = 64;//040h;  // ������ �㬬 �� ����७��� ��६�饭��
  mskIsFixed            = 128;//080h;  // 䨪�஢����� ����� ���� (8-� ���)
  mskDOS                = 16;//010h;  // ��� ����஢��

  // ���祭�� mskImportDuplicates :
  ieDontFindDuplicates  = 0;
  ieFindDuplicatesInLog = 1;
  ieFindDuplicatesInDB  = 2;
  ieUpdateDuplicates    = 3;

  // ��થ� ��⠢������ ����ᥩ
  sInsertRecordsMarker : string[20] = 'ieInsertRecordsMarker';
  sysField =2; //�㦥���� ����
  //���譨� ��ਡ�� ��� �࠭���� ���祭�� ��㯯�஢�� ��� ���������
  cg_GroupKatSoprByDogovor = 'GroupKatSoprByDogovor';
  //���祭�� �⮣� ��ਡ��
  cg_Default = 0;
  cn_Default = '�����';
  cg_GroupByDogovor = 1;
  cn_GroupByDogovor = '��㯯�஢�� �� ��������';
  cg_Header_XML = 'Header_XML'; // ��� ��ਡ�� ��������� XML
  cg_Spec_XML = 'Spec_XML';     // ��� ᯥ�䨪�樨 XML
  cn_Header_XML = 'Document_Root'; //���祭�� �� 㬮�砭�� ���������
  cn_Spec_XML   = 'Sp_Root'; //���祭�� �� 㬮�砭�� ᯥ�䨪�樨
  //��ਡ�� 㤠����� �������� 㧫� XML
  cg_Del_RootXml = 'Del_RootXml';
  //��ਡ�� ������� ���⥦��
  cg_WriteFile   = 'WriteFile';

  //������⢮ ���ࠨ������ ������� � ����䥩� ����ன�� ��ᯮ��(embedded  objVkladka1 interface;...)
  cg_objVkladka = 3;
  cg_CreateKatMC = 1;//ᮧ����� �� �� �� ������⢨�
  cg_DublicateInLog = 2;//�뢮� � ��� �।�०����� � �㡫���樨