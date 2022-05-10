//------------------------------------------------------------------------------
//                                                      (c) корпорация Галактика
// Галактика 5.80 - модуль "Управление бюджетом"
// Константы работы с модулем "Управление бюджетом"
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// константы Периодов планирования
  // единицы измерения
  cgFpTPerEd_Day           = 0;  // день
  cgFpTPerEd_Week          = 1;  // неделя
  cgFpTPerEd_Month         = 2;  // месяц
  cgFpTPerEd_Quater        = 3;  // квартал
  cgFpTPerEd_HalfYear      = 4;  // полугодие
  cgFpTPerEd_Year          = 5;  // год

  // вид периода
  cgFpTPerVidPer_Std       = 0;  // стандартный
  cgFpTPerVidPer_User      = 1;  // пользовательский

  // выравнивание
  cgFpTPerTypeAlign_Not    = 0;  // не выравнивать
  cgFpTPerTypeAlign_Week   = 1;  // на день недели
  cgFpTPerTypeAlign_Month  = 2;  // на число месяца
  cgFpTPerTypeAlign_Year   = 3;  // на день и месяц года

  // не полный период
  cgFpTPerPartPer_NotUnite = 0;  // не объединять
  cgFpTPerPartPer_Unite    = 1;  // объединять
  cgFpTPerPartPer_AutoU    = 2;  // автоматически
// константы Периодов планирования
//------------------------------------------------------------------------------

// коды каталогов, используемые в таблице fpSpAttr "Спецификация атрибутов"
  cgKat_NotDef     =  0;     // неопределенное значение (для параметров)
  cgKat_AktOFP     =  1;     // каталог фин обязательств
  cgKat_FpRasp     =  2;     // каталог баз распределений
  cgKat_FpTForm    =  3;     // каталог типовых форм бюджетов
  cgKat_FpStBud    =  4;     // каталог статей бюджетов
  cgKat_FpPeriod   =  5;     // каталог периодов планирования
  cgKat_FpCO       =  6;     // каталог ЦО
  cgKat_DocReq     =  7;     // каталог заявок модуля ПК
  cgKat_HashAn     =  8;     // каталог HashAn
  cgKat_FpRaspR    =  9;     // каталог позиций баз распределения
  cgKat_FpSpAttr   = 10;     // каталог спецификации атрибутов
  cgKat_FpFilter   = 11;     // пользовательские фильтры для FpOborot
  cgKat_FpKatImp   = 12;     // каталог соответствий для экспорта-импорта FpKatImp
  cgKat_FpState    = 13;     // статусы бюджета FpState
  cgKat_FpTiDKRelOb= 14;     // связь финопераций с бюджетом (типы документов)
  cgKat_Clearing   = 15;     // финоперации (в ПК под дефайном __OFP_FopByStBud__)
  cgKat_BudAn      = 16;     // атрибуты аналитик бюджетирования
  cgKat_TypoTPer   = 17;     // Каталог типологий периодов
  cgKat_FpSpAnSet  = 18;     // Спецификация наборов занчений аналитики
  cgKat_UserData1  = 19;     // раздел для "сторонних" доработок (доработка №1)

// битовые комбинации для план/факт/резерв
  cgRegBit_No        = cgBitNo;    // нет
  cgRegBit_Plan      = cgBit00;    // план
  cgRegBit_Fact      = cgBit01;    // факт
  cgRegBit_Rezerv    = cgBit02;    // резерв

// константы для функций проверки каталогов
  cgFpKatH_Check_IsDel     = 1;
  cgFpKatH_Check_IsCorrect = 2;

// константы для функций проверки прав доступа
  cgFpGetAvailableList_TFMode = 0;
  cgFpGetAvailableList_COMode = 1;
  cgFpGetAvailableList_StBudMode = 2;
  cgFpGetAvailableList_VariantMode = 3;
  cgFpGetAvailableList_AreaMode = 4;
  cgFpGetAvailableList_BudProcMode = 5;
  cgCUGetAvailableList_StBudMode = 6;
  cgFpNotAvailable  = 0;
  cgFpViewAvailable = 1;
  cgFpEditAvailable = 2;

