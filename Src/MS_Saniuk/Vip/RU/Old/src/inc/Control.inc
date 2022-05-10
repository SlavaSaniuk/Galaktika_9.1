// Категории ресурсов
  Resurs_Is_Buy     = 0;  // Покупной ресурс
  Resurs_Is_Manuf   = 1;  // Собственного производства
!  Resurs_Is_Total   = 2;  // Обобщенный ресурс
  Resurs_Is_Fantom  = 3;  // Фантомный
  Resurs_Is_SubCont = 4;  // Субподрядный
  Resurs_Is_Work    = 36; // трудовые нормы
  Filtr_Value       = 1;  // значение npp, не включаемое в лог. таблицу
  Maxim_Value       = 2147483647;  // значение npp при вводе новой записи

// статьи расходов - доходов
  StZatr_Rasxod   = 0; // статья расходов
  StZatr_Doxod    = 1; // статья доходов
  StZatr_Prochie  = 2; // прочие суммы

  NameStZatr_Rasxod   = 'расходы';
  NameStZatr_Doxod    = 'доходы';
  NameStZatr_Prochie  = 'прочие суммы';

// признак статей смет
  StSmet_Rasxod   = 0; // статья расходов
  StSmet_Gruppa   = 1; // группа статей
  StSmet_InfPok   = 2; // информационный показатель
  StSmet_Doxod    = 3; // статья доходов

  NameStSmet_Rasxod   = 'статья затрат';
  NameStSmet_Gruppa   = 'группа статей';
  NameStSmet_InfPok   = 'инф. показатель';
  NameStSmet_Doxod    = 'статья доходов';

  NameElemZatr_InSvod = 'Доходы';

  wTune_TypeZatr_PB   = 0; // настройки для формирования ПБ
  wTune_TypeZatr_Smet = 1; // настройки для расчета смет

// константы типа документа для ДЕИ
  cgDEI_ForReport = 820;
  cgDEI_ForBalans = 819;

// константы типов количеств для ДЕИ
  cgTypDEI_MoveBegSaldo = 1;
  cgTypDEI_MoveInCom    = 2;
  cgTypDEI_MovePotrCom  = 3;
  cgTypDEI_MoveSentCom  = 4;
  cgTypDEI_MoveProdCom  = 5;
  cgTypDEI_MoveProdComN = 6;
  cgTypDEI_MoveEndSaldo = 7;
  cgTypDEI_MoveSpisCom  = 8;

  cgTypDEI_ProdFact     = 1;
  cgTypDEI_ProdNorma    = 2;

  cgTypDEI_CostBegSaldo = 1;
  cgTypDEI_CostPotrCom  = 2;
  cgTypDEI_CostSpisCom  = 3;
  cgTypDEI_CostSpisComN = 4;
  cgTypDEI_CostEndSaldo = 5;

  cgTypDEI_LinkAmount   = 1;

  cgTypDEI_SaleBegSaldo = 1;
  cgTypDEI_SaleShipCom  = 2;
  cgTypDEI_Sale_SaleCom = 3;
  cgTypDEI_SaleEndSaldo = 4;

  cgTypDEI_ObjBegNzp  = 1;
  cgTypDEI_ObjZapusk  = 2;
  cgTypDEI_ObjProizv  = 3;
  cgTypDEI_ObjEndNzp  = 4;

// константы видов себестоимостей
  cgSebestPlan    = 1;  // плановая
  cgSebestFact    = 2;  // фактическая
  cgSebestFactBux = 3;  // фактическая бухгалтерская
  cgSebestNormFV  = 4;  // нормативная на ФВ

  cgVidBalans_StrCalc    = 100;  // настройки структур калькуляций
  cgVidBalans_StrSmeta   = 101;  // настройки структур смет
  cgVidBalans_StrFactor  = 102;  // настройки структур факторного анализа

  cgVidBalans_TunePO     = 200;  // настройки выгрузки ПД в ПО
  cgVidBalans_TunePB     = 201;  // настройки выгрузки ПД в баланс
  cgVidBalans_TuneBudjet = 202;  // настройки выгрузки ПД в сметы
  wPrzBill_CalcSmetVxSld = 203;  // пары СТАТЬИ - ВЦ

                                 // настройки для отчетов Дескр
  cgVidBalans_CalcSvod   = 806;  //  Сводные затраты по подразделениям
  cgVidBalans_Sent_Res   = 807;  //  Распределение затрат подразделения
  cgVidBalans_ResNaVolum = 808;  //  Расходы ресурсов на выпуск
  cgVidBalans_Potr_Res   = 809;  //  Потребление затрат подразделения
  cgVidBalans_Map_Potr   = 810;  //  Карта потребления ресурсов
  cgVidBalans_Flm_POPB   = 820;  //  ФЛМ Печать отчета по ПО и ПБ
  cgVidBalans_Calc_Obj   = 825;  //  Калькуляция себестоимости объекта
  cgVidBalans_Calc_Ved   = 826;  //  Сводная ведомость калькуляций
  cgVidBalans_ContrZatrSmets = 829;  //  Отчет по сметам
  cgVidBalans_CompareRep = 830;  //  Сравнительные отчеты
  cgVidBalans_OtklFactor = 831;  //  Отклонения по факторам
  cgVidBalans_CalcBalans = 841;  //  Калькуляционный баланс
  cgVidBalans_DR_Nastr   = 843;  //  ДиР предприятия в настраиваемых разрезах
  cgVidBalans_FictDoc    = 852;  //  Настройки формирования КД
  cgVidBalans_CalcSmet   = 877;  //  Калькуляционная смета
  cgVidBalans_CompAnaliz = 878;  //  Сравнительный анализ
  cgVidBalans_DecodeCalc = 886;  //  Расшифровка себестоимости объекта
  cgVidBalans_FactRealiz = 1000; //  Факт реализации и затрат


// Производственный отчет (баланс)      VALUE = 0  НЕ ДОПУСТИМО!!!
  Vx_Ostatok       = 0;  // входящий остаток ( не для ПБ, а как исключение для идентификации остатков)
  IN_OPERATE       = 1;  // Поступление
  EX_OPERATE       = 2;  // Передача
  LOST_OPERATE     = 4;  // Потери
  SHIP_OPERATE     = 5;  // Отгрузка
  PURSHASE_OPERATE = 6;  // Закупка
  SALE_OPERATE     = 7;  // Отгрузка+Реализация  - старая Реализация
  PROD_OPERATE     = 8;  // Произведено    фиктивная для кальк
  POTR_OPERATE     = 9;  // Переработка    фиктивная для кальк
  SALE_Only_OPERATE       = 10; // Реализация со склада без транзита через Отгрузку
  RETURN_OPERATE          = 11; // Возврат из запасов (сметы) на склад (по возвратной накладной)
  RET_OPERATE_SHIP        = 12; // Возврат Отгрузки
  RET_OPERATE_SALE_Only   = 13; // Возврат Реализации со склада
  RET_OPERATE_SALE_InShip = 14; // Возврат Реализации в Отгрузку
  
  Rate_VovlProd    = 15; // спецалгоритм ЛП
  Tune_All         = 16; // распределения
  Move_Zatr        = 17; // спецалгоритм ПЕРЕНОС ЗАТРАТ
  FromOU_to_PB     = 18; // спецалгоритм распределения с ОУ на ПВ
  Rate_ComponBPK   = 19; // спецалгоритм начисления компонент ВПК
  Rate_OtherSmet   = 24; // начисление из ПРОЧИЕ
  Rate_NoCalcPB    = 25; // спецалгоритм начисления некалькулируемые ПВ

//кол-во операций СДР
  Amount_Oper      = 10; // должно синхронизироваться с  var wwPriorOst: array [1..10] of word;
  Amount_Prioritet = 7;  // столько операций - приоритетность важна

// наименование операций
  Naim_POTR_OPERATE  = 'Переработка';
  Naim_PROD_OPERATE  = 'Произведено';
  Naim_EX_OPERATE    = 'Передача';
  Naim_SHIP_OPERATE  = 'Отгрузка';
  Naim_SALE_OPERATE  = 'Реализация';
  Naim_SALE_Only_OPERATE       = 'Реализация со склада';
  Naim_SHIPandSale_OPERATE     = 'Отгрузка+Реализация';
  Naim_LOST_OPERATE            = 'Потери';
  Naim_RETURN_OPERATE          = 'Возврат запасов';
  Naim_RET_OPERATE_SHIP        = 'Возврат отгрузки';
  Naim_RET_OPERATE_SALE_Only   = 'Возврат реализации';
  Naim_RET_OPERATE_SALE_InShip = 'Возврат в отгрузку';

  Naim_IN_OPERATE       = 'Поступление';
  Naim_PURSHASE_OPERATE = 'Закупка';

