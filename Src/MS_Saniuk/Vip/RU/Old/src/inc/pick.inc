//------------------------------------------------------------------------------
//                                                      (c) корпорация Галактика
// Галактика 5.80 - модуль "Платежный календарь"
// Константы для Pick.wList
//------------------------------------------------------------------------------

//  см. \TIP&STAT\PICK.TXT - надо перенести сюда

  cgPick_ForAll       =   0;    // по умолчанию
  cgPick_KlVal        =   1;    // валюта
  cgPick_GroupMC      =   2;    // GroupMC
  cgPick_Org   	      =   6;    // KatOrg
  cgPick_MC           =   7;    // KatMC
  cgPick_MOL          =   8;    // KatMOL
  cgPick_Party        =   10;   // KatParty
  cgPick_Sklad        =   11;   // KatPodr
  cgPick_PlatVed      =   18;   // Платежные ведомости
  cgPick_PodotPers    =   19;   // Persons
  cgPick_GoNewPer     =   20;   // Закрытие счетов
  cgPick_KatSopr      =   22;   // Накладные (KatSopr)
  cgPick_SpecOsn      =   23;   // выбор спецоснастки
  cgPick_PrihMBPIn    =   24;   // приходы МБП
  cgPick_KatOs        =   27;   // KatOs
  cgPick_BaseDoc      =   32;   // выбор документов-оснований
  cgPick_VedDepon     =   37;   // Ведомости депонирования  VedDeponir
  cgPick_PlPorDoc     =   39;   // выбор документов PlPor
  cgPick_GroupSFO     =   44;   // групповой выбор групп СФО
  cgPick_Val          =   44;   // тоже word(44). для таблицы Valut
  cgPick_PersCard     =   45;   // групповой выбор ЛК учета МБП
  cgPick_MBPSpis      =   46;   // множественный выбор причин списания (отчет о движении МБП/СФО)
  cgPick_SFO          =   53;   // выбор СФО
  cgPick_Post         =   54;   // должности в СФО
  cgPick_Norm         =   55;   // Нормы СФО
  cgPick_MBPWrite     =   56;   // множественный выбор методик списания
  cgPick_DC           =   57;   // групповой выбор в наборов свойств МЦ (6.0)
  cgPick_FPCO         =   58;   // FPCO (центры ответственности)
  cgPick_Rank         =   61;   // звания в СФО
  cgPick_GrOs         =   110;  // GrOs
  cgPick_Drag         =   112;  // KatDragMet
  cgPick_IspOs        =   111;  // IspOs
  cgPick_KlassOs      =   113;  // KlassOs
  cgPick_KodOKOF      =   114;  // Kodokof
  cgPick_NastrOs      =   115;  // NastrOs
  cgPick_VidNorm      =   116;  // VidNorma (ОС:Каталог видов и норм амортизации)
  cgPick_PrSb         =   118;  // PrSb (ОС:признак собственности)
  cgPick_KatNalGr     =   119;  // KatNalGr
  cgPick_KatOs120     =   120;  // KatOs
  cgPick_KatOs127     =   127;  // KatOs (ГРУППОВЫЕ ОПЕРАЦИИ перехода на сл. период)
  cgPick_KatOsTir     =   150;  // KatOs (ОС:Тиражирование)
  cgPick_Drag200      =   200;  // KatDragMet
  cgPick_AlgTables    =   201;  // выбор таблиц для алгоритма в алгоритмах (ОС)
  cgPick_AlgFields    =   202;  // выбор полей таблиц для алгоритма в алгоритмах (ОС)
  cgPick_UserDeskRep  =   449;  // выбор настроек отчетов из таблицы UserDeskRep

  cgPick_ExClassName  =   632;  // Имена (Внешняя классификация)
  cgPick_ExClassSegm  =   633;  // Сегменты (Внешняя классификация)

// *****************************************************************************
// каталоги KATKOD.VIP (Tolya)
// *****************************************************************************
  cgPick_KatKod_Kpp    = 20001;
  cgPick_KatKod_GNI    = 20002;
  cgPick_KatKod_Bud    = 20003;
  cgPick_KatKod_TPN    = 20004;
  cgPick_KatKod_KppFRO = 20005;
  cgPick_KatKod_Nazn   = 20006;
  cgPick_KatKod_New    = 20007;
  cgPick_KatKod_KBK    = 20008;
  cgPick_KatKod_StatPl  = 20009;
  cgPick_KatKod_VD      = 20011;
  cgPick_KatKod_OPN    = 20018;
// Константы для бюджетного платежного поручения
  cgPick_KatKod_KlasGlv = 20012; // Классификатор глав
  cgPick_KatKod_KlasUNK = 20013; // Классификатор учетных номеров казначейства
  cgPick_KatKod_KlasVid = 20014; // Классификатор расходов по видам
  cgPick_KatKod_KlasPar = 20015; // Классификатор расходов по параграфам
  cgPick_KatKod_KlasPro = 20016; // Программный классификатор расходов
  cgPick_KatKod_KlasEco = 20017; // Экономический классификатор расходов

!  cgPick_ForAll        = 20010;

// *****************************************************************************
// бюджет
// *****************************************************************************
  cgPick_StBud         = 20101; // выбор статей бюджета
!  cgPick_BudVar        = 20102; // выбор копий вариантов бюджета

// *****************************************************************************
// M_TPP 20121 - 20130
// *****************************************************************************
  cgPick_AlgKatmarsh = 20121; // Alg Regl Katmarsh
  cgPick_AlgHDR_PS   = 20122; // Alg Regl HDR_PS

  cgPick_KatPodr_Smet   = 20123; // выбор KatPodr при расчете смет
  cgPick_KatPodr_Balans = 20124; // выбор KatPodr при формировании баланса
  cgPick_KatPodr_Smet_BP = 20133; // выбор KatPodr при расчете смет для источника данных - бух. проводки

  cgPick_DDHierBeforeArch  = 20125; // помеченные DistDocHier в режиме предварительной пометки
  cgPick_DistDocPS        = 20126; // помеченные DistDoc ПС
  cgPick_DistDocKS        = 20127; // помеченные DistDoc КС
  cgPick_DistDocMK        = 20128; // помеченные DistDoc МК
  cgPick_DistDocArch      = 20129; // помеченные DistDoc в режиме группового извлечения/записи в архив
  cgPick_DDHierArch       = 20130; // помеченные DistDocHier в дереве архива
  cgPick_DDHierPS         = 20131; // помеченные DistDocHier ПС
  cgPick_DDHierMK         = 20132; // помеченные DistDocHier МК


// *****************************************************************************
// каталоги ...
// *****************************************************************************

  cgPick_IskiFiltr = 559;
  // при parViewMode = cgiOfp_Multi
  cgPick_FOb       = 2004; // содержит ФОб для выбора из OFPjournal
  cgPick_SvFOb     = 2005; // содержит ФОб для выбора из OFPjournal
  cgPick_PlpFOp    = 2006; // выбранные ФОп для АвтоПодбора к ПлДокам
  cgPick_Prior     = 2007; // выбранные приоритеты для (ПК, )
