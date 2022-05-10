//********************************************************************************
//                                                        (c) корпорация Галактика
// Галактика 8.1 - Бухгалтерский контур
// Константы модуля Хозоперации
//********************************************************************************

//--------------------------------------------------------------------------------
// Версия каталога идентификаторов для его автоматического обновления
verKatKeys      = 18;

//--------------------------------------------------------------------------------
// Номера системных идентификаторов
idVAL___         = 0;
idSUM            = 1;
idSumDP          = 2;
idSumNP          = 3;
idSumAP          = 4;
idSumSP          = 5;
idDOPL           = 6;
idDOBar          = 7;
idDON            = 8;
idPL___          = 9;
idNNP___         = 10;
idDP___          = 11;
idNP___          = 12;
idSP___          = 13;
idRP___          = 14;
idRound          = 15;
idNAC___         = 16;
idOS___          = 20;
idSellBuyOS      = 20;
idOldSt          = 21;
idNewSt          = 22;
idOldIzn         = 23;
idNewIzn         = 24;
idAmort          = 25;
idUsedRaw        = 26;
idRetRaw         = 27;
idSumCms         = 28;
idTNVED          = 29;
idISO            = 30;
idGroup          = 31;
idCode           = 32;
idKAU            = 33;
idVP___          = 34;
idNominalS       = 40;
idBayS           = 41;
idCloseS         = 42;
idNalN           = 43;
idPLV___         = 44;
idVZ___          = 45;
idCS___          = 46;
idZP___          = 47;
idTax            = 48; // для __TAXES__
idBr_49          = 49;
idDateNow        = 50;
idDateDoc        = 51;
idDateDO         = 52;
idDateHoz        = 53;
idDateBeg        = 54;
idDateEnd        = 55;
idBr_59          = 59;
idDS___          = 60;
idPKP___         = 61;
idVIP___         = 62;
idSoprDoc        = 63;
idBr_69          = 69;
idDirKauR        = 70;
idDirKauL        = 71;
idDirKauRPlus    = 72;
idDirKauLPlus    = 73;
idDirStroy       = 74;
idDirStroyPlus   = 75;
idDirKauRepl     = 76;
idBr_99          = 99;
idVipAlgorithmes = 100;

//--------------------------------------------------------------------------------
// Префикс для интерфейсов реализующих алгоритмы на ТХО API
cgTxoApiPrefix        = 'Txo_';
cgTxoMenuPrefix       = 'TxoMenu_';
cgTxoExtractKauPrefix = 'TxoKau_';

//--------------------------------------------------------------------------------
// Константы для алгоритма KsBuild.vip и KsPlan.vip
cmKol             =  7701;
cmKoef            =  7702;
cmNzsStartBase    =  7703;
cmKvStartBase     =  7704;
cmOfStartBase     =  7705;
cmOstStartBase    =  7706;
cmNzsStartCur     =  7707;
cmKvStartCur      =  7708;
cmOfStartCur      =  7709;
cmOstStartCur     =  7710;
cmSmetBase        =  7711;
cmSmetCmrBase     =  7712;
cmSmetOborudBase  =  7713;
cmSmetPirBase     =  7714;
cmSmetProchBase   =  7715;
cmNzsBase         =  7716;
cmNzsCmrBase      =  7717;
cmNzsOborudBase   =  7718;
cmNzsPirBase      =  7719;
cmNzsProchBase    =  7720;
cmKvBase          =  7721;
cmKvCmrBase       =  7722;
cmKvOborudBase    =  7723;
cmKvPirBase       =  7724;
cmKvProchBase     =  7725;
cmOfBase          =  7726;
cmOfCmrBase       =  7727;
cmOfOborudBase    =  7728;
cmOfPirBase       =  7729;
cmOfProchBase     =  7730;
cmOstBase         =  7731;
cmOstCmrBase      =  7732;
cmOstOborudBase   =  7733;
cmOstPirBase      =  7734;
cmOstProchBase    =  7735;
cmSmetCur         =  7736;
cmSmetCmrCur      =  7737;
cmSmetOborudCur   =  7738;
cmSmetPirCur      =  7739;
cmSmetProchCur    =  7740;
cmNzsCur          =  7741;
cmNzsCmrCur       =  7742;
cmNzsOborudCur    =  7743;
cmNzsPirCur       =  7744;
cmNzsProchCur     =  7745;
cmKvCur           =  7746;
cmKvCmrCur        =  7747;
cmKvOborudCur     =  7748;
cmKvPirCur        =  7749;
cmKvProchCur      =  7750;
cmOfCur           =  7751;
cmOfCmrCur        =  7752;
cmOfOborudCur     =  7753;
cmOfPirCur        =  7754;
cmOfProchCur      =  7755;
cmOstCur          =  7756;
cmOstCmrCur       =  7757;
cmOstOborudCur    =  7758;
cmOstPirCur       =  7759;
cmOstProchCur     =  7760;
cmNzsEndBase      =  7761;
cmNzsEndCur       =  7762;
cmOplStartBase    =  7763;
cmOplStartCur     =  7764;
cmOplBase         =  7765;
cmOplCmrBase      =  7766;
cmOplOborudBase   =  7767;
cmOplPirBase      =  7768;
cmOplProchBase    =  7769;
cmOplCur          =  7770;
cmOplCmrCur       =  7771;
cmOplOborudCur    =  7772;
cmOplPirCur       =  7773;
cmOplProchCur     =  7774;