// индекс "операции" в полях приоритетность для калькулирования
  Prior_POTR_OPERATE     = 1;  // Переработка
  Prior_EX_OPERATE       = 2;  // Передача
  Prior_SHIP_OPERATE     = 3;  // Отгрузка
  Prior_SALE_OPERATE     = 4;  // Реализация
  Prior_LOST_OPERATE     = 5;  // Потери
  Prior_RETURN_OPERATE   = 6;  // Возврат запасов
  Prior_RET_OPERATE_SHIP = 7;  // Возврат отгрузки

// уровень доступа к ПО и ПБ
  Level_Admin   = 0;
  Level_Oforml  = 1;
  Level_Utverg  = 2;

// состояния  ПО и ПБ
  Status_POB_Oforml = 0;
  Status_POB_Utverg = 1;
  Status_POB_Obrab  = 2;
  Status_POB_Close  = 3;

// источники формирования ПБ
  ValueSource_ManufReport        = 1;
  ValueSource_SummaryManufReport = 2;
  ValueSource_PrimaryDocument    = 4;
  ValueSource_Oborot             = 8;

// наименования источников формирования ПБ
  NameValueSource_ManufReport        = 'ПО';
  NameValueSource_SummaryManufReport = 'сводные ПО';
  NameValueSource_PrimaryDocument    = 'первичные док-ты';
  NameValueSource_Oborot             = 'бухпроводки';

// наименование фиктивного ОУ
  Naim_FictObject  = '<В_целом_по_изготовителю>';

// источник данных для ФПБ
  cgFormFPB_Amount         = 0;
  cgFormFPB_Summa          = 1;
  cgFormFPB_AmountAndSumma = 2;
  cgFormFPB_AmountInSumma  = 3;
  cgFormFPB_AmountEIandDEI = 4;

  NameFormFPB_Amount         = 'Количество';
  NameFormFPB_Summa          = 'Сумма';
  NameFormFPB_AmountAndSumma = 'Кол-во и сумма';
  NameFormFPB_AmountInSumma  = 'Кол-во из суммы';
  NameFormFPB_AmountEIandDEI = 'Кол-во в двух ЕИ';

  VidPr_Complet    = 0;  // Готовая продукция
  VidPr_NZP        = 1;  // НЗП
  VidPr_Defect     = 2;  // Брак
  VidPr_Waste      = 3;  // Отходы используемые
  VidPr_Lost       = 4;  // Потери
  VidPr_WasteNoUse = 33; // Отходы неиспользуемые

//// импорт ПО из Excel
  Chr_OrganizLat   = 'K';  // код предприятия (лат)
  Chr_OrganizRus   = 'К';  // код предприятия (рус)
  Chr_DateLat      = 'D';  // даты начала и окончания (лат)
  Chr_DateRus      = 'Д';  // даты начала и окончания (рус)
  Chr_DCLat        = 'C';  // давальческое сырье (лат)      -> Word_DC
  Chr_DCRus        = 'С';  // давальческое сырье (рус)      -> Word_DC
  Chr_GPRus        = 'Г';  // готовая продукция (рус)       -> Word_GP
  Chr_PFRus        = 'П';  // полуфабрикаты (рус)           -> Word_PF
  Chr_WasteLat     = 'O';  // отходы (лат)                  -> Word_Waste
  Chr_WasteRus     = 'О';  // отходы (рус)                  -> Word_Waste

////  хранение категорий МЦ в таблицах
  Word_GP          = 3;    // готовая продукция             -> Str_,Short_GP
  Word_PF          = 4;    // полуфабрикаты                 -> Str_,Short_GP
  Word_DC          = 5;    // давальческое сырье            -> Str_,Short_DC
  Word_Waste       = 6;    // отходы                        -> Str_Waste

////  визуализация сокращ. наимен. категорий МЦ
  Short_DC         = 'ДС'; // давальческое сырье
  Short_GP         = 'ГП'; // готовая продукция
  Short_PF         = 'ПФ'; // полуфабрикаты

////  визуализация детализации по НЗП
  Str_DC           = 'Сырье';      // давальческое сырье
  Str_GP           = 'Продукция';  // продукция
  Str_Waste        = 'Отходы';     // отходы


//  Для вызова интерфейса GetOtpEd
  TYPE_MC      = 1;
  TYPE_USL     = 2;
  TYPE_GrMC    = 3;
  TYPE_GrUSL   = 4;

// Алгоритмы цен в типах цен
  PriceAlg_Manual    = 0;     // конкретное значение
  PriceAlg_AverSale  = 1;     // средние цены реализации
  PriceAlg_AverOtp   = 2;     // средние фактические цены
  PriceAlg_PlanUcht  = 3;     // ПУЦ по данным складских остатков
  PriceAlg_PlanCalc  = 4;     // ПУЦ на основе себестоимости
  PriceAlg_Purchase  = 5;     // средние закупочные цены

  PriceAlg_NOUSE     = 10;     // АЛГОРИТМ не ИСПОЛЬЗОВАТЬ, он как НЕСУЩЕСТВУЮЩИЙ для 5-го алгоритма

// О ПЕРИОДИЧНОСТИ в типах цен
  TypePrice_Period_No   = 0;  // отсутствует
  TypePrice_Period_Date = 1;  // по датам
  TypePrice_Period_Yes  = 2;  // по периодам

// признак общих цен
  Switch_Common      = 0;    // общий ценник внутри данного типа цен
  Switch_CommonNo    = 1;    // не общий ценник
  Switch_CommonTotal = 2;    // общий ценник для всех типов цен

// признак общих цен
  NameSwitch_Common      = 'для текущего типа цен'; // общий ценник внутри данного типа цен
  NameSwitch_CommonNo    = 'нет';                   // не общий ценник
  NameSwitch_CommonTotal = 'для всех типов цен';    // общий ценник для всех типов цен

// Виды смет
  cgVidSmet_Main    = 0;     // основные затраты
  cgVidSmet_Nakl    = 1;     // накладные расходы
  cgVidSmet_Stock   = 2;     // запасы ресурсов
  cgVidSmet_Sale    = 3;     // реализация
  cgVidSmet_Other   = 4;     // прочие
  cgVidSmet_Prodaj  = 5;     // продаж (так как Sale уже использовано, то в латинице)

// Для настроек выгрузки в сметы
  cgSpace_Recive_Vx  = 0;     // входящее сальдо
  cgSpace_Recive_In  = 1;     // затраты за период
  cgSpace_Recive_Out = 2;     // списано

  NameSpace_Recive_Vx   = 'входящее сальдо';
  NameSpace_Recive_In   = 'затраты за период';
  NameSpace_Recive_Out  = 'списано';
  NameSpace_Recive_Out2 = 'списано(выручка)';

  cgVidSmet_Stock_Original          = 39;     // запасы ресурсов ПЕРВИЧНЫЕ

! для объекта UniCalc - в случае источника "протокол калькулирования"
! Stock - Бзп
  cgVidSmet_UniStock_EX_OPERATE_In  = 40;  // Приход
  cgVidSmet_UniStock_EX_OPERATE_Out = 71;  // Передача
  cgVidSmet_UniStock_PROD_OPERATE   = 41;  // Произведено-фиктивная
  cgVidSmet_UniStock_NoCalcul_PROD  = 43;  // Произведено-фиктивная на некалькулируемый ПВ
  cgVidSmet_UniStock_POTR_OPERATE   = 72;  // Переработка-фиктивная
  cgVidSmet_UniStock_SHIP_OPERATE   = 73;  // Отгрузка
  cgVidSmet_UniStock_SALE_OPERATE   = 74;  // Реализация
  cgVidSmet_UniStock_SALEPr_OPERATE = 78;  // Реализация со склада
  cgVidSmet_UniStock_LOST_OPERATE   = 75;  // Потери
  cgVidSmet_UniStock_RETURN_OPERATE        = 79;  // Возврат запасов
  cgVidSmet_UniStock_RET_OPERATE_SALE_Only = 80;  // Возврат реализации

! Sale - Брлз
  cgVidSmet_UniSale_SHIP_OPERATE    = 42;  // Отгрузка
  cgVidSmet_UniSale_SALE_OPERATE    = 76;  // Реализация
  cgVidSmet_UniSale_LOST_OPERATE    = 77;  // Потери
  cgVidSmet_UniStock_RET_OPERATE_SHIP        = 81;  // Возврат отгрузки
  cgVidSmet_UniStock_RET_OPERATE_SALE_InShip = 82;  // Возврат в отгрузку

  cgVidSmet_UniStock_PROD_OPERATE_Compon = 44;  // "-" Произведено для компонент

  cgVidSmet_Uni_Zero                     = 0;  // для идентификации параметра

