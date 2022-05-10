//------------------------------------------------------------------------------
// !!!ВНИМАНИЕ!!! Этот файл разбранчен с 5.8x
// Если делаете здесь изменения, не забывайте править и там
//                               (если надо конечно :)
//------------------------------------------------------------------------------

// Предопределенные системные типы для статей затрат в строительстве.
  cgStZatr_SMR     = 0; // Строительно-мотнажные работы.
  cgStZatr_Oborud  = 1; // Оборудование.
  cgStZatr_PIR     = 2; // Проектно-изыскательские работы.
  cgStZatr_Prochie = 3; // Прочие затраты.

// Версия для автообновления KatKau
  verKauTable      = 720;
//------------------------------------------------------------------------------

// константы инициализации объектов (побитно)
//  cgInit_Kau       = 1;
  cgInit_Hash      = 2;
  cgInit_TXO       = 4;
  cgInit_FPP       = 8;
  cgInit_FPR       = 16;

// константы первого и последнего номеров КАУ
  cFirstKAU        = 1;
  cLastKAU         = 6;

  cgMaxKauFP       = 5;

// константы значений КАУ
  cKauNRecForOthers = 1;     // прочие               comp(1)
  cKauNRecNotDefine = 0;     // не определено        comp(0)

  SetDefKau         = 0;     // Кау по умолчанию - была константа в Паскале
  SetDefKodeKau     = 0;     // Кау по умолчанию - была функция в Паскале

// константы для функции GetAnyKau параметр wMode ( хотелось бы перевести на битовую маску, но так уже сложилось)
  cgAkSimple          = 0;  // просто высветит наименование
  cgAkOther           = 1;  // cKauNRecForOthers заменит на "прочие"
  cgAkOtherOrNoDef    = 2;  // и "прочие" и "не определено"
  cgAkNoDef           = 3;  // cKauNRecNotDefine заменит на "не определено"

// константы для функции GivenAnName
// см. также Tip&Stat\KauTable.xls
  cgAnName   = 1; // Наименование КАУ
  cgAnStrKod = 2; // системные String(NRec), ручные SpKau.Code
  cgAnStrKey = 3; // ключ для сортировки в отчетах, определяется по настройкам (StrName+StrKod) (StrKod+StrName)
  cgAnNode   = 4; // строковое представление cNode (вышестоящего элемента)
  cgAnAbbr   = 5; // уникальный строковый ID для использования в формулах (!!!не изменяется!!!)
  cgAnCode   = 6; // код, как правило для сортировки в каталогах; может меняться, может быть неуникальным
  cgAnSort   = 7; // строка для сортировки, но НЕ для группировки

// Виды КАУ (KatKau.SysNum)
  cgKatKau_Table    = 0;      // системные
  cgKatKau_User     = 1;      // пользовательские
  cgKatKau_Set      = 2;      // наборы
  cgKatKau_Enum     = 3;      // обобщенные
  cgKatKau_Interval = 4;      // интервалы
  cgKatKau_Synonym  = 5;      // синонимы /Пока нигде не реализовано 09.10.2003 Gera/
  cgKatKau_System   = 100;    // системные каталоги не являющиеся аналитикой
  cgKatKau_Trash    = 200;    // некорректные аналитики
  cgKatKau_Error    = 65000;  // ошибка для функций GetSysNum и GetKauSysNum

// Битовый набор закладок интерфейса GetKauTable, которые нужно спрятать
  cgKatKau_BuhDisabled = 28; // = 4 or 8 or 16         // Аналитики в БухКонтуре
  cgKatKau_SynDisabled = 32;                           // Синонимы
  cgKatKau_FPDisabled  = 28; // = 4 or 8 or 16         // Аналитики для FP
  cgKatKau_AllDisabledWithoutUser  = 61; // = 1 or 4 or 8 or 16 or 32       //отображать только пользовательскую Аналитику

// Начало нумерации аналитик (кроме системных) [KatKau.KodGroup]
  cgKatKau_StartNum = 10000;
  //----------------------------------------------------------------------------
  cgFirst_UsKau     = 10000;  // Подлежит удалению, не использовать !!!
  //----------------------------------------------------------------------------