//--------------------------------------------------------------------------------
// Номера системных макросов
mcKAUNAME       = 0;
mcKAUCODE       = 1;
mcKAUABBR       = 2;
mcSCHET         = 3;
mcSCHETNAME     = 4;

// Номера системных директив интерпретации ТХО
drKauRPlus      = 0;
drKauLPlus      = 1;
drKauR          = 2;
drKauL          = 3;
drKol           = 4;
drPodr          = 5;
drStroy         = 6;
drStroyPlus     = 7;
drKauRepl       = 8;

//--------------------------------------------------------------------------------
// Номера системных "правил" контроля разноски по ТХО
rlCorrespondence = 1;
rlAnalitycs      = 2;
rlDepartment     = 3;
rlNDESum         = 4;
rlCurrency       = 5;
rlCongruence     = 6;
rlKolvo          = 6; // количество правил!

//--------------------------------------------------------------------------------
// Константы для вида протокола ТХО (настройка TProv.ProtokolTXO)
tprNo     = 0;
tprLine   = 1;
tprStruct = 2;

// Константы для уровня детализации протокола ТХО (настройка TProv.ProtokolTXO.Level)
tplHozop  = 1; // Привязка ТХО
tplOborot = 2; // Данные по регистру учета
tplKeys   = 3; // Информация о расчете формул
tplDebug  = 4; // Отладочная информация
tplSootv  = 5; // Информация о ненайденных соответствиях

//--------------------------------------------------------------------------------
// операции поддерживаемые объектом TxoBinder
wOper_NotDo      = 0; //  - ничего не делать
wOper_Bind       = 1; //  - привязать ТXО и разнести
wOper_UnBind     = 2; //  - отвязать ТXО и удалить проводки
wOper_ReObor     = 3; //  - переразнести
wOper_CorrObor   = 4; //  - корректировать проводки
wOper_DelObor    = 5; //  - удаление проводок
wOper_RemakeTXO  = 6; //  - переразноска TXO
wOper_SetTxoRef  = 7; //  - записать ссылку на ТХО (использовать для копирования документов)

//--------------------------------------------------------------------------------
// константы для поля SysOper производственных документов
cgMnf_0_Main      = 0;  // Производство - основная ветка
cgMnf_1_McFromGp  = 1;  // Подчиненный акт на списание мц по накладной на приход из производства
cgMnf_2_McFromPf  = 2;  // Подчиненный акт на списание мц по межцеховой накладной
cgMnf_3_McFromUsl = 3;  // Подчиненный акт на списание мц по акту на оказание услуг между подразделениями
cgMnf_4_UslFromGp = 4;  // Подчиненный акт на оказание сопутствующих услуг по накладной на приход из производства
cgMnf_5_UslFromPf = 5;  // Подчиненный акт на оказание сопутствующих услуг по межцеховой накладной
cgMnf_6_UslFromUsl= 6;  // Подчиненный акт на оказание сопутствующих услуг по акту на оказание услуг между подразделениями
cgMnf_555_Transp  = 555; // Автотранспорт



//--------------------------------------------------------------------------------
// Операции ТХО для закрытия счетов GoNewPer.vip
cgContour_KBU = 0;
cgContour_UFZ = 1;
                           // \ GoNewPer.PrzOper
