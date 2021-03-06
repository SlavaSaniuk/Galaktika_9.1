//******************************************************************************
//                                                      (�) ��௮��� �����⨪�
// �����⨪� 8.1 - ��ࠡ�⭠� ����
// ���ᠭ�� ��ॣ����஢����� �㭪権
//******************************************************************************

//------------------------------------------------------------------------------
// ZARCACHE.PAS
//------------------------------------------------------------------------------
function CacheHolidays: boolean; external 'ZC.DLL';
function CachePaymentKinds: boolean; external 'ZC.DLL';
function GetHolidayType(date): byte; external 'ZC.DLL';

//------------------------------------------------------------------------------
// �㭪樨 ��� �롮ન ������� ���ଠ樨 � ��楢�� ��� �� ��뫪� �� ����
// ��। �ᯮ�짮������ �㦭� ��墠��� �ਪ������ ���⥪�� "PaInfo"

// ⠡���� ����� ��楢��� ��� (1)
function GetPaClockNumber(comp): string; external 'ZC.DLL';
// �⠭����� ���䨪� ���� "⠡. � XXX, ������ �.�." ��� ᮮ�饭�� � ��楢�� ��� (1)
function GetPaSuffix(comp): string; external 'ZC.DLL';
// ��� 䨧��᪮�� ���, �� ���ண� ��ଫ�� ��楢�� ��� (1)
function GetPaPersonName(comp): string; external 'ZC.DLL';

//------------------------------------------------------------------------------
// DEPTREE.PAS
//------------------------------------------------------------------------------
#define UseDepartmentTreeContext <p>��। �ᯮ�짮������ �㭪樨 �㦭� ��墠��� �ਪ������ ���⥪�� "DepatrmentTree".</p>

#doc
  �����頥� ��筥���� ������������ ���ࠧ������� DepartmentRef.</brief>

  #UseDepartmentTreeContext
#end
function GetDepartmentQualifiedName(DepartmentRef: comp): string; external 'ZC.DLL';

#doc
  �����頥� ��筥���� ������������ ���ࠧ������� DepartmentRef.</brief>

  <p> ������ ���ࠧ������� ��ᬠ�ਢ����� �� ᫥���騬 �ࠢ����:

  <ul>
  <li> �᫨ Height < 0 - �� ��୥����, �����⥫쭮
  <li> �᫨ Height = 0 - ⮫쪮 ������������ ������� ���ࠧ�������
  <li> �᫨ Height = 1 - ������������ ������� ���ࠧ������� � ࠧ����⥫��, �᫨ �� ��୥���
  <li> �᫨ Height = 2 - �� ������饣�, �����⥫쭮
  <li> �᫨ Height = 3 - �� ������饣� ������饣�, �����⥫쭮
  <li> � �.�.;
  </ul></p>

  <p>  ����� ���ࠧ������� ࠧ�������� ��ப�� Divider � ᫥���� � ���浪�
  �� ������饣� � �������饬�, �᫨ PostOrder = false, ��� ��
  �������饣� � ������饬�, �᫨ PostOrder = true.  ������⢮ ᨬ����� �
  ��筥���� ������������ �� �ॢ�蠥� NameLimit, ��� �� ��࠭�祭�, �᫨
  NameLimit = 0.</p>

  #UseDepartmentTreeContext
#end
function GetDepartmentQualifiedNameExt(DepartmentRef: comp, Height: integer, Divider: string, PostOrder: boolean, NameLimit: integer): string; external 'ZC.DLL';

#doc
  #UseDepartmentTreeContext
#end
function GetDepartmentReduction(DepartmentRef: comp, Depth: integer): comp; external 'ZC.DLL';

#doc
  ����頥� ��㡨�� ���ࠧ������� � ����娨.</brief>

  #UseDepartmentTreeContext
#end
function GetDepartmentDepth(DepartmentRef: comp): integer; external 'ZC.DLL';


// ������ � (2) ��뫪� �� �易���� � ���ࠧ�������� (1) �࣠������
// (� ᮮ⢥��⢨� � ������ன �।�����)
function GetBoundOrganization(comp, var comp): boolean; external 'ZC.DLL';

#doc
  �����頥� true � ���祭�� ��ਡ�� "���⥫��� ������ �� ��室�" � Value ��
  ����뢠�饣� ��� "���ࠧ������� - �࣠������" 䨫����, � ��⮬ ����娨.</brief>

  <p> �᫨ � ������� �।����� ��� ����ᥩ, ����뢠��� ��� �������
  ���ࠧ������� (��� ������ �� ��������) � �����-���� �࣠����樥�, �����頥�
  false.</p>

  #UseDepartmentTreeContext
#end
function GetIncomeTaxPayer(DepartmentRef: comp, var Value: word): boolean; external 'ZC.DLL';

function GetDepartmentKpp(comp, var comp): boolean; external 'ZC.DLL';


#doc
  �����頥� true � ��뫪� �� ��� (���������⨢��-����ਠ�쭮�� �������)
  � Value ��� ���ࠧ�������, ��������� ��뫪�� DepartmentRef.</brief>

  <p> �����頥� ��뫪� �� ��� (��稭�� � ��������� ����� �� ����娨 ���ࠧ�������), ᮤ�ঠ�����
  � ���� ���ᮡ������� ���ࠧ�������, ���� � �ਤ��᪮� ���� �࣠����樨 (�易���� �
  ���ᮡ����� ���ࠧ��������). �᫨ �� � ����� �� ���ᮡ������ ���ࠧ������� ��� �易����
  � ���� �࣠������� ��뫪� �� ��� �� ��।�����, �����頥��� ��뫪� �� ��� ᮡ�⢥����
  �࣠����樨. �᫨ �� � ����� �� 㯮������ ���筨��� ��뫪� �� �뫠 ��।�����, �����頥� false.
  �ਬ�砭��: �᫨ DepartmentRef = 0, �����頥� ��� ᮡ�⢥���� �࣠����樨.</p>

  #UseDepartmentTreeContext
#end
function GetDepartmentATD(DepartmentRef: comp, var Value: comp): boolean; external 'ZC.DLL';

#doc
  �����頥� true � ���祭�� ����� � Value ��� ���ࠧ�������, ��������� ��뫪��
  DepartmentRef.</brief>

  <p> �����頥� ����� ���ᮡ������� ���ࠧ�������, ���� ����� �易���� �࣠����樨,
  � ��⮬ ����娨 ���ࠧ������� ����� �� ���������. �᫨ ����� �� ��।����, �����頥�
  ����� ᮡ�⢥���� �࣠����樨. �᫨ �� � ����� �� 㯮������ ���筨��� ��뫪� �� �뫠
  ��।�����, �����頥� false.
  �ਬ�砭��: �᫨ DepartmentRef = 0, �����頥� ����� ᮡ�⢥���� �࣠����樨.</p>

  #UseDepartmentTreeContext
#end
function GetDepartmentOKATO(DepartmentRef: comp, var Value: string): boolean; external 'ZC.DLL';

