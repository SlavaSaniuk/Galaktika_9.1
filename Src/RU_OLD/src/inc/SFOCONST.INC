/*
 浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様�
 �                     (c) 1994,97 ��牆���罔� ���������                      �
 � 蹍オ�        : ���������                                                 �
 � ��痰ガ�       : ��ユ�ぅΔ�                                                �
 � �ム瓱�        : 5.5                                                       �
 � ��Л�腑�┘    : ���痰��硅, �甎��讌礇�襯 � ��Й�膈諷 ┃皀珞 "��ユ�ぅΔ�"   �
 � �癶モ痰▲��覃 : ����ア�� �爬�                                             �
 藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様�
*/

Const

  CustDate = date(1, 11, 1992);
  MaxDate  = date(31, 12, 2100);

  cgRealNeed = 1;
  cgForShow  = 2;
  cgNormKol  = 4;

  // ����腑痰〓 �����モ牀� ��Кム�� �ぅΔ� 甌矗磴�┴�,
  // ��皰牀� ��Ε� °碎 ��▲ぅ�� � �甎��讌����� � 瓱痰ガ�.
  MaxRazSFO   = 7; // � ��ゃ�� ��ユ�ぅΔ�
  MaxRazCtm   = 8; // � ��ゃ�� �ラア�� ━竕メ癶�

  rfUnConfReq = 0; // ����� ��Лメキ��痰� 矗ァ������ �� �襪�艫.
  rfConfReq   = 1;
  rfFrozenReq = 2;

  rfInHandle  = 1; // 踸Л��� - 矗ァ����┘ ��Л�瓱矚�.
  rfNtHandle  = 0;

                   // ���矣瘠 ��膈諷 ��珥�腑� 竍モ� ���.
  crdNormal   = 1; // �イモ瘴
  crdClosed   = 0; // ���琺��
  crdMoving   = 2; // �ムア��
  crdMoved    = 3; // �ムアイキ

                 // ���矣瘠 �襪�� � ��.
  sfoInUse  = 0; // � ��瓷�
  sfoBacked = 1; // ��Б��薀��
  sfoLost   = 2; // �皀瑙��
  sfoSpis   = 3; // �������
  sfoCmps   = 4; // �覩��腑�� ����キ��罔�
  sfoMove   = 5; // �ムイ��� む磽��� ��｀皚┴�

  SizeDelim = '/';  // ���� 艪� ���

  sfoReqDoc = 1; // �┓� ぎ�祠キ皰� ��� (甌�癶モ痰≪鉗┘ 絎М�ム�罔� - ├ ���)
  sfoOutDoc = 2;
  sfoUvlDoc = 3;
  sfoRetDoc = 4;
  sfoAttDoc = 5;
  sfoReglSp = 6;
  sfoGrpOut = 7;
  sfoReqLst = 8;

//-------------------------------------------------------------------------
// ��瑙お��襯 ���ム� ���ォ ��゛�肓 MBPOut か� �牀▲牀� ��玻オ皚�痰�

  fldPersSFO_cPersCard =  1;
  fldPersSFO_cPersSpec =  2;
  fldPersSFO_cSpReqSFO =  3;
  fldPersSFO_cDocMBPIn =  4;
  fldPersSFO_cCurMBPIn =  5;
  fldPersSFO_cMBPOut   =  6;
  fldPersSFO_cMBPMove  =  7;
  fldPersSFO_cGroupSFO =  8;
  fldPersSFO_cKatMBP   =  9;
  fldPersSFO_cPersSFO  = 10;
  fldPersSFO_giveDate  = 11;
  fldPersSFO_operDate  = 12;
  fldPersSFO_giveNom   = 13;
  fldPersSFO_explDate  = 14;
  fldPersSFO_Srok      = 15;
  fldPersSFO_docKol    = 16;
  fldPersSFO_curKol    = 17;
  fldPersSFO_endDate   = 18;
  fldPersSFO_spisNom   = 19;
  fldPersSFO_specFlag  = 20;
  fldPersSFO_Status    = 21;
  fldPersSFO_cDopRec   = 22;

  PersSFOFld_Count = 22;

// end;