// константы для округления
  cgFp_NoRound      = 0;
  cgFp_NormalRound  = 1;
  cgFp_GreaterRound = 2;

// атрибуты статьи бюджета
  cgStBud_Valut     =   1;  // валютная
  cgStBud_EdIzm     =   2;  // количественная
  cgStBud_VTCh      =   4;  // "в том числе"
  cgStBud_Saldo     =   8;  // сальдируемая
  cgStBud_VnOb      =  16;  // внутренние обороты 
  cgStBud_SpecR     =  32;  // спецрасчет         
  cgStBud_InpSaldo  =  64;  // входящий остаток   
  cgStBud_OutSaldo  = 128;  // исходящий остаток  
  cgStBud_AVG_PP    = 256;  // среднее арифметическое по периоду

// минимальное значение показателя в бюджете
  // cgFp_MinSumma = 0.00000000001;
  // Начиная с Атлантис 5.2.02 введен новый синтаксис для типа money, decimal, numeric и number
  // теперь в БД tSumma = Decimal(24,8)
  cgFp_MinSumma = 0.00000001;

// признак активного варианта бюджета
  cgFp_ActivBudVar = 1;

// Идентификация осей по наполнению
  wAxis1Id = 1;  // Ось со __статьями__
  wAxis2Id = 2;  // Другая ось :)
// Идентификация осей по расположению
  wAxisY   = 1;  // Ось строк   (вертикальная)
  wAxisX   = 2;  // Ось колонок (горизонтальная)

// Для поля AttrSys таблицы fpValues
  fpValues_AttrSys_Cell_Is_Fixed = 1;      // Значение фиксировано
  fpValues_AttrSys_Cell_Is_Limit = 2;      // Значение является лимитом
  fpValues_AttrSys_Cell_Have_Prim = 4;     // Значение имеет коментарий

//  Режимы построения объекта MultiAgr.THierContainer
  Hier_IsFPMeanInMem  =  1; // 0001h;      // таблица FpMeanTF, используется как ТП
//  Для маски ячейки в терминах MultiAgr
  Cell_IsAgregat    =    1; // 0001h;      // Агрегат по смеси (статьи+аналитика) и периодам
  Cell_IsReal       =    2; // 0002h;
  Cell_IsAgregatTF  =    4; // 0004h;      // Агрегат по осям (горизонтальной и вертикальной)
  Cell_IsMayEnter   =    8; // 0008h;
  Cell_IsModified   =   16; // 0010h;
  Cell_IsToSave     =   32; // 0020h;
  Cell_IsFormula    =   64; // 0040h;
  Cell_IsAllOne     =  128; // 0080h;
// Если будут еще параметры для хранения внутри иерархий - Need more size Mask !!!
//Cell_IsFree       =  256; // 0100h;
//Cell_IsFree       =  512; // 0200h;
//Cell_IsFree       = 1024; // 0400h;
// Дополнительная информация по ячейке для высветки в редактировании бюджета
  Cell_IsCalcAgrSt  = 2048; // 0800h;      // Статья, которой подчинена ячейка, в данных условиях, либо вычисляемая, либо агрегируемая
  Cell_IsAgregatSt  = 4096; // 1000h;      // Статья, которой подчинена ячейка, является агрегатом
  Cell_IsAgregatPer = 8192; // 2000h;      // Период, которому подчинена ячейка, является агрегатом
// Специальные аттрибуты ячейки
  Cell_IsFixed     = 16384; // 4000h;      // Значение в ячейке фиксировано.  Old: wFlagFix   = 4000h;
  Cell_IsLimit     = 32768; // 8000h;      // Значение в ячейке лимитируемое. Old: wFlagLimit = 8000h;

// Для способа получения курса валюты
  CursByFirstDate  = 0;
  CursByLastDate   = 1;
  CursByMiddleDate = 2;
  CursByAverage    = 3;

// Курс валют финансовых операций
  CursByFpOborotDate    = 0;
  CursByFpOborotPeriod  = 1;

