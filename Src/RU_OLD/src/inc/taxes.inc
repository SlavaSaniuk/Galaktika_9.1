  // Каталоги KatKod
  cgKatKod_Kpp      =   6; // КПП модуля Ведение налогов
  cgKatKod_GNI      =   2; // СОГНИ
  cgKatKod_Bud      =   3; // Бюджеты
  cgKatKod_TPN      =   4; // Типы платежей/начислений
  cgKatKod_Str      =   5; // Структура налоговых расчетов
  cgKatKod_UNN      =   7; // Привязка к структуре вместо получателя
  cgKatKod_KBK      =   8; // Коды бюджетной классификации КБК
  cgKatKod_Tr       =  10; // Дерево по структуре
  cgKatKod_Template =  17; // Спецификации шаблонов атрибутов

  cgKatKod_OPN      =  28; // Основания платежей/начислений
  cgKatKod_StatPl   =  30; // Статусы лица или органа, оформившего платежный документ

  cgKatKod_Factor   =  18; // Коэффициенты повышения норм времени и тарифов в нарядах 

  // Каталоги, не относящиеся к "Ведению налоговых расчетов"
  cgKatKod_KppFRO   =   1; // КПП модулей ФРО, Касса
  cgKatKod_Nazn     = 101; // Привязка к структуре вместо получателя
  // Константы для автоподстановки контрагентов
  cgKatKod_FitPl    =  20; // Автоподстановка Плательщика
  cgKatKod_FitPol   =  21; // Автоподстановка Получателя
  // Константы для бюджетного платежного поручения
  cgKatKod_KlasGlv  =  22; // Классификатор глав
  cgKatKod_KlasUNK  =  23; // Классификатор учетных номеров казначейства
  cgKatKod_KlasVid  =  24; // Классификатор расходов по видам
  cgKatKod_KlasPar  =  25; // Классификатор расходов по параграфам
  cgKatKod_KlasPro  =  26; // Программный классификатор расходов
  cgKatKod_KlasEco  =  27; // Экономический классификатор расходов
  // Константы для задания соответствия групп - званий - фурнитуры в модуле СФО
  cgKatKod_FurnSFO  =  31; // Соответствие групп - званий - фурнитуры в модуле СФО
  cgKatKod_FReqSFO  =  32; // Спецификация требования для фурнитуры
  cgKatKod_FHstSFO  =  33; // Спецификация нормы для фурнитуры в истории норм
  cgKatKod_Compens  =  34; // Справочник стоимости предметов СФО
  cgKatKod_PrikCmps =  35; // Информация о выплаченной компенсации
  cgKatKod_FurnPrih =  36; // Фурнитура в КУ
  cgKatKod_FurnNakl =  37; // Фурнитура в накладной МЦ - спецодежда
/*
  // потом убрать
    cgPick_KatKod_Kpp    = 1;
    cgPick_KatKod_GNI    = 2;
    cgPick_KatKod_Bud    = 3;
    cgPick_KatKod_TPN    = 4;
    cgPick_KatKod_KppFRO = 5;
    cgPick_KatKod_Nazn   = 6;
    cgPick_KatKod_New    = 7;
    cgPick_ForAll        = 10;
*/
  // уровни дерева
  cgTaxStr_GNI = 1; // ГНИ
  cgTaxStr_Tax = 2; // Налог
  cgTaxStr_Bud = 3; // Статья бюджета
  cgTaxStr_TPN = 4; // ТПН
  cgTaxStr_Pol = 5; // Получатель
  cgTaxStr_Leaf = 5; //cgTaxStr_Pol; // листовая запись

  // номер дерева Налогов (для одновременного отображения)
  cgTypeTaxStr_No       = 0; // для оп.удаления например
  cgTypeTaxStr_TaxStr   = 1;
  cgTypeTaxStr_TaxPlp   = 2; // спецификация НПП
  cgTypeTaxStr_TaxAkt   = 3; //              Налоговых актов

  cgSortRg_Kpp = 0; // КПП
  cgSortRg_Nam = 1; // Наименование
  cgSortRg_Pol = 2; // Получатель платежа
  cgSortRg_For = 3; // Платеж за
  cgSortRg_Atd = 4; // АТД


  // для просм.стр-ры корпорации
  cgType_Leaf     = 1;
  cgType_Node     = 2;

  cgTree_Atd      = 1;
  cgTree_Filial   = 2;
  cgBrowse_Filial = 3;

  cgTree_Taxes    = 1;
  cgBrowse_Taxes  = 2;

  // для выгрузки PlPor
  cgMarker_PlPor  = 'TaxPlPor';
  cgMarker_KatSopr= 'TaxKatSopr';

  cgTiDk_TaxPlp   = 37;   // тип для ПНП
  cgTiDk_TaxAvI   = 38;   //         Исходящее налоговое авизо
  cgTiDk_TaxAvV   = 39;   //         Входящее налоговое авизо
  cgTiDk_TaxAkt   = 112;  //         Налоговых актов
  cgTiDk_AktSvr   = 113;  //         Актов сверки

  cgTiSt_TaxPlp   =  37;  // для статусов
  cgTiSt_TaxAkt   = 100;  //
  cgTiSt_AktSvr   = 100;  //

  cgSpSopr_Akt     = 2;   // спецификация в Налоговом Акте ???
  cgSpSopr_TaxPlp  = 3;   // спецификация для ПНП
  cgSpSopr_TaxAkt  = 4;   //              для Налоговых Актов
  cgSpSopr_TaxSum  = 5;   // исп.для хранения сумм

  // статусы Налогового платежного поручения
  cgStTaxPlp_OFORM   = 0;
  cgStTaxPlp_ISPOLN  = 1;
  cgStTaxPlp_ZAKRYT  = 2;
  // статусы Налогового акта
  cgStTaxAkt_OFORM   = 0;
  cgStTaxAkt_ISPOLN  = 1;
  cgStTaxAkt_PRIOST  = 2;
  cgStTaxAkt_OTMENEN = 3;
  cgStTaxAkt_ZAKRYT  = 4;
  // статусы Акта сверки
  cgStAktSvr_OFORM   = 0;
  cgStAktSvr_ISPOLN  = 1;
  cgStAktSvr_PRIOST  = 2;
  cgStAktSvr_OTMENEN = 3;
  cgStAktSvr_ZAKRYT  = 4;

  // контроль доступа к документам
  cgDostupPl      = 1;
  cgDostupKs      = 1;

  cgSim_TaxPlp    = ' П ';
  cgSim_TaxAvI    = 'А_И';
  cgSim_TaxAvV    = 'А_В';

  // связь филиала
  cgFilial_Org       = 0; // с организацией
  cgFilial_Podr      = 1; // с подразделением

  // типы внешних атрибутов (перенести в глобальные константы)
 // mike - уже перенес

  // атрибуты для документов модуля
  cgTaxAttr_Per   = 'Налоговый период';
  cgTaxAttr_Osn   = 'Основание платежа';
  cgTaxAttr_Num   = 'Показатель номера документа';
  cgTaxAttr_Dat   = 'Показатель даты документа';