cgPrzClosing_Accounts = 0; //  | Закрытие счета
cgPrzProduction_Stage = 1; //  | Закрытие стадии производства
cgPrzCounter_Services = 2; //  | Закрытие встречных услуг

                            // \ GoNewPer.VidSaldo
cgVs_CalcSaldo         = 0; //  | сальдо рассчитывается
cgVs_NoCalcSaldo       = 2; //  | сальдо не рассчитывается
                            //
cgVs_CalcSaldo_moveAll = 0; //  | сальдо рассчитывается переносится вся аналитика КАУ + субсчет
cgVs_CalcSaldo_moveKau = 1; //  | сальдо рассчитывается переносится только КАУ
                            //   \ - устаревшие константы, переносить субсчет или нет выносятся на уровень шаблона ТХО

                             // \ GoNewPer.VidData - маска
cgVd_MaskNoPreView     =  1; //  | без предварительного просмотра
cgVd_MaskNoDesGr       =  2; //  | без учета кода рабочих групп
cgVd_MaskReduceKau     =  4; //  | свернуть аналитику до первого уровня
cgVd_MaskQueryDate     =  8; //  | запрос даты закрытия счетов
cgVd_MaskMakeZero      = 16; //  | формировать нулевое сальдо
cgVd_NoDelBuhSpr       = 32; //  | не удалять бухсправки
cgVd_RollToNDE         = 64; //  | свернуть сальдо в разных валютах к НДЕ
cgVd_MakeOborotCurPS   = 128;//  | формировать проводки только в текущем ПС без удаления бухсправки
cgVd_MaskReduceKau2    = 256;//  | свернуть аналитику до второго уровня
cgVd_MaskReduceKau3    = 512;//  | свернуть аналитику до третьего уровня
cgVd_MaskReduceKau4    = 1024;// | свернуть аналитику до четвертого уровня
cgVd_MaskReduceKau5    = 2048;// | свернуть аналитику до пятого уровня
cgVd_MaskReduceKau6    = 4096;// | свернуть аналитику до шестого уровня

                            // \ параметр Mode функции ObjGoNewPer.CloseSchMakeBS
cgMkb_PlporAndOborot = 0;   //  | сформировать бухсправку и привязать к ней проводки закрывающие счет
cgMkb_OborotOnly     = 1;   //  | просто привязать проводки к текущей бухсправке (для итерационных режимов закрытия счетов)

                            // \ Маска HozObor.RaundAction FpObor.RaundAction в настройке шаблона ТХО
cgRa_NullRestOfRound = 1;   // | обнулить остатки округления начиная с этого шаблона
cgRa_AddRestOfRound  = 2;   // | Остатки округления добавить к последней из проводок по этому шаблону
cgRa_MinSums         = 4;   // | Учитывать настройку "Настройки Галактики\Бухгалтерский контур\Сравнение сумм"
cgRa_NoRounding      = 8;   // | Формировать проводки с точностью свыше 6-ти знаков после запятой

//--------------------------------------------------------------------------------
// Команды меню режимов начинаются с константы cmFl_Min и дальше
cmFl_Min       = 7000;

mnuFlKau         =  1;
mnuFlUserKau     =  2;
mnuFlVal         =  3;
mnuFlCycle       =  4;
mnuFlConvMode    =  5;
mnuFlConvVal     =  6;
mnuFlPrProv      =  7;
mnuFlSysOper     =  8;
mnuFlSchSub      =  9;
mnuFlDatOb       =  10;
mnuChargeStorage =  11;

//--------------------------------------------------------------------------------
// Константы для настройки режима формирования счета/субсчета в шаблоне бухпроводки
//      !!! пока используется только в закрытии счетов HozOper.TiDk=777 !!!
wFlSchSub_Auto    = 0;
wFlSchSub_No      = 1;
wFlSchSub_Manual  = 2;
wFlSchSub_Select  = 3;

//--------------------------------------------------------------------------------
// Константы для настройки режима алгоритма в валюте
wFlVal_Auto    = 0;    // В валюте по настройке 'TProv.FormTP'
wFlVal_HozDoc  = 1;    // В валюте документа
wFlVal_BaseDoc = 2;    // В валюте ДО
wFlVal_No      = 3;    // нет
wFlVal_Convert = 4;    // В валюте конвертации
wFlVal_Commiss = 5;    // В валюте комиссии
wFlVal_PlPor   = 6;    // В валюте платежного документа
wFlVal_Manual  = 100;  // в конкретной валюте