// Признак невычисления формулы на варианте и ЦО
  NoFormulaForVariant = '###';

// Элементы синтаксиса идентификаторов для расчетов в ФП
  IdChar        = '%';  // 37
  IdCurrent     = '=';  // 61
  IdPrev        = '<';  // 60
  IdWithoutAn   = '^';  // 94

// константы для кэширования
  FpNo_Cash       = 0;
  FpNormal_Cash   = 1;
// константы параметров запуска каталога аналитики бюджетирования
  FpAccess_ctForm   = 1;
  FpAccess_KodGrKau = 2;

// константы для таблиц в памяти (передаются в объект ObjFpMemoryTablesID)
  co_BudgetPeriod    = 1;
  co_ListBudget      = 2;
  co_PeriodRelations = 3;
  co_ListTForm       = 4;
  co_ListSheet       = 5;
  co_SessionSemaphor = 6;
  co_MtFpImpRel      = 7;
  co_MtFpKatImp      = 8;
  co_Stru_FPSpAxis   = 9;

// константы параметров запуска EditListBudget (FpLBud.vip)
  cgiFpLBud_ShowMBudName        = 1;
  cgiFpLBud_ShowMVarName        = 2;
  cgiFpLBud_ShowMBudVarName     = 4;
  cgiFpLBud_ShowMBudVarNpp      = 8;
  cgiFpLBud_ShowMBitReg         = 16;
  cgiFpLBud_ShowMDataStatus     = 32;

  cgiFpLBud_ShowSBudName        = 64;
  cgiFpLBud_ShowSVarName        = 128;
  cgiFpLBud_ShowSBudVarName     = 256;
  cgiFpLBud_ShowSBudVarNpp      = 512;
  cgiFpLBud_ShowSBitReg         = 1024;
  cgiFpLBud_ShowSDataStatus     = 2048;

  cgiFpLBud_ShowDelMode         = 4096;
  cgiFpLBud_ShowOrder           = 8192;

  cgiFpLBud_ShowMCPPName        = 16384;
  cgiFpLBud_ShowSCPPName        = 32768;

// константы параметров запуска FpOborot
  cgiFpOborot_AllOborot         = 0; // все
  cgiFpOborot_DocOborot         = 1; // по документу
  // ---------------------------------------------------------------------------
  // Режимы под вопросом - нужны ли и используются ли
  cgiFpOborot_DocAndSpDocOborot = 2; // документ+спецификация
  cgiFpOborot_SpDocOborot       = 3; // только спецификация
  // ---------------------------------------------------------------------------
  cgiFpOborot_SoprHozOborot     = 4; // по SoprHoz
  cgiFpOborot_DocSpOborot       = 5; // по позиции спецификации документа

// Embedded FpOborot (FpEmbOb.Vih)
  cgiFpOborot_BrowseFull        = 0; // browse с нижней панелью доп.информации
  cgiFpOborot_ScreenFull        = 1; // большой screen
  cgiFpOborot_BrowseShort       = 2; // browse без нижней панели с доп.информацией
  cgiFpOborot_ScreenShort       = 3; // маленький screen
  cgiFpOborot_BrowseDocOb       = 4; // browse для финопераций документов

// константы параметров запуска GetKauValues (GTKAUVAL.VIP)
  cgiFpKauValues_BaseMode            = 0;
  cgiFpKauValues_NotEditAnalitDoc    = 1;
  cgiFpKauValues_NotEditAnalitBud    = 2;
  cgiFpKauValues_NotShowAnalitDoc    = 4;
  cgiFpKauValues_NotShowAnalitBud    = 8;

// константы параметров запуска Budget (Budget.vip)
  cgiBudget_GetSingle        = 0;  // одиночный бюджета       
  cgiBudget_GetArg           = 1;  // агрегированный бюджет   
  cgiBudget_GetConsolidate   = 2;  // консолидированный бюджет
  cgiBudget_GetArgVirt       = 3;  // агрегированный бюджет виртуальный   
  cgiBudget_GetArgDecomp     = 4;  // агрегированный бюджет для декомпозиции