// служ. наименование для Excel-отчета
  cgName_Stock_EX_OPERATE_In  = 'Поступление';
  cgName_Stock_EX_OPERATE_Out = 'Передача';
  cgName_Stock_PROD_OPERATE   = 'Произведено';
  cgName_Stock_NoCalcul_PROD  = 'Некалькулируемые продукты';
  cgName_Stock_PROD_Compon    = 'Произведено_компонент';
  cgName_Stock_POTR_OPERATE   = 'Переработка';
  cgName_Stock_SHIP_OPERATE   = 'Отгрузка';
  cgName_Stock_SALE_OPERATE   = 'Реализация';
  cgName_Stock_SALEPr_OPERATE = 'Реализация_со_склада';
  cgName_Stock_LOST_OPERATE   = 'Потери';
  cgName_Stock_RETURN_OPERATE        = 'Возврат_запасов';
  cgName_Stock_RET_OPERATE_SALE_Only = 'Возврат_реализации';
! Sale - Брлз
  cgName_Sale_SHIP_OPERATE    = 'Поступление_отгрузки';
  cgName_Sale_SALE_OPERATE    = 'Реализация_отгрузки';
  cgName_Sale_LOST_OPERATE    = 'Потери_отгрузки';
  cgName_Sale_RET_OPERATE_SHIP        = 'Возврат_отгрузки';
  cgName_Sale_RET_OPERATE_SALE_InShip = 'Возврат_в_отгрузку';

// Суммы смет
  cgField_BegSum    = 0;     // входящее сальдо
  cgField_PotrSum   = 1;     // потреблено
  cgField_SpisSum   = 2;     // списано
  cgField_EndSum    = 3;     // исходящее сальдо
  cgField_AllSum    = 7;     // все суммы

  NameField_PotrSum = 'начислено';
  NameField_SpisSum = 'списано';

// Признак агрегации затрат в объекте UniCalc
  cgPrzAgreg_No     = 0;     // не требуется агрегация по статьям затрат
  cgPrzAgreg_Yes    = 1;     // требуется агрегация по статьям затрат

// Признак переменных / постоянных затрат
  cgPrzVar          = 0;     // переменные
  cgPrzCon          = 1;     // постоянные
  cgPrzAll          = 7;     // постоянные + переменные

// Признак включаемых / невключаемых в себест. затрат
  cgInclCost        = 0;     // включаемые
  cgNoInclCost      = 1;     // невключаемые
  cgAllCost         = 2;     // ВСЕ

  cgNameInclCost    = 'включаемые';
  cgNameNoInclCost  = 'исключаемые';
  cgNameAllCost     = 'все';

// признаки сумм затрат смет
  cgPrzDopZ_Main  = 0;  // затраты сметы
  cgPrzDopZ_Migr  = 1;  // движение затрат сметы
  cgPrzDopZ_Dooc  = 3;  // дооценка прошлых затрат

// признаки агрегации сумм затрат сметы
  cgPrzAgr_No     = 0;  // базовые суммы затрат
  cgPrzAgr_Yes    = 1;  // агрегированные суммы затрат (СтБ или Б)

// признаки первичности/вторичности/не_затрат для сумм смет
  cgPrimary_Yes       = 0;      // первичные
  cgSecond_Yes        = 1;      // вторичные
  cgPrimary_Second_No = 65534;  // не_затраты

  NamePrimary_Yes       = 'первичные';
  NameSecond_Yes        = 'вторичные';
  NamePrimary_Second_No = 'не затраты';

  Name_NoAlgoritm       = '<Расчет калькуляций без алгоритма>';

// варианты операций схемы распределений
  VariantOper_Pb   = 1;  // согласно ПБ
  VariantOper_Tune = 2;  // распределение
  VariantOper_Rate = 3;  // начисление
  VariantOper_Algor= 4;  // по специальному алгоритму
  VariantOper_OpPB = 5;  // согласно движению ресурсов баланса

//специальный алгоритм
  SpecAlg_VovlProd  =  0;  //вовлекаемая продукция
  SpecAlg_ComponPF  = 10;  //компоненты внутреннего использования
  SpecAlg_LovuProd  = 20;  //ловушечные продукты
  SpecAlg_MoveZatr  = 30;  //перенос затрат
  SpecAlg_RaspProd  = 40;  //распределение с объектов учета на продукты
  SpecAlg_CalcPrice = 50;  //расчет цен поступления сырья
  SpecAlg_RateWaste = 60;  //начисление на попутные продукты
  SpecAlg_AverPrice = 70;  //усреднение цен по складам и разрезам

!  cnst_InitPervBtor = ; //для отладки первичных вторичных затрат
  cnst_InitPervBtor = true; // False - для отключения отладки первичных вторичных затрат
  cnst_Old_New_MRS  = FALSE; // True - старый вариант обработки МРС
  cnst_WriteTimIter = true; //для профилировки распределений

//признаки параметров в операции калькулирования
  OpSxema_Send     =  1;  //поставщик затрат
  OpSxema_Recive   =  2;  //приемник затрат
  OpSxema_PodrSxem =  3;  //аналитика ресурсов поставщика для подразделения во 2-й панели
  OpSxema_PodrBRIN =  4;  // подразделения БРИН в панели поставщика
  MVZ_ReciveBRIN   =  5;  // подразделения БРИН в нижней панели для приемников

// признаки поставщиков-приемников затрат
  PrzAvto_Tune       = 0;  // автонастройка
  PrzBudjet_Smet     = 1;  // смета
  PrzBudjet_ShabSmet = 2;  // шаблон сметы
  PrzBudjet_Budjet   = 3;  // смета периода

// признаки статей поставщиков-приемников затрат
  PrzStat_StZatr       = 0;  // статья затрат
  PrzStat_Shab_or_Budj = 1;  // статья шаблона или сметы

// Варианты настроек SpSxemOp.wNastr
  Tune_SpSxemOp    = 1;  // спецификация PodrSxem (настройки для подразделений-поставщиков операции )
  Tune_TXOSxemaRas = 2;  // спецификация SxemaRas (уточняющие настройки для ТХО по операции схемы)

// признаки лимита распределяемых затрат
  PrzLimit_Summa   = 1;  // суммой
  PrzLimit_Procent = 2;  // процентом

//признаки ставок начисления
  VidRate_Procent  =  0;  //процент
  VidRate_Stavka   =  1;  //ставка начисления

//признаки БРН
  BRN_Calculate  =  0;  //вычисляемая БР
  BRN_User       =  1;  //пользовательская БР (ПБРН)

 //Принцип распределения/начисления для пользовательских БР (ПБРН)
  SostBaz_Prop   =  0;  // пропорция
  SostBaz_Price  =  1;  // цена

//признаки ЕИ ПБРН
  PrzEI_BRN_Volume =  0;  //объемная ЕИ
  PrzEI_BRN_Valut  =  1;  //валюта
  PrzEI_BRN_Time   =  2;  //время

// варианты расчета статей калькуляций при оценке
  PrzCalcOcOBj_Norm    = 0;  // по нормам
  PrzCalcOcOBj_Nac     = 1;  // способом начисления
  PrzCalcOcOBj_Otn     = 2;  // относительным способом

// коды знаков для PrzCalcOcOBj_Otn
  ValueOCK_PLUS        = 43; // + для Char
  ValueOCK_MINUS       = 45; // - для Char
  ValueOCK_MULT        = 42; // * для Char
  ValueOCK_DIV         = 47; // / для Char

  ValueOCK_DIV_Znam    = 48; // / знаменатель

// признаки калькуляций
  PrzCalc_Pred  = 0;  // предопределенные
  PrzCalc_Full  = 1;  // произвольные