// бит максимального количествы КАУ (для инвертирования КАУ)
  cgMax_KauBit     = 16384;

// Константы для дополнительных атрибутов счета (ДАС)
  cgDas_NoFor_SD   = 1;
  cgDas_NoFor_SK   = 2;
  cgDas_NoFor_OD   = 4;
  cgDas_NoFor_OK   = 8;

//параметры открытия модификационных каталогов (встроенных интерфейсов)
  cgRecordView    = 0;      //просмотр
  cgRecordEdit    = 1;      //редактирование
  cgRecordInsert  = 2;      //вставка
  cgRecordDelete  = 3;      //удаление
  cgRecordEditEn  = 4;      //редактирование с выбором
  cgRecordActiv   = 5;      //перевод в активные/исключенные
  cgRecordHide    = 6;      //скрытие

// константы разделов (начиная с 7.1)
  cgRazdel_First  = 1;   // первый контекст
  cgRazdel_FP     = 1;   // фин.планирование
  cgRazdel_PP     = 2;   // производственное планирование
  cgRazdel_MC     = 3;   // Учет МЦ
  cgRazdel_Usl    = 4;   // Учет Услуг - начиная с 7_11
  // КОРРЕКТИРУЙТЕ ДАННУЮ КОНСТАНТУ cgRazdel_End ПРИ ДОБАВЛЕНИИ РАЗДЕЛОВ
  cgRazdel_End    = 4;   // последний контекст
  cgRazdel_Error_NotFound = 1 ; //ошибка поиска раздела

//группы аналитик и слои показателей по разделам учета (Sloj.Razdel)
  cgSloj_RazdelFP  = 1;      //фин.планирование
  cgSloj_RazdelPP  = 2;      //производственное планирование

//группы аналитик и слои показателей (Sloj.SysNum)
  cgSloj_Group     = 1;      //группы аналитик
  cgSloj_Sloj      = 2;      //слой аналитик
  cgSloj_GrSloj    = 3;      //группа слоев аналитик

//группы аналитик и слои показателей (Sloj.isActive)
  cgActivSloj      = 0;
  cgDeletedSloj    = 1;