//--------------------------------------------------------------------------------
// Константы для настройки режима циклической обработки (спец режимы выделять по порядку начиная с конца)
wFlCycle_ValMustDie  = 10000; // по валютам                 (to do переделать на верхний диапазон)
wFlCycle_ZarpMustDie = 12000; // по аналитике зарплаты      (to do убрать совсем)
wFlCycle_SoprOrd     = 65527;
wFlCycle_SpStep      = 65528;
wFlCycle_SpDocs      = 65529; // заглушка для совместимости wFlCycle_Val и аналитикой 10000 в 7.1
wFlCycle_SpSopr      = 65530; // заглушка для совместимости wFlCycle_Val и аналитикой 10000 в 7.1
wFlCycle_Manual      = 65531; // цикл.обработка из каталога
wFlCycle_Date        = 65532; // по датам
wFlCycle_BuhSchet    = 65533; // по счетам и субсчетам
wFlCycle_Valut       = 65534; // заглушка для совместимости wFlCycle_Val и аналитикой 10000 в 7.1
wFlCycle_10000KAU    = 65535; // заглушка для совместимости wFlCycle_Val и аналитикой 10000 в 7.1
wFlCycle_No          = 0;     // нет цикл.обработки

//--------------------------------------------------------------------------------
// Константы для настройки режима конвертации проводки
wFlConvMode_No     = 0;
wFlConvMode_Debet  = 3;
wFlConvMode_Kredit = 4;

//--------------------------------------------------------------------------------
// Константы для настройки режима валют для конвертации проводок
wFlConvVal_NDE     = 0;
wFlConvVal_HozDoc  = 1;
wFlConvVal_BaseDoc = 2;
wFlConvVal_BegVal  = 3;
wFlConvVal_EndVal  = 4;
wFlConvVal_Manual  = 100;

//--------------------------------------------------------------------------------
// Константы для настройки режима - порядок обработки рассчитанной суммы проводки
wFlPrProv_PosChange =  0;
wFlPrProv_NegChange =  1;
wFlPrProv_PosNull   =  2;
wFlPrProv_NegNull   =  3;
wFlPrProv_No        =  4;

//--------------------------------------------------------------------------------
// Константы для отображения общей части меню для всех аналитик (для SetEnableModeMenu интерфейса TXOMenu)
cgModeEnable_Auto   = 1; // формировать автоматически
cgModeEnable_No     = 2; // не формировать
cgModeEnable_Manual = 4; // задать явно
cgModeEnable_Select = 8; // выбрать из каталога
cgModeEnable_SelectDb = 16; // выбрать из каталога дла дебета
cgModeEnable_SelectCr = 32; // выбрать из каталога для кредита
cgModeEnable_All    = 63;// все вышеперечисленные константы

//--------------------------------------------------------------------------------
// Константы для настройки режимов формирования КАУ в ТХО 7000-7999
// Общая часть для всех аналитик
wFlKau_Auto       = 0;
wFlKau_No         = 1;
wFlKau_Manual     = 2;
wFlKau_Select     = 3;

wFlKau_SelectDb   = 247; // выбрать из каталога дла дебета
wFlKau_SelectCr   = 248; // выбрать из каталога для кредита

wFlKau_AutoDebit  = 11;
wFlKau_AutoCredit = 12;

// по контрагентам (1)
wFlKau_PartyOrg   = 101;
wFlKau_VekslPlat  = 102;
wFlKau_VekslPl    = 103;
wFlKau_VekslPol   = 104;
wFlKau_VekslPlh   = 105;
wFlKau_VekslPolh  = 106;
wFlKau_VzPlat     = 107;
wFlKau_VzPol      = 108;
wFlKau_PlPlat     = 109;
wFlKau_PlPol      = 110;

// подразделение по сотруднику (2)
wFlKau_EmpPodr    = 111;

// по сырью(4), группам сырья (8), партиям сырья (10), группам партий сырья (11)
wFlKau_RawMc      = 112;
wFlKau_ProdMc     = 113;

// по ДО (6)
wFlKau_VzPlatDo   = 114;
wFlKau_VzPolDo    = 115;
wFlKau_PredOplDo  = 258; // предоплатное ДО