// константы параметров запуска EditFpAgrSet (FpAgrSet.Vip )
  cgiEditFpAgrSet_ParamRule = 0;
  cgiEditFpAgrSet_TFormRule = 1;
  cgiEditFpAgrSet_VCubeRule = 2;

// Идентификаторы сущностей объекта tObjFpAddFldObjInterface
// А именно полей таблиц: FpAddFld.wEntity FpEntFld.wEntity
  FpAreaEntity                   = 1;  // Управление бюджетом | Настройка | Области видимости
  FpBudVarEntity                 = 2;  // Управление бюджетом | Документы | Бюджеты | Копии бюджетов
  BuhRepEntity                   = 3;  // Бухгалтерская отчетность
  FpTFormEntity                  = 4;  // Управление бюджетом | Настройка | Типовые формы бюджетов 
  FpStateEntity                  = 5;  // Статусы и состояния бюджетов
  CulcFpObEntity                 = 6;  // Управление бюджетом | Операции | Загрузка финансовых операций
  GetMRaspCOEntity               = 7;  // Управление бюджетом | Операции | Модели распределений по ЦО
  ReCalcBudgetEntity             = 8;  // Управление бюджетом | Операции | Пересчет бюджетов
  GrBudgetCopyEntity             = 9;  // Управление бюджетом | Операции | Копирование бюджетов
  FpBudgetAggrEntity             = 10; // Управление бюджетом | Операции | Агрегация бюджетов
  FpImportXLSBudgetEntity        = 11; // Управление бюджетом | Операции | Экспорт импорт бюджетов | Импорт бюджетов из Excel
  FpImportDBFBudgetEntity        = 12; // Управление бюджетом | Операции | Экспорт импорт бюджетов | Импорт бюджетов из DBF
  FpExportBudgetEntity           = 13; // Управление бюджетом | Операции | Экспорт импорт бюджетов | Экспорт бюджетов в DBF
  FpCompBudgetTuneEntity         = 14; // Управление бюджетом | Настройка | Представления для анализа бюджетов
  FpModulAdmin                   = 15; // Настройки Галактики \ Управление финансами \ Бюджетирование \ Права доступа \ Администраторы модуля
  FaImportEntity                 = 16; // Импорт в ФинАнализе
  FpDecompByPeriodEntity         = 17; // Управление бюджетом | Операции | Декомпозиция бюджетов
  FpClearBudgetEntity            = 18; // Управление бюджетом | Операции | Очистка данных бюджета
  FpCreateBudgetEntity           = 19; // Управление бюджетом | Операции | Создание бюджетов
  OsChgParEntity                 = 20; // ОСы, список доп пар-ров в операциях
  FpMRTuneEntity                 = 21; // Управление бюджетом | Операции | Модели распределений по ЦО
  GetKatImpRelEntity             = 22; // Финансово-расчетные операции | Настройка | Каталог соответствий аналитики
  ObjFpGrEditAnMeanOborotEntity  = 23; // Управление бюджетом | Настройка | Администратор | Замена значений аналитик бюджетирования
  FpImportXLSFpOborotEntity      = 24; // Управление бюджетом | Операции | Экспорт импорт бюджетов | Импорт финопераций из Excel
  RunFpBudAlgEntity              = 25; // Управление бюджетом | Операции | Выполнение алгоритмов
  RunFpStatAlgEntity             = 26; // Управление бюджетом | Операции | Выполнение алгоритмов
  RunFpMTGExpDbfEntity           = 27; // Экспорт бюджетов для (спец МТГ)
  ObjFpPaymentTemplEntity        = 28; // Шаблоны формирования ПД из бюджетов (спец ПР)
  ObjFpPlPorPayTemplEntity       = 29; // Шаблоны формирования ПП из бюджетов (спец ПР)
  ObjFpEMailPayTemplEntity       = 30; // Шаблоны формирования EM из бюджетов (спец ПР)
  RunFpPaymentEntity             = 31; // Интерфейс формирования док-тов из бюджетов (спец ПР)
  EditFpImpTemplaterEntity       = 32; // Шаблоны импорта бюджетов (спец ПР)
  RunnerFpImportEntity           = 33;
                                       // Управление бюджетом | Настройка | Настройка бюджетных процессов:
  FpParamCO_A                    = 34; // Параметр ЦО роль А
  FpParamCO_B                    = 35; // Параметр ЦО роль В
  FpParamPer_A                   = 36; // Параметр период роль А
  FpParamPer_B                   = 37; // Параметр период роль В
  FpParamSt_A                    = 38; // Параметр реквизиты копии роль А
  FpParamSt_B                    = 39; // Параметр реквизиты копии роль В
  FpParamKodReg_A                = 40; // Параметр регистр учета роль А
  FpParamKodReg_B                = 41; // Параметр регистра учета роль В
  FpParamTForm_A                 = 42; // Параметр типовая форма роль А
  FpParamTForm_B                 = 43; // Параметр типовая форма роль В
  FpParamList_A                  = 44; // Параметр список бюджетов роль А
  FpParamList_B                  = 45; // Параметр список бюджетов роль В
  FpMailTuneEntity               = 46; // Настройка EMail (спец ПР)
  FpCreateBudgetEntityUsr        = 47; // Сущность для интерфейса создания бюджетов с возможностью персонификации настроек
  FpClearBudgetEntityUsr         = 48; // Сущность для интерфейса очистки бюджетов с возможностью персонификации настроек
  CulcFpObEntityUsr              = 49; // Сущность для интерфейса загрузки финопераций с возможностью персонификации настроек
  FpBudgetAggrEntityUsr          = 50; // Сущность для интерфейса агрегации с возможностью персонификации настроек
  FpDecompByPeriodEntityUsr      = 51; // Сущность для интерфейса декомпозиции с возможностью персонификации настроек
  GrBudgetCopyEntityUsr          = 52; // Сущность для интерфейса копирования с возможностью персонификации настроек
  GetMRaspCOEntityUsr            = 53; // Сущность для интерфейса моделей распределений с возможностью персонификации настроек
  ReCalcBudgetEntityUsr          = 54; // Сущность для интерфейса пересчета бюджетов с возможностью персонификации настроек
  RunnerFpImportEntityUsr        = 55; // Сущность для интерфейса импорта пакетов данных с возможностью персонификации настроек
  FpImportXLSBudgetEntityUsr     = 56; // Сущность для интерфейса импорта бюджетов из Excel с возможностью персонификации настроек
  FpImportDBFBudgetEntityUsr     = 57; // Сущность для интерфейса импорта бюджетов из DBF с возможностью персонификации настроек
  FpImportXLSFpOborotEntityUsr   = 58; // Сущность для интерфейса импорта финопераций из Excel с возможностью персонификации настроек
  FpExportBudgetEntityUsr        = 59; // Сущность для интерфейса экспорта бюджетов с возможностью персонификации настроек
  RunFpPaymentEntityUsr          = 60; // Сущность для интерфейса формирования платежных документов с возможностью персонификации настроек
  RunFpStatAlgEntityUsr          = 61; // Сущность для интерфейса выполнения статистических алгоритмов с возможностью персонификации настроек
  FpReplaceParam_A               = 62; // Параметр режим замены роль А
  FpReplaceParam_B               = 63; // Параметр режим замены роль B
  FpLinkScenarioEntity           = 64; // Сущность для ссылок на сценарии в бюджетных процессах
  FpBudVarAttrEntity             = 65; // Сущность для интерфейса установки атрибутов
  FpBudVarAttrEntityUsr          = 66; // Сущность для интерфейса установки атрибутов с возможностью персонификации настроек
  FpUserParam_A                  = 67; // Параметр пользователи роль А
  FpUserParam_B                  = 68; // Параметр пользователи роль B
  ImportRelationEntity           = 69; // Сущность для интерфейса соответствия аналитик
  FinDistpl_mtlog                = 70; // Лог распределения в пакетном распеделении (interface PlDocDistr)
  FpBudProcRunnerEntity          = 71; // Сущность для интерфейса выполнения бюджетных процессов
  FpBudProcRunnerEntityUsr       = 72; // Сущность для интерфейса выполнения бюджетных процессов с возможностью персонификации настроек
  FpCheckListBudgetEntity        = 73; // Сущность для интерфейса выполнения проверки списка бюджетов
  FpCheckListBudgetEntityUsr     = 74; // Сущность для интерфейса выполнения проверки списка бюджетоа с возможностью персонификации настроек
  FpManualEditingBudgetEntity    = 75; // Сущность для интерфейса операции ручного редактирования бюджета
  FpManualEditingBudgetEntityUsr = 76; // Сущность для интерфейса операции ручного редактирования бюджета с возможностью персонификации настроек
  FpArchivingBudgetEntity        = 77; // Сущность для интерфейса операции архивирования бюджета
  FpArchivingBudgetEntityUsr     = 78; // Сущность для интерфейса операции архивирования бюджета с возможностью персонификации настроек

  PlDocDistrEntity  		 = 79; // Сущность для интерфейса пакетное распределение платежей с возможностью персонификации настроек
  PlDocDistrEntityUsr  		 = 80; // Сущность для интерфейса пакетное распределение платежей
  PatFilterEntity                = 81; // Сущность для фильтров на аналитику
  DistrCredAdv_log               = 82; // Сущность для интерфейса зачета авансов
  FpDeleteBudgetEntity           = 83; // Сущность для интерфейса удаления копий бюджетов
  FpDeleteBudgetEntityUsr        = 84; // Сущность для интерфейса удаления копий бюджетов с возможностью персонификации настроек

  FpORelObEntity                 = 85; // Управление бюджетом | Настройка | Правила передачи данных