//------------------------------------------------------------------------------
// Константы КАУ (Каталогов аналитического учета)
//------------------------------------------------------------------------------
  cgKau_KatOrg        = word(1);   // Организации
  cgKau_KatPodr       = word(2);   // Подразделения
  cgKau_Persons       = word(3);   // Сотрудники предприятия
  cgKau_KatMC         = word(4);   // Материальные ценности
  cgKau_KatUsl        = word(5);   // Услуги
  cgKau_BaseDoc       = word(6);   // Документы-основания
  cgKau_Zakaz         = word(7);   // Производственные заказы. В 5.8 и 7.1 разные таблицы
  cgKau_GroupMC       = word(8);   // Группы МЦ
  cgKau_GroupUsl      = word(9);   // Группы услуг
  cgKau_KatParty      = word(10);  // Партии МЦ
  cgKau_GroupParty    = word(11);  // Группы партий МЦ
  cgKau_GroupSch      = word(12);  // Группы ДО/Договоров
  cgKau_Zatr          = word(13);  // Статьи затрат (производство)
  cgKau_Dogovor       = word(14);  // Договоры
  cgKau_OS            = word(15);  // Основные средства
  cgKau_NMA           = word(16);  // Нематериальные активы
  cgKau_AppVeks       = word(17);  // Векселя и ценные бумаги
  cgKau_VidNor1       = word(18);  // Виды основных средств
  cgKau_VidNor2       = word(19);  // Виды нематериальных активов
  cgKau_FpStBud       = word(20);  // Статьи планов (бюджетов)
  cgKau_FpPeriod      = word(21);  // Периоды планирования
  cgKau_FpCO          = word(22);  // Центры ответственности
  cgKau_ObjRem        = word(23);  // Оборудование (в 5.8 Объекты ремонта)
  cgKau_KatMarsh      = word(24);  // Маршрутные карты
  cgKau_HDR_PS        = word(25);  // Производственные спецификации
  cgKau_Indent        = word(26);  // Заявки\Заказы
  cgKau_Grafik        = word(27);  // Графики
  cgKau_MnPlan1       = word(28);  // Производственные планы
  cgKau_MnPlan2       = word(29);  // План снабжения
  cgKau_MnPlan3       = word(30);  // План сбыта
  // 31
  cgKau_GroupOfp      = word(32);  // cgKatKau_System: Группы финансовых обязательств
  // 33
  cgKau_FinSource     = word(34);  // Источники финансирования
  cgKau_TechOp        = word(35);  // Технологические операции
  cgKau_Profes        = word(36);  // Профессии
  cgKau_NeedMt        = word(37);  // Потребность в Материалах
  cgKau_NeedTr        = word(38);  // Потребность в Трудовых ресурсах
  cgKau_NeedEq        = word(39);  // Потребность в Производственных мощностях (Оборудовании)
  cgKau_ObjBuild      = word(40);  // Обьекты строительства.
  cgKau_HDR_KS        = word(41);  // Конструкторские спецификации
  cgKau_VidRem        = word(42);  // Виды ремонта
  cgKau_KatKodKpp     = word(43);  // Коды причин постановки на учет
  cgKau_KatKodBud     = word(44);  // Бюджеты расчетов с ГНИ
  cgKau_KatKodTpn     = word(45);  // Типы платежей-начислений
  cgKau_KatCompl      = word(46);  // Hаборы МЦ
  cgKau_GrObjRem      = word(47);  // Группы оборудования
  cgKau_KaWork        = word(48);  // Виды работ
  cgKau_CorpoNeed     = word(49);  // Корпоративные потребности
  cgKau_CorpoDelivery = word(50);  // Корпоративные планы поставок
  cgKau_CorpoManuf    = word(51);  // Корпоративные планы производства
  cgKau_CorpoBalance  = word(52);  // Балансы движения продукции
  cgKau_VariaPl       = word(53);  // Вариант планирования
  cgKau_AmortGr       = word(54);  // Амортизационные группы (ОС)
  cgKau_GrPlat        = word(55);  // Платежные средства
  cgKau_IspOs         = word(56);  // Признаки использования ОС
  cgKau_IspNMA        = word(57);  // Признаки использования НМА
  cgKau_GrOs          = word(58);  // Группы ОС
  cgKau_KatNazna      = word(59);  // Назначения сопроводительных документов
  cgKau_KatMOL        = word(60);  // Материально-ответственные лица
  cgKau_Marsh_Sp      = word(61);  // Позиции маршрутных карт
  cgKau_PS_Lines      = word(62);  // Позиции производственных спецификаций
  cgKau_KS_Lines      = word(63);  // Позиции конструкторских спецификаций
  cgKau_TypStroy      = word(64);  // Типы строительства
  cgKau_VidStroy      = word(65);  // Виды строительства
  cgKau_Otrasl        = word(66);  // Отрасли строительства
  cgKau_KatVidD       = word(67);  // Виды договоров/соглашений
  cgKau_GrOrg         = word(68);  // Группы организаций
  cgKau_Katego        = word(69);  // Категории
  cgKau_Brigad        = word(70);  // Бригады
  cgKau_Credit        = word(71);  // Кредиты
  cgKau_ATD           = word(72);  // Административно-территориальное деление
  cgKau_StZatr        = word(73);  // Статьи затрат объектов строительства
  cgKau_ClassObj      = word(74);  // Классы объектов строительства
  cgKau_KlVal         = word(75);  // cgKatKau_System: Валюты
  cgKau_GrObj         = word(76);  // Группы объектов ремонтов
  cgKau_TipObj        = word(77);  // Типы объектов ремонтов
  cgKau_VidObj        = word(78);  // Виды объектов ремонтов
  cgKau_SchFact       = word(79);  // Счета-фактуры
  cgKau_KatSopr       = word(80);  // Накладные/Акты
  cgKau_GrPodr        = word(81);  // Группы подразделений
  cgKau_KlVidOpl      = word(82);  // Виды оплат
  cgKau_Normas        = word(83);  // Материальные нормы МК
  cgKau_TCV           = word(84);  // Шапка таблиц расчета
  cgKau_SpTCV         = word(85);  // Спецификация таблиц расчета