// Вычисляемые базы распределения
  cgBazR_Wages      = 1;     // основная ЗП
  cgBazR_Material   = 2;     // прямые матзатраты
  cgBazR_Direct     = 3;     // прямые затраты в целом
  cgBazR_Indust     = 4;     // производственная себестоимость
  cgBazR_Complet    = 5;     // полная себестоимость
  cgBazR_Sale       = 6;     // цена реализации
  cgBazR_Marginal   = 7;     // маржинальный доход
  cgBazR_TimeWork   = 8;     // время работы персонала
  cgBazR_TimeEquip  = 9;     // время работы оборудования
  cgBazR_Volume     = 10;    // объем выпуска
  cgBazR_VolMC      = 11;    // объем в материалах
  cgBazR_Volume_NZP = 12;    // объем выпуска + оценочный выпуск в НЗП
  cgBazR_Vol_One_NZP   = 13; // объем выпуска + оценочный выпуск в НЗП СООТВЕТСВУЮЩЕЙ продукции

  cgBazCalc_Alg_None   = 0;    // алгоритм вычисления 'спецрасчет'
  cgBazCalc_Alg_Balans = 1;    // алгоритм вычисления "количеств. Дв.рес.в балансе"
  cgBazCalc_Alg_Budjet = 2;    // алгоритм вычисления "суммы в сметах"
  cgBazCalc_Alg_StZatr = 3;    // алгоритм вычисления "перечень статей"
  cgBazCalc_Alg_VolMC  = 4;    // алгоритм вычисления "расходы ресурсов на объекты учета"

  cgBazCalc_Alg_Balans_ProdCom  =   1;    // пропорционально выпуску
  cgBazCalc_Alg_Balans_BegSaldo =   2;    // пропорционально входящему сальдо
  cgBazCalc_Alg_Balans_InCom    =   4;    // пропорционально поступило
  cgBazCalc_Alg_Balans_PotrCom  =   8;    // пропорционально переработано
  cgBazCalc_Alg_Balans_SentCom  =  16;    // пропорционально передано
  cgBazCalc_Alg_Balans_ShipCom  =  32;    // пропорционально отгружено
  cgBazCalc_Alg_Balans_SaleCom  =  64;    // пропорционально реализоаано со склада
  cgBazCalc_Alg_Balans_LostMov  = 128;    // пропорционально потеряно при хранении
  cgBazCalc_Alg_Balans_EndSaldo = 256;    // пропорционально исходящему сальдо
  cgBazCalc_Alg_Balans_BegShip  = 512;    // пропорционально начальному остатку отгруженного
  cgBazCalc_Alg_Balans_SaleShip = 1024;   // пропорционально реализовано из отгруженного
  cgBazCalc_Alg_Balans_LostShip = 2048;   // пропорционально потери из отгруженного
  cgBazCalc_Alg_Balans_EndShip  = 4096;   // пропорционально конечному остатку отгруженного

  cgBazCalc_Alg_Budjet_Vxod = 1;    // пропорционально входящему сальдо
  cgBazCalc_Alg_Budjet_Potr = 2;    // пропорционально приходу
  cgBazCalc_Alg_Budjet_Spis = 4;    // пропорционально списанию
  cgBazCalc_Alg_Budjet_Isxd = 8;    // пропорционально исходящему сальдо

  cgBazCalc_Alg_Coming = 1;    // на приход
  cgBazCalc_Alg_MadeIn = 2;    // на произведено

  NameBazCalc_Alg_None   = 'спецрасчет';
  NameBazCalc_Alg_Balans = 'движение ресурсов в балансе';
  NameBazCalc_Alg_Budjet = 'суммы в сметах';
  NameBazCalc_Alg_StZatr = 'перечень статей';
  NameBazCalc_Alg_VolMC  = 'расходы ресурсов на объекты учета';

// Код отчета в RepHead
  Prz_Svod_PO       = 0;  // ПO
  Prz_Svod_SvPO     = 1;  // сводный ПO
  Prz_Svod_Bal      = 2;  // произв. баланс
  Prz_Svod_Imp      = 3;  // импорт. произв. отчет (ТВЭЛ)
  Prz_Svod_ZZSum    = 4;  // Заявки на затраты
  Prz_Svod_RZSum    = 5;  // Распределение затрат
  Prz_Svod_RRes     = 6;  // Распределение ресурсов
  Prz_Svod_ResPrice = 7;  // источники цен реализации для текущего ResPrice
  Prz_Svod_Diagnoz  = 8;  // диагностика операций калькулирования
  Prz_Svod_BuildPD  = 9;  // формирования первичных документов
  Prz_Svod_CheckPD  =10;  // корретировки первичных документов
  Prz_Svod_Alg5     =11;  // сохранение разузловки

//  Визуализация ресурсов в ПО, ПБ с wkau < данного значения
  PrzWres_Visual    = 6;  // МЦ и Усл только

// диагностика операций калькулирования
// распределения
  cgDiagnoz_NotPrice           = 1;  // не обнаружена цена
  cgDiagnoz_SostBaz            = 2;  // не обнаружен показатель БР
  cgDiagnoz_ZeroPokazN         = 3;  // нулевой плановый показатель     ВНИМАНИЕ!! порядок этого и  ниже не МЕНЯТЬ
  cgDiagnoz_ZeroPokazF         = 4;  // нулевой фактический показатель
  cgDiagnoz_SaldoLessSum       = 5;  // сумма к списанию превышает сумму исходящего сальдо
  cgDiagnoz_NoBazDist          = 6;  // отсутствует пользовательская база распределения
  cgDiagnoz_BazDistPusto       = 7;  // отсутствуют данные в пользовательской базе
  cgDiagnoz_PriceTuneLess      = 8;  // по ценовому принципу распределения в смете поставщике недостаточно

// начисления
  cgDiagnoz_RateNoSum          = 11; // в смете поставщике отсутствует сумма для списания
  cgDiagnoz_RateSmallSum       = 12; // в смете поставщике недостаточно + сумма (RepLink.Sum)
  cgDiagnoz_RateNoValut        = 13; // в базе начисления некорректно задана валюта
  cgDiagnoz_RateNoProcent      = 14; // использование СН с видом "процент" не допускается для количественных данных
  cgDiagnoz_ZeroRate           = 15; // нулевая СН
  cgDiagnoz_RateLPPrice        = 16; // отсутствует цена сырья по подразделению(RepLink.cRepSale)
  cgDiagnoz_RateLPVolume       = 17; // в ПБ отсутствует объем выпуска ловушечных продуктов
  cgDiagnoz_RateOnlyProcent    = 18; // в настройке операции должны быть заданы ставки начисления с видом "процент"';
  cgDiagnoz_RateNoPB           = 19; // в настройке операции не определен перечень продуктов, то есть не заданы ставки начисления

// ЛП
  cgDiagnoz_RateLPNoStZatr     = 21; // в настройке операции статья-приемник должна быть заданна явно
  cgDiagnoz_RateLPNoFoundPrice = 22; // не обнаружена или равна нулю средняя цена сырья
  cgDiagnoz_RateLPZeroCN       = 23; // задана нулевая ставка начисления