// по Группам ДО (12)
wFlKau_VzPlatGrDo = 116;
wFlKau_VzPolGrDo  = 117;

// по Договорам (14)
wFlKau_VzPlatDog  = 118;
wFlKau_VzPolDog   = 119;

// по контрагентам (1)
wFlKau_CesiaProd  = 120;
wFlKau_CesiaPokup = 121;
wFlKau_CesiaDolg  = 122;

// по ДО (6)
wFlKau_CesiaDoHead = 123;
wFlKau_CesiaDoSpec = 124;

// по Договорам (14)
wFlKau_CesiaDogHead = 127;
wFlKau_CesiaDogSpec = 128;

// организация из договора (1)
wFlKau_DogovorOrg1     = 130;
wFlKau_DogovorOrg2     = 131;
wFlKau_DogovorGrOtpPol = 132;

// по контрагенту, за которого плат.поручение (1)
wFlKau_PlPlZa          = 133;

// по подразделениям (2)
wFlKau_PodrFrom        = 134;
wFlKau_PodrTo          = 135;

// по физическим лицам (3) и МОЛ (cgKau_KatMOL)
wFlKau_MOLFrom         = 136;
wFlKau_MOLTo           = 137;

// по центрам ответственности (22)
wFlKau_COOrg           = 138;
wFlKau_COPodr          = 139;
wFlKau_COPers          = 140;
wFlKau_COFromDOSopr    = 249;

// по организациям, подразделениям, сотрудникам, ЦО
wFlKau_DogCO             = 141;
wFlKau_DogOtvCOSP        = 142;

// по ДО (6)
wFlKau_DoVeksLastGet     = 143;    // ДО последнего получения векселя
wFlKau_DoVeksLastPass    = 144;    // ДО последней передачи векселя

// по Группам ДО (12)
wFlKau_GrDoVeksLastGet   = 145;  // Группа ДО последнего получения векселя
wFlKau_GrDoVeksLastPass  = 146;  // Группа ДО последней передачи векселя

// по Договорам (14)
wFlKau_DogVeksLastGet    = 147; // Договор последнего получения векселя
wFlKau_DogVeksLastPass   = 148; // Договор последней передачи векселя
wFlKau_DogOsn            = 246; // Основной договор при наличии доп классификации

wFlKau_PeriodBegin         = 149;
wFlKau_PeriodEnd           = 150;
wFlKau_PeriodProporDays    = 151;
wFlKau_PeriodProporRabDays = 153; // Равномерно по рабочим дням
wFlKau_PeriodRavnomerno    = 154; // Равномерно по листовым периодам

// по организациям, подразделениям, сотрудникам, ЦО
wFlKau_DogPlatCOSP       = 152;

// Базовая функциональность TxoApi - пользовательские режимы
wFlKau_Mode0 = 160;
wFlKau_Mode1 = 161;
wFlKau_Mode2 = 162;
wFlKau_Mode3 = 163;
wFlKau_Mode4 = 164;
wFlKau_Mode5 = 165;
wFlKau_Mode6 = 166;
wFlKau_Mode7 = 167;
wFlKau_Mode8 = 168;
wFlKau_Mode9 = 169;

// для циклической обработки по ДО, группам ДО, договорам из накладных
wFlKau_DONakl          = 170;
wFlKau_DOGroupNakl     = 171;
wFlKau_DogNakl         = 172;

// для циклической обработки по внешним КАУ
wFlKau_KauReffSoprHoz  = 173;
wFlKau_KauReffOS       = 174;
wFlKau_KauReffNMA      = 175;
// лицо, ответственное за проведение операции в накладных и актах
wFlKau_GiveOper        = 176;

// только для НРУПТН "Дружба" в 5.8 это не делать
wFlKau_OrgFromFirstPartySpSopr = 177;

// подразделение из сальдо
wFlKau_SaldoSPO = 178;

// подразделение по МОЛ (2)
wFlKau_MOLPodr = 179;

// аналитика из платежного документа, АПП (ДО и группа ДО)
wFlKau_HeadDoc = 180;

// контрагент, подразделение, сотрудник из ЦО
wFlKau_FromCO  = 181;

// центр ответственности из настройки(22)
wFlKau_COTune  = 182;

// центр ответственности, назначение и прочее из ДО
wFlKau_FromDO  = 183;

