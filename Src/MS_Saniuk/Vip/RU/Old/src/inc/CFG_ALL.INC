// Типы объектов: 1-1000
// Коды свойств : 1000-9999
// Типы свойств : 10000-12000

//=============================================================================
// Типы
//=============================================================================

const cftInteger           = 10001; // Integer - Строка ввода чисел
const cftString            = 10002; // String - Строка ввода со списком истории
const cftBoolean           = 10003; // Boolean - CheckBox
const cftUnsignedInteger   = 10004; // Integer - Строка ввода чисел с проверкой
const cftHelpCtx           = 10005; // Integer - Строка ввода со списком выбора контекстов
const cftStatusCtx         = 10006; // Integer - Строка ввода со списком выбора контекстов
const cftLink              = 10007; // String - Строка ввода со списком выбора объектов
const cftPalette           = 10008; // Integer - Строка ввода со списком выбора допустимых палитр
const cftTable             = 10009; // String - Строка ввода со списком выбора таблиц
const cftField             = 10010; // String - Строка ввода со списком выбора полей установленной таблицы
const cftExprStr           = 10011; // String - Строка ввода со списком истории
const cftStrings           = 10012; // array of String - Окно ввода строк с возможностью загрузки/записи в файл
const cftCommand           = 10013; // Integer - Строка ввода со списком выбора команд
const cftHistoryId         = 10014; // Integer - Строка ввода со списком контекстов
const cftPrecisionVarName  = 10015; // String - Строка ввода со списком выбора переменных
const cftItems             = 10016; // список - Произвольное редактирование
const cftHotKey            = 10017; // Integer - Список клавиш
const cftIntegers          = 10018; // array of Integer - список целых чисел
const cftAlignment         = 10019; // Integer - Строка ввода со списком выбора допустимых констант выравнивания
//#grib#PIR_102.18236
const cftDouble            = 10020; // Double  - Строка ввода чисел SpinButton

//=============================================================================
// Свойства
//=============================================================================

// обязательное свойство Name
const cfpName               = 1001;
// прочие
const cfpOrigin_X           = 1002;
const cfpOrigin_Y           = 1003;
const cfpSize_X             = 1006;
const cfpSize_Y             = 1007;
const cfpVisible            = 1010;
const cfpHidden             = 1011;
const cfpProtect            = 1012;
const cfpSkip               = 1013;
const cfpHelpCtx            = 1014;
const cfpStatusCtx          = 1015;
const cfpTitle              = 1016;
const cfpTabs               = 1017;
const cfpLink               = 1018;
const cfpPalette            = 1019;
const cfpCentered           = 1020;
const cfpExprStr            = 1021;
const cfpField              = 1022;
const cfpCharSet            = 1023;
const cfpPoints             = 1024;
const cfpPrecisionVarName   = 1025;
const cfpDefaultValue       = 1026;
const cfpMaxLen             = 1027;
const cfpUpCase             = 1028;
const cfpHistoryId          = 1029;
const cfpPassword           = 1030;
const cfpNoValidCheck       = 1031;
const cfpPassiveFormat      = 1032;
const cfpFormat             = 1033;
const cfpUptoDate           = 1034;
const cfpPickButton         = 1035;
const cfpLessNull           = 1036;
const cfpStrings            = 1037;
const cfpCommand            = 1038;
const cfpDefault            = 1039;
const cfpLeftJustify        = 1040;
const cfpTable              = 1041;
const cfpIndex              = 1042;
const cfpDataIndex          = 1043;
const cfpChecked            = 1044;
const cfpOriginal           = 1045;
const cfpItems              = 1046;
const cfpHelpLine           = 1047;
const cfpHotKey             = 1048;
const cfpMenuItemParams     = 1049;

const cfpRectA_X            = 1050;
const cfpRectA_Y            = 1051;
const cfpRectB_X            = 1052;
const cfpRectB_Y            = 1053;

const cfpSDIWindow          = 1054;
const cfpAlwaysOnTop        = 1055;
const cfpFieldName          = 1056;

const cfpStringsNull        = 1057;
const cfpDesignerState      = 1058;

const cfpTextAlign          = 1059;
const cfpCalcButton         = 1060;
const cfpDefWidth           = 1061;

const cfpParamType          = 1062;
const cfpValue              = 1063;
const cfpMayBeCollected     = 1064;

const cfpNoResize           = 1065;
const cfpNoMove             = 1066;
const cfpNoResort           = 1067;

const cfpMayBeSaved         = 1068;

const cfpSpinButton         = 1069;
const cfpSpinInc            = 1070;
const cfpSpinMin            = 1071;
const cfpSpinMax            = 1072;

const cfpLines              = 1169;
const cfpIdle               = 1170;
const cfpHistoryLines       = 1171;

const cfpBevelName          = 1172;
const cfpStyle              = 1173;
const cfpShape              = 1174;

const cfpSlider             = 1175;

const cfpFrame              = 1176;

const cfpExcelColumns       = 1177;
const cfpNoAutoSize         = 1178;

const cfpNoStatic           = 1179;
const cfpEnumValues         = 1180;

const cfpFixed_XSize        = 1181;
const cfpFixed_YSize        = 1182;
const cfpModifiedState      = 1183;  

//=============================================================================
// Флаги свойства
//=============================================================================

const cffGetPropList       = 1;  // Можно делать GetPropList
const cffHiddenProp        = 2;  // Не показывать пользователю в списке свойств

//=============================================================================
// Типы объектов
//=============================================================================

const cfcStaticText         = 1;
const cfcLabel              = 2;
const cfcFieldLine          = 3;
const cfcRadioButton        = 4;
const cfcCheckBox           = 5;
const cfcButton             = 6;
const cfcScreen             = 7;
const cfcBrowser            = 8;
const cfcColumn             = 9;
const cfcTreeBrowser        = 10;
const cfcTreeColumn         = 11;
const cfcMemoViewer         = 12;
const cfcPanelInputLine     = 13;
const cfcPanelRadioButton   = 14;
const cfcPanelCheckBox      = 15;
const cfcDialog             = 16;
const cfcInterfaceWindow    = 17;
const cfcDeskTop            = 18;
const cfcClusterItem        = 19;

const cfcMenuItem           = 20;
const cfcSubMenu            = 21;

const cfcReportsList        = 22;
const cfcReportItem         = 23;

const cfcParamManager       = 24;
const cfcSection            = 25;
const cfcParameter          = 26;

const cfcQuickChoice        = 27;

const cfcBevel              = 28;