//компоненты
  cgDiagnoz_CompNoAddAnalit    = 30; // в смете затрат невозможно добавить аналитику в существующую группу аналитик (Sloj.nrec)
  cgDiagnoz_CompNoPB           = 31; // не обнаружен производственный баланс по сопоставимому продукту (KatMc.nrec)
  cgDiagnoz_CompNoPBNrec       = 32; // не обнаружен сопоставимый продукт с НРЕК записи =              (KatMc.nrec)
  cgDiagnoz_CompNoPB_EI        = 33; // не совпадают учетные ЕИ для сопоставимого продукта             (KatMc.nrec)
  cgDiagnoz_CompNoPBVolPrice   = 34; // не обнаружены объем выпуска и цены реализации соответствующих продуктов выпуска (ResPrice.Nrec)
  cgDiagnoz_CompNoPBPrice      = 35; // не обнаружены цены реализации для соответствующих продуктов выпуска             (ResPrice.Nrec)
  cgDiagnoz_CompNoPBVol        = 36; // не обнаружен выпуск соответствующих продуктов
  cgDiagnoz_CompNoPBAvPrice    = 37; // не обнаружена средняя цена продукции в классификаторе связи ПФ и ГП
  cgDiagnoz_CompNoGAForStStock = 38; // для статьи сметы запасов не задана группа аналитик                   (StBudjet.Nrec)
  cgDiagnoz_CompNoFormAnStock  = 39; // не сформированы значения аналитик для компоненты в смете запасов
  cgDiagnoz_CompNoGAForStMain  = 40; // для статьи сметы затрат не задана группа аналитик                    (StBudjet.Nrec)
  cgDiagnoz_CompNoFormAnMain   = 41; // не сформированы значения аналитик для компоненты в смете затрат
  cgDiagnoz_CompNoSummaMain    = 42; // не обнаружена сумма затрат в смете затрат по СЗ для компонентов
  cgDiagnoz_CompNoSummaStock   = 43; // не обнаружена сумма затрат в смете запасов для формирования стоимости компоненты
  cgDiagnoz_CompSmalSummaMain  = 44; // для формирования стоимости исходящих остатков в смете затрат недостаточно
  cgDiagnoz_CompSmalSummaPost  = 45; // для начисления в смете поставщике недостаточно
  cgDiagnoz_CompNulInCom       = 46; // в ПБ обнаружен нулевой входящий остаток и ненулевое входящее сальдо в смете запасов
  cgDiagnoz_CompNegInCom       = 47; // в ПБ обнаружен исходящий остаток МЕНЬШЕ НУЛЯ ?!
  cgDiagnoz_CompNoVariantPrice = 48; // не задан вариант цен в настройке спецалгоритма
  cgDiagnoz_CompSmalSummaStock = 49; // для уменьшения затрат в смете запасов недостаточно
  cgDiagnoz_CompNoSummaPost    = 50; // в смете затрат не обнаружены суммы затрат с аналитикой, заданной в поле АНАЛИТИКА
  cgDiagnoz_CompNoSummaReturn  = 51; // в смете затрат для "возврата" излишне списанных затрат не обнаружены суммы с заданной аналитикой
  cgDiagnoz_CompBPKNoVolume    = 52; // в ПБ обнаружен нулевой объем выпуска ВПК
  cgDiagnoz_CompBPKSpRateList  = 53; // отсутствует ставка начисления в спецификации заданной СН
  cgDiagnoz_CompBPKNoSostBaz   = 54; // не обнаружена в указанной базе распределения
  cgDiagnoz_CompCalcPBZero     = 55; // средневзвешенная себестоимость соответствующей продукции равна нулю
  cgDiagnoz_CompAvPricePBZero  = 56; // средняя цена продукции не обнаружена или равна нулю
  cgDiagnoz_CompNoCalcPB       = 57; // не рассчитана себестоимость продуктов выпуска
  cgDiagnoz_CompZeroSaldo      = 58; // обнаружено нулевое входящее сальдо в смете запасов
  cgDiagnoz_CompNoVK_VPK       = 59; // в классификаторе связей продукции и полуфабрикатов не обнаружено ни одной компоненты
  cgDiagnoz_CompNoAveragePrice = 60; // не обнаружены цены реализации для соответствующих продуктов выпуска             (ResPrice.Nrec)
  cgDiagnoz_CompNoStSmet       = 61; // необходимо в <настройке алгоритма> указать статьи сметы запасов
  cgDiagnoz_NegativeBegSaldo   = 62; // в ПБ обнаружен отрицательный входящий остаток ?!
  cgDiagnoz_NOKoefIzmPrice     = 63; // не обнаружен коэффициент изменения средней цены сырья
  cgDiagnoz_OU_ProdNoPrice     = 64; // не удалось найти значение цены в варианте цен
  cgDiagnoz_OU_ProdNoResPrice  = 65; // не удалось найти значение цены (не задан вариант цен для варианта калькулирования)
  cgDiagnoz_OU_ProdZeroPokaz   = 66; // обнаружено нулевое значение показателя
  cgDiagnoz_OU_ProdPBNoData    = 67; // отсутствуют данные в производственном балансе
  cgDiagnoz_OU_ProdNoSmetReciv = 68; // не задана смета-приемник по этому же подразделению для выкладки сумм

  Name_Diagnoz_NotPrice           = 'не обнаружена цена';
  Name_Diagnoz_SostBaz            = 'не обнаружен показатель БР';
  Name_Diagnoz_ZeroPokazN         = 'нулевой плановый показатель БР';
  Name_Diagnoz_ZeroPokazF         = 'нулевой фактический показатель БР';
  Name_Diagnoz_SaldoLessSum       = 'сумма к списанию превышает сумму исходящего сальдо';
  Name_Diagnoz_NoBazDist          = 'отсутствует пользовательская база распределения';
  Name_Diagnoz_BazDistPusto       = 'отсутствуют данные в пользовательской базе';
  Name_Diagnoz_PriceTuneLess      = 'по ценовому принципу распределения в смете поставщике недостаточно';

  Name_Diagnoz_RateNoSum          = 'в смете поставщике отсутствует сумма для списания';
  Name_Diagnoz_RateSmallSum       = 'в смете поставщике для списания не хвататет суммы =';
  Name_Diagnoz_RateNoValut        = 'в базе начисления некорректно задана валюта';
  Name_Diagnoz_RateNoProcent      = 'использование СН с видом "процент" не допускается для количественных данных';
  Name_Diagnoz_ZeroRate           = 'нулевая ставка начисления';
  Name_Diagnoz_RateLPPrice        = 'отсутствует цена сырья по подразделению';
  Name_Diagnoz_RateLPVolume       = 'в ПБ отсутствует объем выпуска ЛП';
  Name_Diagnoz_RateOnlyProcent    = 'в настройке операции должны быть заданы ставки начисления с видом "процент"';
  Name_Diagnoz_RateNoPB           = 'в настройке операции не определен перечень продуктов, то есть не заданы ставки начисления';

  Name_Diagnoz_RateLPNoStZatr     = 'в настройке операции статья-приемник должна быть заданна явно';
  Name_Diagnoz_RateLPNoFoundPrice = 'не обнаружена или равна нулю средняя цена сырья';
  Name_Diagnoz_RateLPZeroCN       = 'задана нулевая ставка начисления';

  Name_Diagnoz_CompNoAddAnalit    = 'в смете затрат невозможно добавить аналитику в существующую группу аналитик';
  Name_Diagnoz_CompNoPB           = 'не обнаружен производственный баланс по сопоставимому продукту';
  Name_Diagnoz_CompNoPBNrec       = 'не обнаружен сопоставимый продукт с НРЕК записи';
  Name_Diagnoz_CompNoPB_EI        = 'не совпадают учетные ЕИ для сопоставимого продукта';
  Name_Diagnoz_CompNoPBVolPrice   = 'не обнаружены объем выпуска и цены реализации соответствующих продуктов выпуска';
  Name_Diagnoz_CompNoPBPrice      = 'не обнаружены цены реализации для соответствующих продуктов выпуска';
  Name_Diagnoz_CompNoPBVol        = 'не обнаружен выпуск соответствующих продуктов';
  Name_Diagnoz_CompNoPBAvPrice    = 'не обнаружена средняя цена продукции в классификаторе связи ПФ и ГП';
  Name_Diagnoz_CompNoGAForStStock = 'для статьи сметы запасов не задана группа аналитик';
  Name_Diagnoz_CompFormAnStock    = 'не сформированы значения аналитик для компоненты в смете запасов';
  Name_Diagnoz_CompNoFormAnStock  = 'не сформированы значения аналитик для компоненты в смете запасов';
  Name_Diagnoz_CompNoGAForStMain  = 'для статьи сметы затрат не задана группа аналитик';
  Name_Diagnoz_CompNoFormAnMain   = 'не сформированы значения аналитик для компоненты в смете затрат';
  Name_Diagnoz_CompNoSummaMain    = 'не обнаружена сумма затрат в смете затрат по СЗ для компонентов';
  Name_Diagnoz_CompNoSummaStock   = 'не обнаружена сумма затрат в смете запасов для формирования стоимости компоненты';
  Name_Diagnoz_CompSmalSummaMain  = 'для формирования стоимости исходящих остатков в смете затрат недостаточно';
  Name_Diagnoz_CompSmalSummaPost  = 'для начисления в смете поставщике недостаточно';
  Name_Diagnoz_CompNulInCom       = 'в ПБ обнаружен нулевой входящий остаток и ненулевое входящее сальдо в смете запасов';
  Name_Diagnoz_CompNegInCom       = 'в ПБ обнаружен исходящий остаток МЕНЬШЕ НУЛЯ ?!';
  Name_Diagnoz_CompNoVariantPrice = 'не задан вариант цен в настройке спецалгоритма';
  Name_Diagnoz_CompSmalSummaStock = 'для уменьшения затрат в смете запасов недостаточно';
  Name_Diagnoz_CompNoSummaPost    = 'в смете затрат не обнаружены суммы затрат с аналитикой, заданной в поле АНАЛИТИКА';
  Name_Diagnoz_CompNoSummaReturn  = 'в смете затрат для "возврата" излишне списанных затрат не обнаружены суммы с заданной аналитикой';
  Name_Diagnoz_CompBPKNoVolume    = 'в ПБ обнаружен нулевой объем выпуска ВПК';
  Name_Diagnoz_CompBPKSpRateList  = 'отсутствует ставка начисления в спецификации заданной СН';
  Name_Diagnoz_CompBPKNoSostBaz   = 'не обнаружена в указанной базе распределения';
  Name_Diagnoz_CompCalcPBZero     = 'средневзвешенная себестоимость соответствующей продукции равна нулю';
  Name_Diagnoz_CompAvPricePBZero  = 'средняя цена продукции не обнаружена или равна нулю';
  Name_Diagnoz_CompNoCalcPB       = 'не рассчитана себестоимость продуктов выпуска';
  Name_Diagnoz_CompZeroSaldo      = 'обнаружено нулевое входящее сальдо в смете запасов';
  Name_Diagnoz_CompNoVK_VPK       = 'в классификаторе связей продукции и полуфабрикатов не обнаружено ни одной компоненты';
  Name_Diagnoz_CompNoAveragePrice = 'не обнаружена средняя цена сырья или же она равна нулю';
  Name_Diagnoz_CompNoStSmet       = 'необходимо в <настройке алгоритма> указать статьи сметы запасов';
  Name_Diagnoz_NegativeBegSaldo   = 'в ПБ обнаружен отрицательный входящий остаток ?!';
  Name_Diagnoz_NOKoefIzmPrice     = 'не обнаружен коэффициент изменения средней цены сырья';
  Name_Diagnoz_OU_ProdNoPrice     = 'не удалось найти значение цены в варианте цен';
  Name_Diagnoz_OU_ProdNoResPrice  = 'не удалось найти значение цены (не задан вариант цен для варианта калькулирования)';
  Name_Diagnoz_OU_ProdZeroPokaz   = 'обнаружено нулевое значение показателя';
  Name_Diagnoz_OU_ProdPBNoData    = 'отсутствуют данные в производственном балансе';
  Name_Diagnoz_OU_ProdNoSmetReciv = 'не задана смета-приемник по этому же подразделению для выкладки сумм';