// счет/субсчет/аналитика из рабочей кассы, Р/С, В/С
wFlKau_SpCashManyKass   = 184;
wFlKau_SpCashManyRS     = 185;
wFlKau_SpCashManyValRS  = 186;
wFlKau_SpCashManyBuhSpr = 187;

// Ответственный сотрудник/подразделение/организация из рабочей кассы, Р/С, В/С
wFlKau_SpCashManyKass_xPerson   = 188;
wFlKau_SpCashManyKass_xPodr     = 189;
wFlKau_SpCashManyRS_xPerson     = 190;
wFlKau_SpCashManyRS_xOrg        = 191;
wFlKau_SpCashManyValRS_xPerson  = 192;
wFlKau_SpCashManyValRS_xOrg     = 193;

// группа МЦ, группа услуг из спецификации договора или ПКП
wFlKau_FromSpec = 194;

// режимы для даты проводок
wFlDat_DateNow = 195; //Текущая системная дата
wFlDat_DateDoc = 196; //Дата документа
wFlDat_DateDo  = 197; //Дата документа-основания
wFlDat_DateHoz = 198; //Дата хозяйственной операции
wFlDat_DateBeg = 199; //Дата начала отчетного периода
wFlDat_DateEnd = 200; //Дата окончания отчетного периода
wFlDat_MetNach = 257; //Перенос даты проводок с 1-го числа на 2-е в зависимости от статуса документа

// аналитика из объекта строительства
wFlKau_FromKatStroy = 201;

// для циклической обработки по внешним КАУ
wFlKau_KauReffMC  = 202;
wFlKau_KauReffObjBuild  = 203;

// для циклической обработки по счетам фактурам
wFlKau_SchFactNakl       = 204;
wFlKau_SchFactPlat       = 205;
wFlKau_SchFKatSopr       = 250;  // Счет-фактура сопроводительного документа
wFlKau_SchFPlPor         = 251;  // Счет-фактура платежного документа
wFlKau_SchFNalAg         = 252;  // Счет-фактура налогового агента

// ЦО, Подразделение, Организация, Сотрудник ответственный за объект строительства
wFlKau_ResponsForBuild   = 206;

// Виды ОС, виды НМА, группы ОС в операции "Изменение группы/вида"
wFlKau_Old  = 207;
wFlKau_New  = 208;

// аналитика-источник
wFlKau_KauFrom      = 209;
// аналитика-получатель
wFlKau_KauTo        = 210;

// работник - который использует объект спецоснастки (МБП или СФО)
wFlKau_MbpWorker = 211;
// работник - который передал объект спецоснастки (МБП или СФО)
wFlKau_MbpWorkerFrom = 253;

// Статьи планов (бюджетов) из шаблона финпроводки
wFlKau_FpStBudFpObor = 254;
// Зарплата: подразделение отнесения затрат (ПОЗ)
wFlKau_ZarPodrOZ     = 255;
// Зарплата: подразделение
wFlKau_ZarPodr       = 256;

// Аналитика для идентификации филиала в ТХО
wFlKau_CurFilialKAU = 212;

// организация из поля <Кредитор> или <Заемщик> соответствующего кредита,
// связанного с разносимым платежным документом.
wFlKau_CreditCreditor = 213; // организация выдавшая Кредит (из поля <Кредитор>)
wFlKau_CreditDebitor  = 214; // организация получившая Кредит (из поля <Заемщик>)

// режимы для алгоритма циклической обработки бухгалтерских проводок
wFlKau_Oborot_Debit        = 215; // Cчет/субсчет/Аналитика из дебета проводок
wFlKau_Oborot_Credit       = 216; // Счет/субсчет/Аналитика из кредита проводок
wFlKau_Oborot_PodrDebit    = 217; // Поле подразделение из дебета проводок
wFlKau_Oborot_PodrCredit   = 218; // Поле подразделение из кредита проводок
wFlKau_Oborot_FpPeriod     = 219; // Период планирования по дате проводок
wFlKau_Oborot_AnRel1       = 221; // Аналитика по соответствию 1
wFlKau_Oborot_AnRel2       = 222; // Аналитика по соответствию 2
wFlKau_Oborot_AnRel3       = 223; // Аналитика по соответствию 3
wFlKau_Oborot_AnRel4       = 224; // Аналитика по соответствию 4
wFlKau_Oborot_AnRel5       = 225; // Аналитика по соответствию 5
wFlKau_Oborot_AnRel6       = 226; // Аналитика по соответствию 6
wFlKau_Oborot_AnRel7       = 227; // Аналитика по соответствию 7
wFlKau_Oborot_AnRel8       = 228; // Аналитика по соответствию 8
wFlKau_Oborot_AnRel9       = 229; // Аналитика по соответствию 9
wFlKau_Oborot_AnRel10      = 230; // Аналитика по соответствию 10

