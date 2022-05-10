//------------------------------------------------------------------------------
//                                                      (c) Корпорация ГАЛАКТИКА
//------------------------------------------------------------------------------
// Галактика - Ядро
// Внешние функции
//------------------------------------------------------------------------------

#include G_Buh_EF.inc      // G_Buh.dll
#include G_Com_EF.inc      // G_Common.dll
#include G_EFP_EF.inc      // FpServ.dll - Внешние Fp-функции НЕ НА АТЛАНТИСЕ!!!
#include G_EI_EF.inc       // G_ExpImp.dll
#include G_FA_EF.inc       // G_FA.dll
#include G_Fin_EF.inc      // G_Fin.dll
#include G_Kau_EF.inc      // G_Kau.dll
#include G_LastNum_EF.inc  // G_LastNumD.dll
#include G_Nal_EF.inc      // G_Nalog.dll
#include G_Ope_EF.inc      // G_Oper.dll
#include G_Skl_EF.inc      // G_Skl.dll
#include G_Tun_EF.inc      // G_Tune.dll
#include G_Tree_EF.inc     // G_Tree.dll
#include G_TXO_EF.inc      // G_TXO.dll
#include G_Val_EF.inc      // G_Common.dll
#include G_VDE_EF.inc      // G_VDE.dll
#include G_Zar_EF.inc      // G_Zarpl.dll
#include G_WT_EF.inc       // WT.dll
#include G_ZC_EF.inc       // ZC.dll
#include G_Staff_EF.inc    // G_Staff.dll
#include GalNetEF.inc      // GalNet.exe (GalNet.dll в ServerApp)
#include ExcelFun.Inc      // RegExcel.dll & ExcelLib.dll
#include MsWordFun.Inc     // WordLib.dll
#include DDE_FUN.inc       // DDELIB.dll
#include G_MNF_EF.inc      // g_MNF.dll
#include GalRTF.Inc        // GalRTF.dll

#ifndef ATL51
// Изменить путь на данные не выдавая сообщений и диалогов
function  ChangeDataBase(string): word; external;     // periods.pas
#end

procedure Graf1(string,string,string,string,string,string,string,string,
string,string,integer); external 'Graf.dll';
procedure Graf2(string,string,string,string,string,string,string,integer); external 'Graf.dll';
procedure InitArray; external 'Graf.dll';
procedure InsertArray(integer,double,double,string); external 'Graf.dll';
procedure Graf3(string,string,integer,integer); external 'Graf.dll';
procedure Graf4(string,string,integer,integer); external 'Graf.dll';
procedure Graf5(string,string,integer,string,string,integer); external 'Graf.dll';
function  ShowFile_ofExcel(string): boolean; external 'Graf.dll';
function  CreateNewReport(string, string): boolean; external 'Graf.dll';

//------------------------------------------------------------------------------
// Есть редположения что не используются (GetMyFl.dll не перекладывается в Exe)
// Для закачки из Интернет
//procedure CreateHTTP; external 'GetMyFl.dll';
//procedure DestroyHTTP; external 'GetMyFl.dll';
//procedure GetFile(string, string); external 'GetMyFl.dll';
//function IFWork : boolean; external 'GetMyFl.dll';
//function ReadByte : integer; external 'GetMyFl.dll';
//procedure AbortProcess;  external 'GetMyFl.dll';
//function WorkResault : integer;   external 'GetMyFl.dll';
//------------------------------------------------------------------------------
procedure GRAFEDUCT(string, string, integer);  external 'Graf.dll';

//вывод картинки в rtf документ: путь к rtf файлу, имя rtf файла, высота картинки, два параметра положение на листе
procedure InsFoto(string, string, longInt, longInt, longInt); external 'InsFoto.dll';
//Подключение к COM объекту Outlook.Application
function CROUTLOOK : boolean; external 'InsFoto.dll';
//Закрытие COM объекта Outlook.Application
procedure CLOUTLOOK; external 'InsFoto.dll';
//Передача почтового сообщения
function MESS_SEND(word, string, string, word, string): boolean; external 'InsFoto.dll';

//------- Графическое представление СЕ ШР --------------------------------------
//Задание количества подразделений в выгрузке
procedure SETMAX(integer); external 'VStaff.dll';
//Задание наименованиея организации
procedure SETORG(string); external 'VStaff.dll';
//Инициализация служебных массивов
procedure INITARRAYS; external 'VStaff.dll';
//Деинициализация служебных массивов
procedure DESTROYARRAYS; external 'VStaff.dll';
//Передача информации в служебные массивы
procedure SETARRAYS (integer, integer, string, string, integer, double, double, integer, string); external 'VStaff.dll';
//Построение диаграммы
procedure EXPORTSTAFF(string); external 'VStaff.dll';
//Отображение вакансий
procedure SET_USEVAC(boolean); external 'VStaff.dll';
//Установка настроек
procedure SET_NASTR(word); external 'VStaff.dll';
//Заносим руководителя для подразделения
procedure SET_BOSS(integer, string); external 'VStaff.dll';
//Устанавливаем путь к шаблону
procedure SET_SHABLON(string); external 'VStaff.dll';