//------------------------------------------------------------------------------
// По состоянию на 09.10.2003
//
// !!! В 5.8 системных аналитик может быть максимум 99
//
// !!! НОМЕРА ОТ 100 ДО 5000 ЗАНЯТЫ
//     зарезервированно для пользовательских аналитик,
//     сконвертированных из версий до 7.1
//
// !!! если аналитику не планируется использовать в версии 5.8x,
//     ее ОБЯЗАТЕЛЬНО следует добавлять в диапазон после 5000
//------------------------------------------------------------------------------
  cgKau_PlanOper     = word(5001); // Пооперационные планы
  cgKau_PlanSvod     = word(5002); // Сводные планы
  cgKau_MarkaTS      = word(5003); // Марки транспортных средств
  cgKau_DirectInvest = word(5004); // Направления инвестиций
  cgKau_KlPrice      = word(5005); // Прайс-листы
  cgKau_PrSbOs       = word(5006); // Признаки собственности ОС
  cgKau_PrSbNMA      = word(5007); // Признаки собственности НМА
  cgKau_TypeMC       = word(5008); // Типы матценностей
  cgKau_SmetaStroy   = word(5009); // Локальные сметы
  cgKau_QPHead       = word(5010); // Паспорта качества
  cgKau_NVariant     = word(5011); // Варианты изготовления
  cgKau_MarPunkt     = word(5012); // Пункты движения
  cgKau_Transp       = word(5013); // Транспортные средства
  cgKau_STS          = word(5014); // Состояния транспортных средств
  cgKau_MarDvi       = word(5015); // Маршруты движения
  cgKau_KatB         = word(5016); // Банки
  cgKau_KaElem       = word(5017); // Элементы затрат
  cgKau_Smet         = word(5018); // Операционные сметы
  cgKau_PlPor        = word(5019); // Платежные документы
  cgKau_TypeTS       = word(5020); // Типы транспортных средств
  cgKau_VidRabMC     = word(5021); // Виды работ/МЦ
  cgKau_CalPlan      = word(5022); // Пункты календарных планов
  cgKau_CardSN       = word(5023); // Серийные номера
  cgKau_RashodBP     = word(5024); // Карточки расходов будущих периодов
  cgKau_WorkTheme    = word(5025); // Тема работ
  cgKau_WorkStage    = word(5026); // Этап работ

  // Учебный процесс
  cgKau_Curriculum     = word(5027); // Базовые учебные планы
  cgKau_StudPlan       = word(5028); // Планы обучения
  cgKau_StudGroup      = word(5029); // Группы студентов
  cgKau_StudCategory   = word(5030); // Категории студентов
  cgKau_EduVid         = word(5031); // Виды образования
  cgKau_Speciality     = word(5032); // Специальности
  cgKau_Specialization = word(5033); // Специализации
  cgKau_Qualification  = word(5034); // Квалификации
  cgKau_EduStruct      = word(5035); // Структурные подразделения (структурные единицы штатного расписания)
  cgKau_Citizenship    = word(5036); // Гражданство

  cgKau_KatState       = word(5037); // Государство
  cgKau_SpSopr         = word(5038); // Спецификации актов/накладных
  cgKau_Vagon          = word(5039); // Железнодорожные вагоны

  cgKau_KlassifTS1     = word(5040); // Классификация ТС по первому целевому признаку
  cgKau_KlassifTS2     = word(5041); // Классификация ТС по второму целевому признаку
  cgKau_KlassifTSVid   = word(5042); // Классификация ТС по виду
  cgKau_KlassifTSEng   = word(5043); // Классификация ТС по типу основного двигателя
  cgKau_KlassifTSTrl   = word(5044); // Классификация ТС по наличию прицепа
  cgKau_KlassifTSPark  = word(5045); // Классификация ТС по парку учета
  cgKau_KatRsvOper     = word(5046); // Журналы резервирования планового фонда ПЦ
  cgKau_KatPersons     = word(5047); // Каталог для выбора : Сотрудники предприятия
//------------------------------------------------------------------------------
// !!! для возможности построения иерархических отчетов добавляйте
// cg-константу по аналитике
// в PAS\reptree.pas,
// в PAS\TXO\servkau.pas : GetKauCoTable, GetKauTabBuf
//------------------------------------------------------------------------------