// AnalSxem.wSendReceive
  wAgregAnal_CDR    = 9;   // агрегирующая аналитика для сумм-поставщиков в 3-й панели СДР
  wAnal_OU_PB_Waste = 10;  // аналитика для фильтрации ОУ в СА с ОУ на ПВ и начисление на продукты
  wAnalit_Compare   = 11;  // аналитика сопоставления сумм для ОУ для СА начисление на продукты
  wBazRaz_Amount    = 20;  // для количественных БР
  wBazRaz_Sum       = 21;  // для суммовых БР
  wTune_Txo_Send      = 22;  // настройки по формированию ТХО
  wTune_Txo_Recive    = 23;  // настройки по формированию ТХО
  wTune_TxoMVZ_Send   = 24;  // настройки по формированию ТХО для мн выбора МВЗ-поставщиков
  wTune_TxoMVZ_Recive = 25;  // настройки по формированию ТХО для мн выбора МВЗ-приемников

// Варианты калькулирования
  MainVar_SpBalans      = 1;  // Первоначальный вариант Original=1
  WorkVar_SpBalans      = 0;  // Рабочий вариант калькулирования Original=0
  MainAndWork_SpBalans  = 2;  // Все варианты одновременно

// Для ФЗ
  ALL_SCHET   = 'Все';
  NULL_SCHET  = '';
  ZERO_SCHET  = '00';

//Минимальное значение
! ContrMinSumma = 0.0000000000000001;  // для вссяческих расчетов и калькуляций
 ContrMinSumma = 0.00000001;  // для вссяческих расчетов и калькуляций
 ContrMinSumma_Report  = 0.001;  // для отчетов без аналогичных настроек
 ContrMinAmount_Report = 0.0001; // для отчетов без аналогичных настроек
 
 FictNorm_Spis   = 7777; // фиктивные нормы при списаниях на продукцию
 FantomNorm_Spis = 7778; // нормы списания на продукцию по фантомным МЦ (листы допустимых замен)

//разветвляющее значение для SpPFPerc
 dDate_ComponPF = date(29,2,2096);

// Варианты данных в SpAllCon
  cgAllCon_wBazTbl_SumBudj  = 1;  // Ссылка на SumBudj для распределений (только на время распределений)
  cgAllCon_wBazTbl_RepLink  = 2;  // Ссылка на RepLink для фиксированных сумм
  cgAllCon_wBazTbl_Factor   = 3;  // Ссылки на RepCost и SumBudj для факторных отклонений
// номера таблиц разных (coSpBalans, coKatProiz ...  в поле wBazTbl)

  cgAllCon_wContext_Null    = 0;  // no used for  wBazTbl
  cgAllCon_wContext_Compon  = 7;  // для компонент цена сырья и коэффициенты
  cgAllCon_wContext_Puty    = 8;  // для цен реализации - пути Юкоса
  cgAllCon_wContext_Filial  = 9;  // для цен реализации - филиалы Юкоса


// SpAllCon.wContext - для доп.параметров СФЗ
  cgAllCon_SpBill_AnResurs  = 0;  // аналитика ресурсов
  cgAllCon_SpBill_AnNaznach = 1;  // аналитика назначений
  cgAllCon_SpBill_PB        = 2;  // для перечня продукции
  cgAllCon_SpBill_Party     = 3;  // для перечня партий
  cgAllCon_SpBill_Recive    = 4;  // для перечня получателей продукции

  cgAllCon_wObj_Null        = 0;  // не используется для данного подмножества записей
  cgAllCon_wObj_RepLink     = 1;  // Ссылка на RepLink для распределений
  cgAllCon_wObj_RepCost     = 2;  // Ссылка на RepCost для распределений и для cgAllCon_wBazTbl_Factor
  cgAllCon_wObj_RepCostPr   = 3;  // Ссылка на RepCost произведено для распределений
  cgAllCon_wObj_Operate     = 4;  // Ссылка на Sxemaras
  cgAllCon_wObj_ChShip      = 5;  // Ссылка на RepHead, имеющий замену Отгрузки
  cgAllCon_wObj_DopZSum     = 6;  // Ссылка на SumBudj для затрат прошлых периодов

  cgAllCon_Iter_No           = 0;  // параметр простой агрегации сумм смет
  cgAllCon_Iter_Yes          = 1;  // параметр итерационной агрегации сумм смет
  cgAllCon_OpPB_New          = 2;  // новый вариант СДР
  cgAllCon_New_Record        = 4;  // новую запись порождать (отриц. исх. сальдо)
  cg_New_Record_For_DopZSum  = 8;  // новую запись порождать для ЗПП
  cg_New_Record_POTR_From_Incom  = 16;  // новую запись порождать для поступлений самому себе

// виды движения
  VidDv_PURSHASE  = 1;  // "Закупка"
  VidDv_In        = 2;  // "Приход в подразделение"
  VidDv_Potr      = 3;  // "Переработка ресурсов"
  VidDv_Spis      = 4;  // "Списание ресурсов на продукцию"
  VidDv_Prod      = 5;  // "Выпуск продукции"
  VidDv_LostProd  = 6;  // "Потери в производстве"
  VidDv_Lost      = 7;  // "Потери при хранении"
  VidDv_Send      = 8;  // "Передача в другое подразделение"
  VidDv_Ship      = 9;  // "Отгрузка продукции покупателям"
  VidDv_LostShip  = 10; // "Потери отгруженной продукции"

  VidDv_SaleProd  = 11; // "Отгрузка со склада + Реализация"
  VidDv_SaleShip  = 12; // "Реализация из отгруженного"
  VidDv_SaleOnly  = 16; // "Реализация со склада"

  VidDv_SaleMoney = 13; // "Выручка от реализации"
  VidDv_BxSld     = 14; // "Входящее сальдо"
  VidDv_Nakl      = 15; // "Реализация по накладным"

  VidDv_RETURN        = 17; // Возврат из запасов
  VidDv_RET_SHIP      = 18; // Возврат отгрузки
  VidDv_RET_SALE_Only = 19; // Возврат реализации со склада
  VidDv_SALE_InShip   = 20; // Возврат реализации в отгрузку

  VidDv_PereSortica   = 21; // "Процесс переработки"

////  поля таблиц баланса для видов движений и цен

  DvRec_Name       = 'Движение ресурсов';
  DvRec_Num        = 1;  // внутренний номер таблицы
  DvRec_Post       = 1;  // поступило
  DvRec_Post_Str   = 'Поступило';
  DvRec_Manuf      = 2;  // переработано
  DvRec_Manuf_Str  = 'Переработано';
  DvRec_Proizv     = 3;  // произведено
  DvRec_Proizv_Str = 'Произведено';
  DvRec_Sent       = 4;  // передано
  DvRec_Sent_Str   = 'Передано';
  DvRec_BxSld      = 8;  // входящее сальдо
  DvRec_BxSld_Str  = 'Входящее сальдо';

  VProd_Name       = 'Выпуск продуктов';
  VProd_Num        = 2;  // внутренний номер таблицы
  VProd_Proizv     = 3;  // произведено
  VProd_Proizv_Str = 'Произведено';

  RasxR_Name       = 'Расход ресурсов';
  RasxR_Num        = 3;  // внутренний номер таблицы
  RasxR_Manuf      = 2;  // переработано
  RasxR_Manuf_Str  = 'Переработано';
  RasxR_Spis       = 5;  // списано
  RasxR_Spis_Str   = 'Списано';

  OtgrR_Name       = 'Отгрузка, реализация';
  OtgrR_Num        = 4;  // внутренний номер таблицы
  OtgrR_Otgr       = 6;  // отгружено
  OtgrR_Otgr_Str   = 'Отгружено';
  OtgrR_Sale       = 7;  // реализовано
  OtgrR_Sale_Str   = 'Реализовано';
  OtgrR_BxSld      = 8;  // входящее сальдо
  OtgrR_BxSld_Str  = 'Входящее сальдо';
  OtgrR_SaleMoney  = 9;  // Выручка
  OtgrR_SaleMn_Str = 'Выручка';
  OtgrR_Nakl       = 10;  // По накладным
  OtgrR_Nakl_Str   = 'По накладным';