// режимы для алгоритма циклической обработки дневника учета денежных средств
wFlKau_DiaryAll   = 231; // Нал + б/н
wFlKau_Diary      = 232; // Наличные
wFlKau_DiaryBN    = 233; // Денежные документы
wFlKau_DiaryIncom = 234; // Доход
wFlKau_DiaryNDS   = 235; // НДС
wFlKau_DiaryReff  = 236; // Внешние КАУ

// режим для алгоритма AvisoNP
wFlKau_AnRodDocAviso = 237; // Аналитика родительского документа Авизо

// Режимы для банков
wFlKau_BankPlat      = 238; // Банк плательщик
wFlKau_BankPol       = 239; // Банк получатель
wFlKau_BankKorr      = 240; // Банк корреспондент
wFlKau_BankVeks      = 241; // Банк векселедателя
wFlKau_MTR           = 242; // Аналитика из объекта целевого учета
wFlKau_MTR_SpMOL     = 243; // МОЛ из SpMtrAkt
wFlKau_RaspredSpec   = 244; // Подразделение из спецификации Акта выполненных работ в строительстве
wFlKau_AnVneshAttr   = 245; // Аналитика из внешних атрибутов

// Партии и Группы партий из накладной на передачу МЦ в ОС (алгоритм OsNma)
wFlKau_NaklMcOs      = 259;
// Внешние КАУ на конец предыдущего месяца (алгоритм OsNma)
wFlKau_KauPrevMonth  = 260;
// КАУ из карточки ОС/НМА налогового/бухгалтерского методов учета
wFlKau_KauOsNalMU    = 261;
wFlKau_KauOsBuhMU    = 262;

//константы для лексера
txo_tkNone            =  0;
txo_tkUnknown         =  1;
txo_tkSpace           =  2;
txo_tkIdentifier      =  3;
txo_tkStringConst     =  4;
txo_tkNumberConst     =  5;
txo_tkComment         =  6; // {комментарий}
txo_tkRoundOpen       =  7; // '('
txo_tkRoundClose      =  8; // ')'
txo_tkSquareOpen      =  9; // '['
txo_tkSquareClose     = 10; // ']'
txo_tkStar            = 11; // '*'
txo_tkPlus            = 12; // '+'
txo_tkComma           = 13; // ','
txo_tkMinus           = 14; // '-'
txo_tkPoint           = 15; // '.'
txo_tkPointPoint      = 16; // '..'
txo_tkSlash           = 17; // '/'
txo_tkSlashEqualEqual = 18; // '/=='
txo_tkColon           = 19; // ':'
txo_tkAssign          = 20; // ':='
txo_tkSemiColon       = 21; // ';'
txo_tkLess            = 22; // '<'
txo_tkLessLess        = 23; // '<<'
txo_tkLessLessEq      = 24; // '<<='
txo_tkLessEqual       = 25; // '<='
txo_tkNotEqual        = 26; // '<>'
txo_tkEqual           = 27; // '='
txo_tkEqualEqual      = 28; // '=='
txo_tkGreater         = 29; // '>'
txo_tkGreaterGreater  = 30; // '>>'
txo_tkGrGrEqual       = 31; // '>>='
txo_tkGreaterEqual    = 32; // '>='
txo_tkPower           = 33; // '^'
txo_tkComAt           = 34; // '@'
txo_tkDiez            = 35; // '#'
txo_tkExclamation     = 36; // '!'
// системные режимы wFlKau_ХХХХХХ следует нумеровать по порядку
// начиная с версии 5.85 ТХО API позволяет сторонним разработчикам
// так же добавлять свои собственные режимы и давать им человеческие
// названия, подробнее см. TXOAPI.VIH объекты ObjTxoMenuServer и ObjTxoMenuPlugin
// рекомендуемый диапазон для пользовательских режимов 5000..9999
