!╔═════════════════════════════════════════════════════════════════════╗
!║      Проект ГАЛАКТИКА (c) 1994,95 TOP SOFT Ltd., АО НОВЫЙ АТЛАНТ    ║
!║  Версия :     5.50                                                  ║
!║  Разработал:  Голец Д.И.                                            ║
!║  Назначение:  Константы сопроводительных документов КУТ             ║
!║  Изменения:                                                         ║
!╚═════════════════════════════════════════════════════════════════════╝
!╔═════════════════════════════════════════════════════════════════════╗
!║ Используют :                                                        ║
!╚═════════════════════════════════════════════════════════════════════╝
// Типы перемещений
  RZKUT       = 900;    // Карточка учета товара - номера приходов
  RZRASH      = 920;    // Карточка учета товара - номера расходов
// Тип приходов
  FROM_ORG    = 901;    // Приход от поставщика (также применяется как тип расхода при созданиии
                        //                       ручных расходов в интерфейсе кут по мц)
  FROM_PODR   = 902;    // Приход с оптового склада
  FROM_PEREO  = 903;    // Дооценка (приходы и расходы)
  FROM_INVENT = 904;    // Инвентаризация излишков (приходы и расходы)
  FROM_KASSA  = 905;    // пришло из кассы
  FROM_NAR    = 906;    // пришло от покупателя в текущюю смену
  FROM_NAROD  = 907;    // пришло от покупателя после закрытия смены
  FROM_TO_OTDEL  = 908; // Внутрирозничное перемещение (приходы и расходы)

  ST_INVENT  = 910;    // стоимостная ннвентаризация (супер документ)

// Тип расходов
  TO_ORG     = 911;    // Отправили поставщику
  TO_PODR    = 912;    // Отправили на оптовый склад
  TO_PEREO   = 913;    // Уценка (приходы и расходы)
  TO_INVENT  = 914;    // Инвентаризация недостачи (приходы и расходы)
  TO_KASSA   = 915;    // отправили в кассы
  TO_SPIS    = 917;    // акты на списание
  TO_BYSHOP  = 918;    // продали покупателю через кассы
  TO_NAROD   = 919;    // продали покупателю

!  cmEditSopr         = 18992;
!  cmSortMC           = 18993;
  cmCFG              = 18993;
  cmMakeDO           = 18994;
  cmEditMC           = 18995;
  cmExtendetInfoPrih = 18996;
  cmExtendetInfoRash = 18997;
  cmMakeKut          = 18998;
  cmExtendetInfoAct  = 18999;
!  cmDoSelField       = 199997;
!  cmCheckSumma       = 199998;
!  ercInsertSklOrder  = 1000;
!  ercSoprHoz         = 1001;
!  ercInsertSpOrder   = 1002;

// кассы и режимы экспорта
  extGALAXY   = 0;
  extECell    = 1;
  extIPSPOS   = 2;
  extPWP      = 3;
  extOMRON    = 4;
  extTusson   = 5;
  extOmron28  = 6;
  extShtrih_M = 7;
  extBerlio   = 8;
  extRDA      = 9;
  extTusson2  = 10;

  wayPRICE  = 0;
  wayMOL    = 1;
  wayPODR   = 2;
  wayOTPED  = 3;
  wayMC     = 4;


// Nazgul для передачи параметров в интерфейс GetDocs

vcGetDog_DesGr         =         1;
vcGetDog_Descr         =         2;
vcGetDog_Date          =         4;
vcGetDog_DateSrok      =         8;
vcGetDog_MyOrg         =        16;
vcGetDog_Kontr         =        32;
vcGetDog_GruzFrom      =        64;
vcGetDog_GruzTo        =       128;
vcGetDog_Plat          =       256;
vcGetDog_Pol           =       512;
vcGetDog_Valut         =      1024;
vcGetDog_Progr         =      2048;
vcGetDog_VidDoc        =      4096;
vcGetDog_Status        =      8192;
vcGetDog_KatStatus     =     16384;
vcGetDog_Dogovor       =     32768;
vcGetDog_AppDog        =     65536;
vcGetDog_CalPlan       =    131072;
vcGetDog_ExistKP       =    262144;
vcGetDog_isSelect      =    524288;
vcGetDog_NoFinKP       =   1048576;
vcGetDog_NoMCKP        =   2097152;
vcGetDog_Zamena        =   4194304;
vcGetDog_OtvPodr       =   8388608;
vcGetDog_KatStatusPKP  =  16777216;
vcGetDog_NoCommiss     =  33554432;
vcGetDog_KatStatusSogl =  67108864;
vcGetDog_CurPodr       = 134217728;
vcGetDog_Theme         = 268435456;

koShortName           = 1;
koFullName            = 2;
koFullNameReverse     = 3;
koTipOrg              = 4;
koOnTune              = 5;
koOnBank              = 6;
koOnKauStruct         = 7;

cgCount_Forward  = False; // прямой счет
cgCount_Backward = True; // обратный счет