// варианты формирования в настройках выгрузки в ПБ
  VarintForm_No      = 0;  // не формировать
  VarintForm_Debet   = 1;  // дебет
  VarintForm_Kredit  = 2;  // кредит
  VarintForm_DebAnal = 3;  // дебетовая аналитика
  VarintForm_KrAnal  = 4;  // кредитовая аналитика
  VarintForm_Value   = 5;  // конкретное значение
  VarintForm_ActPer  = 6;  // номер акта на пересортицу
  VarintForm_DebAnalSyn = 13;  // дебетовая аналитика-синоним
  VarintForm_KrAnalSyn  = 14;  // кредитовая аналитика-синоним
  VarintForm_Default    = 15;  // 'По умолчанию' для ЭЗ, для СЗ = 0

  VarintForm_Saldo     = 1;  // сальдо
  VarintForm_SaldoAnal = 3;  // аналитика сальдо
  VarintForm_SaldoAnalSyn = 13;  // аналитика-синоним сальдо

  NameVarintForm_No      = 'Не формировать';
  NameVarintForm_Debet   = 'Дебет';
  NameVarintForm_Kredit  = 'Кредит';
  NameVarintForm_DebAnal = 'Аналитика дебетовая';
  NameVarintForm_KrAnal  = 'Аналитика кредитовая';
  NameVarintForm_Value   = 'Значение';
  NameVarintForm_ActPer  = 'Номер акта на пересортицу';
  NameVarintForm_DebAnalSyn = 'Аналитика-синоним дебетовая';
  NameVarintForm_KrAnalSyn  = 'Аналитика-синоним кредитовая';

  NameVarintCtRD_Default    = 'По умолчанию';

// варианты формирования в настройках выгрузки в СМЕТЫ
  cgVarintSmet_DebAnal   = 0; // Аналитика дебетовая
  cgVarintSmet_KrAnal    = 1; // Аналитика кредитовая
  cgVarintSmet_DebAnalKr = 2; // Аналитика дебетовая, при отсутствии кредитовая
  cgVarintSmet_KrAnalDeb = 3; // Аналитика дебетовая, при отсутствии кредитовая
  cgVarintSmet_Value     = 4; // Значение
  cgVarintSmet_Saldo     = 0; // аналитика сальдо
  
!  cgVarintSmet_PodrDeb    =  7;  // подразделение из дебета
!  cgVarintSmet_PodrKred   =  8;  // подразделение из кредита
  cgVarintSmet_COPodrDeb   =  9;  // ЦО подразделения из дебета
  cgVarintSmet_COPodrKred  = 10;  // ЦО подразделения из кредита
  cgVarintSmet_COSaldoPodr = 11;  // ЦО подразделения из сальдо

  NameVarintSmet_DebAnal   = 'Аналитика дебетовая';
  NameVarintSmet_KrAnal    = 'Аналитика кредитовая';
  NameVarintSmet_DebAnalKr = 'Аналитика дебетовая, при отсутствии кредитовая';
  NameVarintSmet_KrAnalDeb = 'Аналитика кредитовая, при отсутствии дебетовая';
  NameVarintSmet_Value     = 'Значение';

!  NameVarintSmet_PodrDeb    = 'Подразделение из дебета';
!  NameVarintSmet_PodrKred   = 'Подразделение из кредита';
  NameVarintSmet_COPodrDeb  = 'ЦО подразделения из дебета';
  NameVarintSmet_COPodrKred = 'ЦО подразделения из кредита';

  NameVarintForm_Saldo       = 'Сальдо';
  NameVarintForm_SaldoAnal   = 'Аналитика сальдо';
  NameVarintForm_SaldoAnalSyn  = 'Аналитика-синоним сальдо';

  NameVarintSmet_COSaldoPodr = 'ЦО подразделения из сальдо';

  SourceForm_PB_Prov       = 0;  // проводки
  SourceForm_PB_Sldo       = 1;  // сальдо


 // ТВЭЛ - импорт
  FormF1           = 1; //F1
  FormF2           = 2; //F2
  FormF3           = 3; //F3
  FormF4           = 4; //F4
  FormF5           = 5; //F5

  NumKol1          = 1; //Колонка 1
  NumKol2          = 2; //Колонка 2
  NumKol3          = 3; //Колонка 3
  NumKol4          = 4; //Колонка 4
  NumKol5          = 5; //Колонка 1
  NumKol6          = 6; //Колонка 6
  NumKol7          = 7; //Колонка 7
  NumKol8          = 8; //Колонка 8
  NumKol9          = 9; //Колонка 9