// идентификаторы сущностей в FP
  cgFpEntity_Budget  = 1;
  cgFpEntity_BudVar  = 2;
  cgFpEntity_BudProt = 3;
  cgFpEntity_KatExpr = 4;
  cgFpEntity_ProtExpEMail = 5;
  cgFpEntity_ProtExpExcel = 6;

// идентификаторы виртуальных каталогов в FP на UserDeskRep
  cgReport_KatFpRelObBud       = 717; // cgReport_717
  cgReport_KatFpCompBudgetTune = 718; // cgReport_718
  cgReport_KatOfpLimitTune     = 720; // cgReport_720
  cgReport_KatFpAlgSetTune     = 721; // cgReport_721
  cgReport_KatFpStatAlgTune    = 722; // cgReport_722

  cgAnaliz_FpBudget  = 0; // Анализ бюджетов УБ
  cgAnaliz_OfpLimit  = 1; // Анализ лимитов ПК
  cgAnaliz_FpAlgSet  = 2; // Алгоритмы расчета
  cgAnaliz_FpStatAlg = 3; // Алгоритмы расчета статистические

// константы объекта ObjFpCulcCompBudget
  lcFpCompMaxColCount = 250;

// константы объекта iObjFpLockValues
  fpcgBudVarLock = 1;
  fpcgKodRegLock = 2;
  fpcgStBudLock  = 4;
  fpcgPeriodLock = 8;

  fpcgActiveSem  = 1;
  fpcgAgrSegSem  = 2;

// состояния документов финопераций
  cgFpOb_ActionState   = 0;
  cgFpOb_NoActionState = 1;

// документы финопераций
  cgFpOb_HDOk       = 0;
  cgFpOb_HDNotFound = 1;

// интревал между проверками на модификацию записей в таблице (секунд)
  cMinTimeChange = 5;

// правила блокировки статей типовой формы в интерфейсе "Редактирование бюджета"
  cgBudEditPreLockStBudRule_AllLock = 1;
  cgBudEditPreLockStBudRule_NotLock = 2;
  cgBudEditPreLockStBudRule_Default = 0;

// режимы Экспорт/Импорта
  cgiFpImpExp_Import = 0; // Импорт
  cgiFpImpExp_Export = 1; // Экспорт
  cgiFpImpExp_IEMail = 2; // Импорт  EMail
  cgiFpImpExp_EEMail = 3; // Экспорт EMail