Function GetNetworkNode                               : String; external;
Function OpenUser                                     : Boolean; external;
Procedure CloseUser                                           ; external;
Function Nrec2ono     (Comp)                          : Word  ; external;
//------------------------------------------------------------------------------
procedure SetNameNastr(string); external;
Function  LoadNameNastr : string; external;
procedure GenerateReport                                    ; external ;
Function AddPath(boolean, string)                   : String  ; external ;
Function GetCallingInterfaceName                    : String  ; external ;
procedure SyncFileTimes(string, string)                       ; external ;
Function LoadReportPattern(string)                  : Boolean ; external ;
Function SaveReportPattern(string)                  : Boolean ; external ;
Function MakeForm(string)                           : Boolean ; external ;
Function CheckFormForPattern(string, string)        : Boolean ; external ;
procedure PrintGeneratedReport                                ; external ;


//------------------------------------------------------------------------------
// MONEYFNC.PAS
//------------------------------------------------------------------------------
function GetNames(word, boolean): string; external ;

#ifndef ATL51
  function MyGetFirstStr(string): string; external;
  function MyGetFirstStr1(string): string; external;
#end

function Str2TimeSep(string, char): double; external;
function Str2Time(string): double; external;
function Time2StrSep(double, integer, char): string; external;
function Time2Str(double, integer): string; external;
function Time2StrDef(double): string; external;
function Time2StrDefPrec(double, word): string; external;
function Notify(word, longint): longint; external;
function GetNotificationInfoPtr: longint; external;
function ReReadCurrent(integer): boolean; external;
function MySetDirDialog(String, String): String; external;
function ProcNalSpr(Byte, String, String, String, String): Integer; external;

//------------------------------------------------------------------------------
// PRENGINE.PAS
//------------------------------------------------------------------------------
function GetCallingInterfaceName: String; external;
function AddPath(Boolean, String): String; external;
procedure SyncFileTimes(String, String); external;
function LoadReportPattern(String): Boolean; external;
function SaveReportPattern(String): Boolean; external;
function MakeForm(String): Boolean; external;
function CheckFormForPattern(String, String): Boolean; external;
procedure GenerateReport; external;
procedure PrintGeneratedReport; external;
procedure SetNameNastr(String); external;
function LoadNameNastr: String; external;

//------------------------------------------------------------------------------
// Z_SERV.PAS
//------------------------------------------------------------------------------
function GetFirstStr(String): String; external;
function GetPartStr(String, Word): String; external;

#include shr_reps.inc

function  ChooseFilterForLogTable( string, var anytype ) : boolean;           external;
function  ApplyFilterToLogTable  ( string, string, string )      : boolean;           external;
function  CurrentInterfaceName                           : string;            external;

Function GetPresision_forKol                       : double;  external;
Function GetDlinaDrob_forKol                       : word;    external;
Function GetMethodSpis                             : word;    external;
Function GetRazrezSpis                             : word;    external;
Function GetMultiVal                               : boolean; external;
Function GetSaldoType                              : word;    external;
Function UseNalUch                                 : boolean; external;
Function GetSoprHozTipDoc(word, word)              : word;    external;

Function  LoadPreferences                            : boolean; external;

function  TB_SetPort(byte) : boolean;        external 'tb003wg.dll';
procedure TB_Zero;                           external 'tb003wg.dll';
function  TB_GetWeight : string;             external 'tb003wg.dll';

procedure InitScales05;                      external 'scales05.dll';
procedure FreeScales05;                      external 'scales05.dll';
function  isInitScales05: boolean;           external 'scales05.dll';
function  GetWeight05(word): integer;        external 'scales05.dll';
function  GetState05 (word): word;           external 'scales05.dll';
function  Key05: longint;                    external 'scales05.dll';
function  UnLock05 (longint): longint;       external 'scales05.dll';
function  IsInit05: boolean;                 external 'scales05.dll';

function RunDynMenu( String ) : word; external;

function DopEd_Used(word) : boolean; external;
function DopEd_Auto(word) : boolean; external;

// Функция решения задач линейного программирования
//function PROCESSMPS(String, String, String):LongInt; external 'lpcmain_.dll';//------------------------------------------------------------------------------
// RLFUNCS.pas
//------------------------------------------------------------------------------
 function RL_SetPageParam(string,word,integer): boolean;external 'RLFUN.dll';
 function RL_Clear_Rlist : boolean;external 'RLFUN.dll';
 function RL_Make_Rlist  : boolean;external 'RLFUN.dll';