// признаки параметров в wWhat
  cgWhat_Izg      =  1;  // изготовитель
  cgWhat_Smet_Uni =  2;  // вид сумм cgVidSmet_Uni...
  cgWhat_StZtr    =  3;  // статьи затрат
  cgWhat_StZtrNo  =  4;  // исключаемые статьи затрат

 //Визуализация приемника
  AnalNaslPB      = 'Из баланса';
  AnalKonkr       = 'Конкретный объект';
  AnalNoOpred     = 'Объект не определен';
  AnalNaslBudj    = 'Наследование';
  AnalNaslSum_BR  = 'Из базы';
  
  cnstAnalSendAll    = 0; //любые объекты поставщики
  cnstAnalNaslPB     = 0; //'Из баланса'

  cnstAnalKonkr      = 1; //Конкретный объект
  cnstNoOpred        = 2; //Объект не определен

  cnstSendAllNoNull  = 3; //Любые определенные объекты
  cnstAnalNaslBudj   = 3; //'Наследование'

  cnstAnalNaslSum_BR = 4; //Из базы - динамически
  
  cnstStat_Nasl      = 0;              //'Наследование статьи сметы'
  NameStat_Nasl      = 'Наследование';
  
  cnstStat_FromPB    = 5;              // Из назначения операции передачи
  NameStat_FromPB    = 'Из баланса';

  cnstPluralAnal     = 100; // до 100 вариантов (coTable реально)

  pluralname         = '>мн.выбор\'; // визуализация для аналитик БР

  cnRecive_Equivalent    = 6;        // Совпадающие с поставщиком
  NameRecive_Equivalent  = 'Совпадающие с поставщиком';

  cgResurs_Oper_Link = 1; // миграция затрат по причине операции движения
  cgResurs_Oper_Cost = 2; // миграция затрат по причине переработки-списания
  cgResurs_Spec_OUPB = 3; // миграция затрат по операции распределения с ОУ на ПВ
  cgResurs_Rate      = 4; // миграция затрат по операции начисления
  cgResurs_Tune      = 5; // миграция затрат по операции распределения
  cgResurs_Move      = 6; // миграция затрат по операции перенос
  cgResurs_CostRZS   = 7; // миграция затрат по "Распределению затрат"
  cgResurs_CalcBudj  = 8; // миграция затрат по расчету смет
  cgResurs_MinRaspSum = 9; // перенос нераспределенных сумм

  cgNameResurs_CostRZS    = 'Распределение суммовых затрат';
  cgNameResurs_CalcBudj   = 'Расчет первоначальных смет';
  cgNameResurs_MinRaspSum = '<<Служебная итерация>> ';  // префикс наименования операции схемы ВАРИАНТ 2='<<Технический перенос>> '
  

  cgTune_Include     = 0; // включая (прямого действия)    Настройки корреспонденций
  cgTune_Exclude     = 1; // исключая (обратного действия)

  cgContext_Deb      = 0; // множественная выборка для дебета
  cgContext_Kred     = 1; // множественная выборка для кредита

  wPrzBill_Balans       = 0; // баланс
  wPrzBill_Budjet       = 1; // сметы
  wPrzBill_Oborot       = 2; // формирование проводок
  wPrzBill_ReportANPZ   = 3; // настройки для ведомости затрат (настраиваемой по колонкам)
  wPrzBill_LinkKatMC    = 4; // связи производимых и реализуемых МЦ
  wPrzBill_GroupMBZ     = 5; // группы МВЗ
  wPrzBill_ExlusivePodr = 6; // перечень исключаемых МВЗ
  wPrzBill_IncludePodr  = 7; // перечень МВЗ-новичков
  wPrzBill_BuildPD      = 8; // настройка формирования первичных документов
  wPrzBill_CheckPD      = 9; // настройка корректировки первичных документов

  wPrzBill_StructCalc   = 10; // настройки структур калькуляций
  wPrzBill_CalcPF       = 11; // настройки параметров калькуляций по ПФ
  wPrzBill_CalcNOPF     = 12; // настройки параметров калькуляций безПФ

  wPrzBill_StructSmeta  = 15; // настройки структур смет на производство
  wPrzBill_Smeta        = 13; // настройки параметров смет на производство

  wPrzBill_StructFactor = 16; // настройки структур факторный анализ
  wPrzBill_Factor       = 14; // настройки параметров факторный анализ

  wReferens_In        = 0;   // входящий ПД
  wReferens_InModif   = 1;   // входящий ПД, но скорректирвана сумма
  wReferens_Out       = 2;   // исходящий ПД
  wReferens_AktZamen  = 66;  // информация об актах замен

  wOperate_Average    = 0;   // цена усредненная по всем источникам
  wOperate_KatSopr    = 1;   // источник цен из накладной на отпуск
  wOperate_Excel      = 2;   // источник цен из Excel
  wOperate_Manual     = 3;   // источник цен введенный вручную
  wOperate_Filial     = 4;   // источники цен рассчитанные по филиалам

  Operate_KatSoprName = 'Н'; // сокращение источника цен из накладной на отпуск
  Operate_ExcelName   = 'Э'; // сокращение источника цен из Excel
  Operate_ManualName  = 'Р'; // сокращение источника цен введенного вручную
  Operate_FilialName  = 'Ф'; // сокращение источника цен рассчитанных по филиалам

  VariantAlgor_BK      = 0;
  NameVariantAlgor_BK  = 'компоненты внутреннего использования';
  VariantAlgor_BPK     = 1;
  NameVariantAlgor_BPK = 'внутрипроизводственные компоненты';

  VidStrCalc_StZatr     = 0;
  VidStrCalc_NzpBeg     = 1;
  VidStrCalc_NzpEnd     = 2;
  VidStrCalc_Group      = 3;
  VidStrCalc_Coment     = 4;

  NameVidStrCalc_StZatr = 'статья затрат периода';
  NameVidStrCalc_NzpBeg = 'статья НЗП на начало';
  NameVidStrCalc_NzpEnd = 'статья НЗП на конец';
  NameVidStrCalc_Group  = 'групповая строка';
  NameVidStrCalc_Coment = 'комментарий';

  VidStrSmeta_StZatr     = 0;
  VidStrSmeta_NzpBeg     = 1;
  VidStrSmeta_NzpEnd     = 2;
  VidStrSmeta_Group      = 3;
  VidStrSmeta_Coment     = 4;
  VidStrSmeta_Itogo      = 5;

  NameVidStrSmeta_Zatr   = 'затраты периода';
  NameVidStrSmeta_NzpBeg = 'НЗП на начало';
  NameVidStrSmeta_NzpEnd = 'НЗП на конец';
  NameVidStrSmeta_Group  = 'групповая строка';
  NameVidStrSmeta_Coment = 'комментарий';
  NameVidStrSmeta_Itogo  = 'итоговые затраты';

  VidVolume_All         = 0;
  VidVolume_Tov         = 1;
  VidVolume_Rasx        = 2;

  NameVidVolume_All     = 'валовый выпуск';
  NameVidVolume_Tov     = 'товарный выпуск';
  NameVidVolume_Rasx    = 'внутренний расход';

  Sxema_RaspPF          = 0; // попередельная
  Sxema_RaspNOPF        = 1; // бесполуфабрикатная

  NameSxema_RaspPF      = 'полуфабрикатный';
  NameSxema_RaspNOPF    = 'бесполуфабрикатный';

  cgRepHSopr_Act        = 1;   // акты списания сформированы
  cgRepHSopr_SpisOU     = 100; // фиксация списаний с ОУ на ПВ

  cgVidEI_Proizv        = 0;   // Производственная
  cgVidEI_ActOtp        = 1;   // Активная отпускная
  cgVidEI_Uchetn        = 2;   // Учетная

  NameVidEI_Proizv      = 'Производственная';
  NameVidEI_ActOtp      = 'Активная отпускная';
  NameVidEI_Uchetn      = 'Учетная';

  cgNatur_NoFormir      = 0;   // не формировать расходы
  cgNatur_UchetEI       = 1;   // формировать расходы на учетную ЕИ
  cgNatur_FromPBEI      = 2;   // формировать расходы на ЕИ из ПБ
  cgNatur_NominalEI     = 3;   // формировать расходы на номинальную ЕИ (значение)
  cgNatur_SentLevel     = 4;   // передача ПФ без НЗП
  cgNatur_Waste         = 5;   // отходы
  cgNatur_Rasx          = 6;   // внутренний расход=исключения

  NameNatur_NoFormir    = 'нет';
  NameNatur_UchetEI     = 'на учетную ЕИ';
  NameNatur_FromPBEI    = 'на ЕИ из ПБ';
  NameNatur_NominalEI   = 'значение';
  NameNatur_SentLevel   = 'передано';
  NameNatur_Waste       = 'отходы';
  NameNatur_Rasx        = 'исключения';

  Smeta_StZatr          = 1; // параметры сметы по СЗ
  Smeta_KaElem          = 2; // параметры сметы по ЭЗ

  NameSmeta_StZatr      = 'по статьям';
  NameSmeta_KaElem      = 'по элементам';

  cgUseTune_VolAll      = 0;   // для всех объемов (на продукт и общий)
  cgUseTune_VolPB       = 1;   // только на продукт
  cgUseTune_VolTotal    = 2;   // только в общий

  NameUseTune_VolAll    = ' ';                 // для всех объемов (на продукт и общий)
  NameUseTune_VolPB     = 'только на продукт'; // только на продукт
  NameUseTune_VolTotal  = 'только в общий';    // только в общий

  Err_Edi               = 0;
  Err_notFoundSpec      = 1; // Не обнаружена производственная спецификация для ресурса
  Err_notManySpec       = 2; // обнаружено более одной ПС с ВИ, а активной нету
  Err_Cikl              = 3; // обнаружено зацикливание
  Err_EdiRasx           = 4; // в количественных расходах строк каклькуляционных

  Err_notFoundMK        = 11; // Не обнаружена МК для ресурса
  Err_notManyMK         = 12; // обнаружено более МК с ВИ, а активной нету


  TextErr_notFoundSpec  = 'Не обнаружена производственная спецификация для ресурса';
  TextErr_notManySpec   = 'Обнаружено более одной производственной спецификации для ресурса';
  TextErr_Cikl          = 'Обнаружено зацикливание';

  TextErr_notFoundMK    = 'Не обнаружена маршрутная карта для ресурса';
  TextErr_notManyMK     = 'Обнаружено более одной маршрутной карты для ресурса';

// признаки для оценочных калькуляций
  PrzVariant_Rate       = 1;  // способом начисления
  PrzVariant_Relat      = 2;  // относительная ставка

  PrzPokazat_Summa      = 1;  // сумма
  PrzPokazat_Percent    = 2;  // процент

// варианты формирования в настройках формирования из ПД
  VarintFormPD_No      = 0;  // не формировать
  VarintFormPD_RepMove = 1;  // из позиции ресурса
  VarintFormPD_VAttrib = 2;  // внешнего атрибута
  VarintFormPD_Nazn    = 3;  // назначения в ПД
  VarintFormPD_Value   = 5;  // конкретное значение

  NameVarintFormPD_No      = 'Не формировать';
  NameVarintFormPD_RepMove = 'Из позиции ресурса';
  NameVarintFormPD_VAttrib = 'Из внешнего атрибута';
  NameVarintFormPD_Nazn    = 'Из назначения';
  NameVarintFormPD_Value   = 'Значение';

  // в формировании ПО и ПБ по ПД признак рассмотрения подразделения из документа
  Prz_Into                = 0; // приходное подразделение
  Prz_From                = 1; // расходное подразделение

  //  порядковые номера обработки видов ПД
  wSeq_0101               = 0101;
  wSeq_0111               = 0111;

  wSeq_0201               = 4201;
  wSeq_0211               = 4211;

  wSeq_0502               = 2502;
  wSeq_0505               = 2505;
  wSeq_0508               = 2508;
  wSeq_0501               = 2521;
  wSeq_0503               = 2523;
  wSeq_0504               = 2524;
  wSeq_0506               = 2526;
  wSeq_0507               = 2527;
  wSeq_0613               = 2522;  // после НОС

  wSeq_0204               = 1204;
  wSeq_0600               = 1600;
  wSeq_0611               = 1611;
  wSeq_0612               = 1612;
  wSeq_0630               = 1630;

  wSeq_0553               = 3553;

  wWhat_OU_No             = 0;    // No
  wWhat_OU_MnPlan         = 1;    // MnPlan
  wWhat_OU_SpMnPl         = 2;    // SpMnPl

// блок констант йункциональности по корректировке-формированию ПД на основании ПБ 
  lcMCReadPBTable_AllOperation = 65535; // признак всех операций производственного баланса
  lc_CreatePDPodr_PPB = 0;  // Подразделение баланса
  lc_CreatePDPodr_POP = 1;  // Подразделение получатель
  lc_CreatePDPodr_APB = 2;  // Аналитика ресурсов баланса
  lc_CreatePDPodr_AOP = 3;  // Аналитика ресурсов назначения
  lc_CreatePDPodr_DEF = 4;  // Значение
  lc_CreatePDPodr_PEA = 5;  // Внешний атрибут подразделения баланса
  lc_CreatePDPodr_DEA = 6;  // Внешний атрибут подразделения баланса

  lc_CreatePDKOrg_AOP = 0;  // Аналитики ресурсов назначения
  lc_CreatePDKOrg_DEF = 1;  // Значение
