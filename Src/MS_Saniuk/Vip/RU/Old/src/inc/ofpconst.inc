//------------------------------------------------------------------------------
//                                                      (c) корпорация Галактика
// Галактика 5.80 - модуль "Платежный календарь"
// Константы ОФП ( ПК )                                       умолч
//------------------------------------------------------------------------------

  // -> в каждый отчет свои
  cgFlViewPos_KatOrg   =  5;
  cgFlViewPos_FpStBud  =  6;
  cgFlViewPos_FpCO     =  7;
  cgFlViewPos_Persons  =  8;
  cgFlViewPos_Dogovor  =  9;
  cgFlViewPos_BaseDoc  = 10;
  cgFlViewPos_GroupOfp = 11;

  // для = _nFilter = (Реестр ФОб/иерархическое представление журнала ФОб)
  cgFilter_KatOrg  =  5;
  cgFilter_FpStBud =  6;
  cgFilter_FpCO    =  7;
  cgFilter_Persons =  8;
  cgFilter_Dogovor =  9;
  cgFilter_BaseDoc = 10;
  cgFilter_GroupOfp= 11;
  cgFilter_GroupSch= 12;
  cgFilter_ObjBuild= 13;
  // 14
  cgFilter_cAktSum = 15;
  cgFilter_cKatNotes
                   = 16;
  cgFilter_KatDoc  = 17;
  cgFilter_Prior   = 18;
  cgFilter_KauBud  = 19;
  // 20 не использовать!!!
  cgFilter_Investor= 21;
  cgFilter_StZatr  = 22;

  // для оразноски по статьям Приоритет/Статья/Initer(по сумме или по проценту)
  _wVxodim_BegPos   = 0;
  _wVxodim_Long     = 1;
  _wPrior_BegPos    = _wVxodim_Long;
  _wPrior_Long      = 2; // править вместе с dPrior_Sum
  _wIniter_BegPos   = _wVxodim_BegPos + _wVxodim_Long + _wPrior_Long;
  _wIniter_Long     = 1; //

  // типы отчетов
  nrepPAY_SELBASEDOC = 700;
  nrepPAY_CALENDAR = 701;
  nrepPAY_CALMODEL =1701;
  nrepFIN_REGISTER = 704;
  nrepREQ_REGISTER = 705;
  nrepOFP_PRIHOD   = 706;
  nrepOFP_ARCHIVE  = 707;
  nrepOFP_JOURNAL  = 708;
  cgReport_OfpSaldo= 709;
  nrepOFP_JRN_Brws = 710;
  nrepOFP_PayStApp = 1548; // cgReport_1548
  // типы документов
  // сюда не вошли почему то ДО: 93, 501, 919
  tFIN_OBLIGATION  =   0; // Финансовые обязательства';
  tDOLG_SALE       =  90; // Договоры продажи долга';
  tDOLG_BYE        =  91; // Договоры покупки долга';
  tDOLG_USTUPKA    =  92; // Уступка собственного долга';
  tDOLG_BYE2       =  93; // Договоры покупки долга - 2-ое ДО; ????!!!
  tBASE_BYE        = 101; // Основания на закупку';
  tBASE_GETCONSIG  = 102; // Основания для приема на консигнацию';
  tBASE_BYE_AVANS  = 111; // Основания на предоплату закупок';
  tBASE_SALE       = 201; // Основания на продажу';
  tBASE_PUTCONSIG  = 202; // Основания для отпуска на консигнацию';
  tBASE_SALE_AVANS = 211; // Основания на предоплату продаж';
  tDOG             = 400; // Договора
  tAPPDOG          = 401; // Соглашения
  tPLAN            = 403; // Пункты календарного плана
  tREQ_SERVICE     = 510; // Заявки на сервисное обслуживание';
  tDOG_PERERAB     = 520; // Договоры на переработку сырья';
  tREQ_REMONT      = 550; // Заявки на ремонт;
  tREQ_RASHOD      = 801; // Расходование средств';
  tREQ_PRIHOD      = 804; // Приходование средств';
  tTRq_MTO_Ent     = 805; // Обобщенная заявка МТО (План снабжения) ';
  tPlatDoc         = 806; // Плтежный документ
  tREQ_PRDRASHOD   = 802; // Периодическое расходование средств';
  tREQ_PRDPRIHOD   = 810; // Статистический приход
  tFOB_RASHOD      = 821; // ФОБ-Расходование средств';
  tFOB_PRIHOD      = 822; // ФОБ-Приходование средств';
  tREQ_GETCREDIT   = 803; // Получение кредита';
  tCREDIT_PUT      =  85; // Выданный кредит
  tCREDIT_GET      =  86; // Полученный кредит
  tEND             = tREQ_PRDPRIHOD; // последняя константа

  cgDefDocReq      = 800; // cgOfp_Req- константы
  cgDefAktOfp      = 820; // cgOfp_Akt- константы
  cgTiDkGal_Fop    = 823;
  cgDefOrg         = 840; // организация
  cgDefBank        = 841; // банк

  // типы из внешних модулей
  tSECURITY        =  83;
  tVEKSL           =  81;
  tAVISO_OUT       =  21; // исходящее авизо (advice)
  tAVISO_IN        =  22; // входящее авизо (advice)

  // типы основания
  rsFIN_OBLIGATION =   0; // исп.при заполнении буфера ФО по ДО
  rsDOGOVOR        =   1; // основание - договор
  rsCalPlan        =   7; // основание - пункт календарного плана
  rsBASEDOC        =   2; // ДО
  rsREQUEST        =   3; // заявка обычная
  rsREQUEST_PRD    =   4; // заявка на периодический приход/расход
  rsGRAFKRED       =   5; // график получения/выдачи/погашения кредита
  rsTRq_MTO_Ent    =   6; // Обобщенная заявка МТО (План снабжения)
  rsPlatDoc        =   7; // Платежный документ
  rsUNKNOWN        =  10; // для ветки else

  // тип фин.операции
  ctNODEF          =   0; // неопределенный
  ctTRANS_PS       =   1; // передача ПС
  ctVZAIM_MASTER   =   2; // взаимозачет
  ctCONVERT        =   3; // конвертация
  ctVZAIM_SLAVE    =   4; // взаимозачет
  // тип Фоп для конвертации
  ctOWN_SECURITY   =  31; // гашение соб.цен.бумаг
  ctOWN_VEKSL      =  32; // гашение соб.векселя
  ctALIEN_SECURITY =  33; // гашение сторон.цен.бумаг
  ctALIEN_VEKSL    =  34; // гашение сторон.векселя
  ctVAL_BYE        =  35; // покупка валюты
  ctVAL_SELL       =  36; // продажа валюты
  ctVAL_CONVERT    =  37; // конвертация валюты
  ctTRANSFER       =  38; // перевод денег


  // тип платежного средства
  mtNOTDEFINED     =   0; // не определен (для возврата из функции)
  mtKASSA          =   1; // наличные в кассе
  mtKASSA_VAL      =  10; // валюта в кассе
  mtACCOUNT        =   2; // деньги на р/с
  mtACCOUNT_VAL    =   3; // деньги на в/с
  mtSECURITY       =   4; // ценные бумаги
  mtVEKSL          =   5; // векселя
  mtAVISO          =   6; // авизо (advice)
  mtZADOLJ         =   7; // задолженность
  mtZADOLJ_DEBET   =   8; // д/з - для постр. деревьев (mtZADOLJ + dirPRIHOD)
  mtZADOLJ_CREDIT  =   9; // к/з - для постр. деревьев (mtZADOLJ + dirRASHOD)
  mtEND            =  mtKASSA_VAL; // последняя константа

//!!DEL см.cgOfpTP_-константы
  // тип платежа по фин.обязательству
//  tpREGLAMENT      =   0; // регламентный
//  tpAVANS          =   1; // авансовый
//  tpSHTRAF         =   2; // штрафные санкции
//  tpCONVERT        =   3; // конвертация (ФО - или вал. или руб.)

  // константы для определения полей и режимов их формирования
  wFld_TypePlat = 200;   // Вид платежа
  wFld_dDoc     = 201;   // дата ФОб
  wFld_PlatMean = 202;   // платежное средство
  cFld_AktSum   = 203;   // сводное ФОб
  cFld_KatNotes = 204;   // статус ФОб
  wFld_PlanPay  = 205;   // схема платежей (расспределение по ФОп)::режим
  wFld_NoDoc    = 206;   // номер ФОб::режим
  wFld_dFirst   = 207;   // первоначальная дата::режим
  dFld_dDoc     = 208;   // первоначальная дата::значение(явно)
  dFld_dFirst   = 209;   // первоначальная дата::значение(явно)
  wFld_Prior    = 210;   // Приоритет
  wFld_Course   = 211;   // Курс
  wFld_CoursePrc= 212;   // Процент к курсу
  wFld_DocSource= 213;   // Документ - источник
  wFld_KatDoc   = 214;   // Тип Документа
  wFld_PlatDoc  = 215;   // Платежный Документ

  // авторежимы формирования (предположим, что пользовательские наборы не переплюнут 100)
  cmAutoByDO          = 101;
  cmAutoByDOaddSrok   = 102;
  cmAutoByDOaddDay    = 103;
  cmAutoByDOpayUp     = 104;
  cmAutoByDogovor     = 105;
  cmAutoByFODate      = 106;
  cmAutoByDOValue     = 107;
  cmAutoByIncremental = 108;

  // константы для таблицы OfpRef.wType
  cgCashBankDefault =  1; // документы по умолчанию для ПС с разделами учета
  cgModeMake        =  2; // режимы форирования ФОб

  // значения по умолчанию
  defCLEAR_TYPE    =   1; // тип ФОп - передача ПС
  defMEAN_TYPE     =   2; // вид ПС - деньги на РС
  defAKT_PRIOR     =   1; // приоритет обязательства
  defREQ_PRIOR     =   1; // приоритет заявки
  defAKT_VER       = 100; // вероятность оплаты
  defAKT_TIPMONEY  =   1; // тип по отн к валюте (рублевый)

  // статус фин.операции
  stINACTIVE       =   0; // неактивная
  stACTIVE         =   1; // активная
  stINVERT         =   2; // для выбора статуса - заменять на противоположный

  // статус фин.обязательства
  stOFORM          =   0; // оформляемое
  stISPOLN         =   1; // исполняемое
  stOTLOJEN        =   2; // отложенное
  stOTMENEN        =   3; // отмененное
  stZAKRYT         =   4; // закрытое
  stNOTDEFINED     = 100; // < не определен >

  //состояния по времени
  sstFuture         = 0;
  sstDelayed        = 1;
  sstToday          = 2;
  //состояния оплаченности
  sstNotPaid        = 0;
  sstPaid           = 1;

  // направление ПС
  dirNULL          =   0; // нет ничего
  dirPRIHOD        =   1; // приход
  dirRASHOD        =   2; // расход
  cgOfpDir_Conv1   =   2; // направление верхней Фоп конвертации
  cgOfpDir_Conv2   =   1; // направление нижней  Фоп конвертации

  //-------------------------------------------------------
  // уровни группировок
  lALL             =   0; // Все
  lDATE            =   1; // Дата погашения
  lDO              =   2; // ДO'
  lFO              =   3; // Финансовое обязательство'
  lPURPOSE         =   4; // Назначение обязательства'
  lKONTR           =   5; // Контрагент'
  lSTATUS          =   6; // Статус'
  lCURATOR         =   7; // Куратор'
  lCENTER          =   8; // Центр ответственности'
  lSTBUD           =   9; // Статья бюджета'
  lPLATMEAN        =  10; // Платежное средство'
  lPRIOR           =  11; // Приоритет'
  lVALUTA          =  12; // Валюта'
  lDIAPASON        =  13; // Диапазоны сумм'
  lDOGOVOR         =  14; // Договор'
  lAPPDOGOVOR      =  51; // ДопСоглашение'
  lCALPLAN         =  52; // ПКП
  lAKTGROUP        =  15; // Группы ФО
  lAKTSUM          =  16; // Сводные ФО
  lDIRECT          =  17; // Направление денег
  lDATE_INPUT      =  18; // Дата создания (ФО)
  lVID_PLATMEAN    =  19; // Вид ПС (mt-константы)
  lVALUTA_AKT      =  20; // Валюта ФО - для ПК
  lUSER_PLATMEAN   =  21; // Группа ПС
  lDOTYPE          =  22; // Тип основания ФО
  lDOVID           =  23; // Вид основания ФО (ДО, заявки, кредиты...)
  lCATZADOLJ       =  24; // категории задолженности __OFP_FOFIRSTDATE__
  lPRCZADOLJ       =  50; // Диапазон задолженности  __Ofp_prcZadolj__
  lOBJBUILD        =  53; // Объект строительства
  // уровни для закрытого дня
  lFACT            =  25; // факт
  lUNREQ           =  26; // невыполненные заявки (наши об-ва)
  lUNAKT           =  27; // невыполненные об-ва контрагентов
  lPRIHOD          =  28; // приход (неразнесенный или статистический)

  lPERIOD          =  30; // уровни с периодом (кол-во - в зав.от разбивки)
  lPLATMEAN_PRIHOD =  31; // Платежное средство (для прихода)
  lPLATMEAN_SALDO  =  32; // Платежное средство (для сальдо)

  lDIRECT_AKT      =  40; // Направление ФО (для журнала ФО)
  lDIAPASON_AKT    =  41; // Диапазон сумм ФО (для журнала ФО)
  lITOGO           =  42; // Итого (для отчетов)
  lSTBUDAN         =  43; // Аналитика по статьям бюджета (для журнала ФО)

  lDATE_BEGIN      =  44; // начальная дата погашения ФО
  lTIDKGAL         =  45; // тип документа
  lOFPPERIOD       =  46; // вид периода (закрытый/плановый)
  lDATE_AKT        =  47; // Дата погашения ФО (для ПК)
  lCLEARTYPE       =  48; // Тип операции
  lTYPEPLAT        =  49; // Вид платежа
  lCOMMENT         =  33; // Вид платежа
  lKAU             =  29; // Аналитика статей бюджета
  //д <> cgTreeNew_lKatOrgDescr = 99

  lBEGIN_PLATMEAN  = 100;
  lEND_PLATMEAN    = lBEGIN_PLATMEAN + mtEND; // 110
  lBEGIN_DO        = lEND_PLATMEAN + 1; // 111
  lEND_DO          = lBEGIN_DO + tEND;  // 111 + 810 = 921

  // сортировки в ПК, реестрах
  // Фоп
  cgOfpSort_FopDate   = 1; // дата
  cgOfpSort_FopSumma  = 2; // сумма
  cgOfpSort_FopDirect = 3; // направление
  cgOfpSort_FopStatus = 4; // статус
  // ФО
  cgOfpSort_FoDate    = 101; // дата
  cgOfpSort_FoNoDoc   = 102; // номер
  cgOfpSort_FoPrior   = 103; // приоритет
  cgOfpSort_FoSumma   = 104; //
  cgOfpSort_FoDirect  = 105; //
  cgOfpSort_FoStatus  = 106; //
  // Заявка
  cgOfpSort_ReqDate   = 201; //
  cgOfpSort_ReqNoDoc  = 202; //
  cgOfpSort_ReqPrior  = 203; //
  cgOfpSort_ReqSumma  = 204; //
  cgOfpSort_ReqDirect = 205; //
  cgOfpSort_ReqStatus = 206; //

  cgOfpSort_PayDate   = 301;
  cgOfpSort_PayNoDoc  = 302;
//  cgOfpRep_SortVal    = 6; // валюта
  //-------------------------------------------------------


  // тип документа по отношению к валюте
  tipRUB           =   1; // рублевый
  tipVALRUB        =   2; // валютно-рублевый
  tipVAL           =   3; // валютный

  // просто константы
  ccNULL           =   0; // word(0) comp(0) ...
  ccMARK           = 'V';

  // pick - константа
  pickPLP          =2001; // содержит ФОп для формирования плат.док

  // периодичность платежа для DocReq
  perDAY           =   0;
  perWEEK          =   1;
  perTENDAYS       =   2;
  perMONTH         =   3;
  perQUARTER       =   4;
  perYEAR          =   5;

  // иконки
  iconNone         =   0; // нет иконки
  iconLClPaid      =   1; // оплачена Фоп
  iconLCanSetClStatus= 2; // можно менять статус Фоп
  iconLCantSetClStatus=3; // нельзя менять статус Фоп
  iconOClosedDay   =   4; // закрытый день (открыта папка)
  iconCClosedDay   =   5; // закрытый день (закрыта папка)
  iconODeficit     =   6; // есть дефицит  (открыта папка)
  iconCDeficit     =   7; // есть дефицит  (закрыта папка)
  iconONotDeficit  =   8; // нет дефицита  (открыта папка)
  iconCNotDeficit  =   9; // нет дефицита  (закрыта папка)

  // OfpSaldo.RecType (менять только с конвертацией)
  rtBEG_ARCHIVE    =  20;
  rtEND_ARCHIVE    =  21;
  rtBEG_CLOSED     =  10;
  rtEND_CLOSED     =  11;
  rtBEG_PLAN       =   0;
  rtEND_PLAN       =   1;
  rtSaldoOnDay     = 100; // сальдо, заведенное на определенный день
  rtUnRegOborot    = 1010; // Неучтенные обороты на определенный день

  cgOfpDay_Null    =   0;  // неопределенный
  cgOfpDay_Arvd    =   1;
  cgOfpDay_Clsd    =   2;
  cgOfpDay_Plan    =   3;
  cgOfpDay_All     =   0;  // все периоды

  // вид ПС (кассы, р/с...) или тип ПС (касса1, р/с1...)
  cgOfpPsVid       =   0; // OfpSaldo.Leaf = 0;
  cgOfpPsTip       =   1; // OfpSaldo.Leaf = 1;

  // таблицы модуля
  cgOfpTable_ALL       =   0;
  cgOfpTable_Clearing  =   1;
  cgOfpTable_OfpPrihod =   2;
  cgOfpTable_OfpSaldo  =   3;
  cgOfpTable_AktOfp    =   4;
  cgOfpTable_DocReq    =   5;
  cgOfpTable_BaseDoc   =  11;
  cgOfpTable_GrafKred  =  12;
  cgOfpTable_SoprHoz   =  13;
  cgOfpTable_PlPor     =  14;
  // подсчет сумм факта
  shNOT_PAID      =   0;
  shPAID          =   1;
  shALL           =   2;

  // режимы для ПК
  cgMode_KeepOld  = 0;
  cgMode_MakeNew  = 1;


  // N сумм для ПК
  cgSum_OfpBase   = 0; // суммы для основной модели
  cgSum_OfpComp   = 1; //       для срав-мой модели

  cgOld           = 1; // для передачи ф-ям в кач.параметра
  cgNew           = 2; //

  // ----------- !!! не забывайте пополнять ListName   

  ceNoError            = 0; // без ошибок
  ceWarningWithCorrect = 1; // предупреждение без прерывания (самокорекция)
  ceWarningNoCorrect   = 2; // предупреждение без прерывания (пропускание без коррекции)
  ceWarningWithBreak   = 4; // предупреждение с прерыванием  (критическое)
  ceError              = 5; // ошибка (критическое с остановкой)
  // ----------- !!! не забывайте пополнять ListName   

  // последовательности для журнала изм-ний
  cgLogsType_Compare   = 1; // сравнение моделей
  // ----------- !!! не забывайте добавлять наз.в aOfpLogs.GetListName   

  cgLogsChange_Change  = 1; // изменение поля
  cgLogsChange_Delete  = 2; // удаление записи
  cgLogsChange_Insert  = 3; // добавление записи
  cgLogsChange_Error   = 4; // сообщение об ошибке
  // ----------- !!! не забывайте добавлять наз.в aOfpLogs.GetChangeName 

  // суммы для колонок ПК
  cgSums_All      =  0; // все суммы - для пересчета
  cgSPrih_PRIH    =  2; // ПРИХОД
  cgSPrih_FACT    =  9; // факт
  cgSPrih_PLAN    =  7; // план
  cgSPrih_PRIHval = 12;
  cgSPrih_FACTval = 19;
  cgSPrih_PLANval = 17;

  cgSRash_RASH    =  3; // РАСХОД
  cgSRash_FACT    = 10; // факт
  cgSRash_PLAN    =  8; // план
  cgSRash_RASHval = 13;
  cgSRash_FACTval = 20;
  cgSRash_PLANval = 18;

  cgSPrRs_Diff    =  1; // Приход(расход) - факт
  cgSPrRs_Diffval =  4; // ... в валюте
  cgSPrRs_POTOK   =  6; // Фин.поток
  cgSPrRs_POTOKval= 14; // ... в валюте

  cgSPrRs_SALIN   = 11; // вх.сальдо  ... в валюте
  cgSPrRs_SALOUT  = 15; // исх.сальдо ... в валюте
  cgSPrRs_DEFICIT = 16; // дефицит    ... в валюте
  cgSPrRs_DEFflag =  5; // признак дефицита (для печати)

  cgSPrRs_MDLflag = 21;    // признак отличия Фоп на срав-мой модели (для печати)
  cgSPrRs_FixInFlag  = 22; // признак фиксированного сальдо
  cgSPrRs_FixOutFlag = 22; // признак фиксированного сальдо

  cgSumPK_MAX     = 22; // !!! не забывайте менять это значение

  // направление для приоритета
  cgDir_FORWARD = 1; // прямое   (меньший N - меньший Приор.)
  cgDir_REVERSE = 2; // обратное (меньший N - больший Приор.)

  //-------------------------------------------------------
  // ofpprior.vip -- каталоги приоритетов
  cgPrior_OFP      = 1;    // для Платежного календаря
  cgComment_OFP    = 2; // Примечание из каталога приоритетов
  cgPriorNum_OTHER = 10;   // число уровней для остальных каталогов
  cgPriorNum_MAX   = 1000; // самое максимальное число приоритетов
//

  // максимальная дата в системе
  cgMAX_DATE      = '01/01/2100';
  cgVersion       = 810;
  cgDO_sWasDelete = '< основание удалено >';

  // существующие ФО при формировании по заявкам и ДО
  cgTuneExFo_Ask    = 0; // по запросу
  cgTuneExFo_Skip   = 1; // пропускать
  cgTuneExFo_Remake = 2; // заменять

  // константа из pick.inc
//  cgPick_StBud         = 20101; // выбор статей бюджета

  // дата ФО при формировании
  cgOfpDate_FromDO     =  0; // из ДО
  cgOfpDate_PayTill    =  1; // из ДО - оплатить до
  cgOfpDate_Setted     =  2; // указанная
  // пропускать ли ДО, если его дата - закрытый день
  cgCurDO_No           =  0; // день не закрыт
  cgCurDO_Yes          =  1; // да
  cgCurDO_YesAll       =  2; // да для всех
  cgCurDO_Exit         =  3; // выход
  cgCurDO_Ok           =  4; // принять выбор (формирование на новую дату)
  // способ определения курса Фоп
  cgFopCourse_DateFO   =  0; // по дате создаваемого ФО
  cgFopCourse_DateDO   =  1; // по дате ДО
  cgFopCourse_FromDO   =  2; // по указанному в ДО
  cgFopCourse_PrcDO    =  4; // с учетом процента к курсу

  // ликвидность (для фильтров)
  cgLicv_High = 1; // высокая
  cgLicv_Low  = 2; // низкая

  // заполнение массивов для выбора из списка ПС
  cgOfpMT_FopTrans = 1; // передача средств
  cgOfpMT_FopVzaim = 2; // взаимозачет
  cgOfpMT_FopConvt = 3; // конвертация - верхняя Фоп или нижняя
  cgOfpMT_FopConvtDnForKassa = 31; // конвертация - нижняя Фоп, когда вверху касса
  cgOfpMT_FopConvtDnForVekCb = 32; // конвертация - нижняя Фоп, когда вверху вексель или ц/б
  cgOfpMT_LicvHigh = 4; // ПС высокой ликвидности
  cgOfpMT_LicvLow  = 5; // ПС низкой ликвидности
  cgOfpMT_All      = 6; // все ПС - для фильтра

  // вид платежа ФО
  cgOfpTP_Reglament = 0; //'регламентный'
  cgOfpTP_Avans     = 1; //'авансовый'
  cgOfpTP_Shtraf    = 2; //'штрафные санкции'
  cgOfpTP_Convert   = 3; //'конвертация'

  OFP_Prefix  =
!  #ifdef ComponentVersion
    'F_OFP::'
!  #else
!    ''
!  #end
  ;

  // нужен ли пересчет остатков (после закрытия/открытия дня, переноса в архив)
  cgOfpPeriod_NeedRecount = 'cgOfpPeriod_NeedRecount';

  // Clearing.Attr (пока использую Clearing.cChainClearing)
  cgOfpAttr_No      = 0;
  cgOfpAttr_Paid    = 1; // оплаченный (исполненный)
  //-------------------------------------------------------
  // ПАРАМЕТРЫ ИНТЕРФЕЙСОВ
  //-------------------------------------------------------
  // параметр parViewMode интерфейса OfpJournal
  cgiOfp_No             =  0; // не позиционироваться
  cgiOfp_WinEditFO      =  1; // запустить окно редактирования ФОБ
  cgiOfp_WinEdit        =  1; // запустить окно редактирования (общее)
  cgiOfp_WinEditFop     =  2; // ФОП
  cgiOfp_Archive        =  4; // архив
  cgiOfp_GoToFO         =  8; // просто спозиционироваться на ФОБ
  cgiOfp_GoTo           =  8; // просто спозиционироваться на запись
  cgOfp_RecORP          =  0; // основное рабочее поле
  cgOfp_PeriodNotExists = 1;  // период не существует
  cgiOfp_Multi          = 16; // множественный выбор
  cgiOfp_Pick           = 32; // режим выбора (одиночный) (пока не реализую)
  cgiOfp_ArchWinEditFop = 64; // ФОП архива

  // ofpsald.vip
  cgOfpSald_Default   = 0; // по умолчанию
  cgOfpSald_OFPSaldR  = 1; // закладка
  cgOfpSald_OFPLimV   = 2; //
  cgOfpSald_OFPSaldoD = 3; //
  cgOfpSald_OFPPrihod = 4; //
  cgOfpSald_OFPUnRegOborot = 5; //

  // aGetSopr.vip
  cgExFilter_NoFop  =  1; // ХозОп.не распр.по Фоп
  cgMode_PickMulti  =  2; // С возможностью множ выборов
  cgMode_CreateOFP  =  4; // Для создания документов ПК

  cgiOfp_RegPlan    =  0; // формирование плана
  cgiOfp_RegAll     =  1; // восстановледние данных бюджета

  // настройка взаимодействия с документами системы
  cgNastr_PKDoc  = 0;
  cgNastr_FromPK = 1;
  cgNastr_ByDoc  = 2;

  // команды для OfpOut.vip
  cgCom_SoprHozIsOfpDoc = 0;        // проверка на возможность обработки SoprHoz
  cgCom_SoprHozInsert = 1;          // добавление записи
  cgCom_SoprHozUpdate = 2;          // обновление записи
  cgCom_SoprHozDelete = 3;          // удаление записи
  cgCom_SoprHozChangeSumma = 4;     // изменение суммы хозопе-рации
  cgCom_SoprHozChangeOfpPrihod = 5; // изменение неразнесен-ного прихода
  cgCom_SoprHozAddOnRest = 6;       // новая ХО на остаток при привязке ХО к ДО
  cgCom_SoprHozChangeSummaBeforeDivision = 7; //  изменение суммы хозоперации перед ее разделением (при привязке к ДО)
  cgCom_SoprHozSxlop = 8;           // схлопывание СопрХозов в 1
  cgCom_SH_NewOwner  = 9;           // новый СопрХоз для AktPerf( bufSoprHoz.nRec -> bufSoprHoz.cPredOplDO )
  cgCom_SoprHozDistPlBeforeDivision = 27; //  изменение суммы хозоперации перед ее разделением (при привязке к ДО в пакетном режиме)
  cgCom_SoprHozPlDocMakeFO = 16;    // формирование ФО по СХ ПлДока
  cgCom_PlPorDetachDO = 10;         // В платёжном документе отвязываем ДО

  cgCom_BaseDocInsert     = 11;     // добавление записи
  cgCom_BaseDocUpdate     = 12;     // обновление записи
  cgCom_BaseDocDelete     = 13;     // удаление записи
  cgCom_BaseDocDeleteMess = 18;     // удаление записи с проверкой
  cgCom_BaseDocRecalc     = 14;     // пересчет сумм
  cgCom_BaseDocMakeFO     = 15;     // формирование ФО по ДО
  cgCom_BaseDocMakeAvto   = 17;     // автоформирование ФО при создании пл. документа из ДО

  cgCom_TRq_MTO_Insert = 20;        // добавление записи  позиции_плана_МТО
  cgCom_TRq_MTO_Delete = 21;        // удаление записи    позиции_плана_МТО
  cgCom_TRq_MTO_GetNameFob = 22;    // найти и вернуть имя связанного ФОб для позиции_плана_МТО

  cgCom_MarkPlDocMakeFO = 31;       // формирование ФО по маркеру PlPor

  // поле Param для ПК
  cgOfp_ParamNotDef   =  0;
  cgOfp_ParamLevForPS =  1;
  // заголовки
  cgOfpRep_FOTitle   = 'Реестр финансовых обязательств';
  cgOfpRep_ReqTitle  = 'Реестр заявок';
  cgOfpRep_OfpTitle  = 'Платежный календарь';
  // для браузера ФО
  cgOfp_SymDoc = '+'; // исполнение больше 0
  cgOfp_SymIsp = 'x'; // ...сформировано на всю сумму
  cgOfp_SymOpl = '$'; // ... и оплачено

  // встроенные закладки - режимы
  cgOfp_InsNotDef   = 0; // неопределен (при инициализации)
  cgOfp_InsPK       = 1; // ПК
  cgOfp_InsJournFO  = 2; // журнал ФО - подцепка по ФО
  cgOfp_InsJournFop = 3; // журнал ФО - подцепка по Фоп
  cgOfp_InsRep      = 4; // отчеты
  cgOfp_InsDO       = 5; // ДО (operfinp)
  cgOfp_InsSaldR    = 6; // Фоп по сальдо
  cgOfp_InsAktSum   = 7; // ФО по сводному ФО
  cgOfp_InsSaldR_Ar = 8; // Фоп по сальдо включая архивный период

  //-------------------------------------------------------
  // ofpansee.vip

  // режимы ПК
  cgRegim_NotModel = 1; // не моделирование
  cgRegim_Together = 2; // моделирование и модели вместе
  cgRegim_FirstMod = 3; // моделирование и первая модель
  cgRegim_SecndMod = 4; // моделирование и вторая модель

  // команды ПК
  cgOfp_comChangeDate  =  1; // перенос даты
  cgOfp_comChangePS    =  2; // замена ПС
  cgOfp_comChangeStat  =  3; // изм.статуса Фоп
  cgOfp_comFormPlatDoc =  4; // форм.плат.док-та
  cgOfp_comRecountSaldo=  5; // пересчет остатков
  cgOfp_comCloseDay    =  6; // закрытие дня/откат
  cgOfp_comMoveToArc   =  7; // перенос в архив
  cgOfp_comCompare     =  8; // сравнение с моделью
  cgOfp_comCompareOld  =  9; // сравнение с ОРП (старый вариант)
  cgOfp_comChangeModel = 10; // переход на др.модель

  // настройка в ПК
  // нельзя работать
  cgNoWork_FirstModel = 1; // с первой моделью
  cgNoWork_SecndModel = 2; // со второй моделью
  // связное продвижение
  cgGoBound_FirstModel = 1; // по первой модели
  cgGoBound_SecndModel = 2; // по второй модели

  // расположение моделей
  cgPanelsOrder_Together    = 0;
  cgPanelsOrder_LeftToRight = 1;
  cgPanelsOrder_TopToDown   = 2;
  //-------------------------------------------------------
  // для передачи в качестве параметра
  cgNoMessage   = 0; // сообщение показывать
  cgMessage     = 1; // не показывать

  //-------------------------------------------------------
  // ОПЕРАЦИИ
  //-------------------------------------------------------
  cgOp_FopChangePs       =  0; // изменение ПС
  cgOp_FopChangeDate     =  1; //   даты
  cgOp_FopChangeStatus   =  2; //   статуса
  cgOp_FopMakeDocs       =  3; // плат.доки
  cgOp_FopUnion          =  4; // объединение Фоп
  cgOp_FopDivision       =  5; // разделение Фоп

  cgOp_FopRecount        = 20;
  cgOp_Fop_Link_Bud      = 34;

  cgOp_FoRecount         = 21;
  cgOp_FoMakeDocs        = 22;
  cgOp_FoUnArchive       = 23;
  cgOp_FoChangeDate      = 24;
  cgOp_FoChangeStatus    = 25;
  cgOp_FoChangePrior     = 26;
  cgOp_FoRecountByCourse = 27;
  cgOp_FoRecountDFirst   = 28;
  cgOp_FoPrint           = 29;
  cgOp_FoPrintReqToPay   = 30;
  cgOp_FoDelete          = 31;
  cgOp_FoMakePlan        = 32;
  cgOp_Fo_Link_Bud       = 33;
  cgOp_FoMakeAktSum      = 35;
  cgOp_FoChange          = 37;
  cgOp_FoCopyOfSome      = 38; // копирование ФОБ

  cgOp_ReqPMakeFo        = 51; // формирование ФО по заявке
  cgOp_ReqMakeFo         = 52; //
  cgOp_ReqChangeStatus   = 53; //
  cgOp_ReqChangePrior    = 54; //
  cgOp_ReqDelete         = 55; // старое cgOp_DelReq
  cgOp_ReqPrint          = 56; // старое cgOp_PrintDocReq
  cgOp_ReqChangeDate     = 57; // перенос даты оплаты
  cgOp_ReqCulcSumm       = 58; // подсчет сумм для заявки на оплату
  cgOp_ReqCopyOfSome     = 59; // копирование заявок
  cgOp_ReqCulcSummAvans  = 60; // расчет суммы удержания аванса для заявки на оплаты
  cgOp_PayReqChangeDate  = 61; // перенос даты оплаты СЗО
  cgOp_PayReqCopyOfSome  = 62; // копирование СЗО
  cgOp_ReqSumCopyOfSome  = 63; // копирование платежных заявок

  cgOp_DoMakeFo          = 91; // формирование ФО по ДО
  cgOp_CrtMakeFo         = 92; // по План-графику для кредита
  cgOp_DefaultMakeFO     = 93; // формирование парам. док-тов ОФП по умолчанию
  cgOp_DefMakeOFP        = 93; // формирование парам. док-тов ОФП по умолчанию
  cgOp_CommonMakeOFP     = 94; // Остальные варианты формиров ФОб
  cgOp_SHMakeFo          = 95; // формирование ФО по ХО Платежного документа

  //-------------------------------------------------------
  // НАСТРОЙКИ МОДУЛЯ
  //-------------------------------------------------------
  // Автоматическое формирование обязательств
  //   при привязке ДО в платежных документах (UPRFIN.OFP.AutoByDO)
  //   каждая следующий вариант включает предыдущий (учитывать в обработке)
  cgTuneAutoByDO_No      = 0; // не формировать
  cgTuneAutoByDO_FindFop = 1; // искать подходящую финоперацию
  cgTuneAutoByDO_AddFop  = 2; // формировать финоперацию, если есть сформированное ФО
  cgTuneAutoByDO_AddFO   = 3; // формировать ФО и финоперацию, если не найдено ФО
  cgTuneAutoByDO_ByStBud = 4; // предлагать распределение по статьям бюджета при формировании ФО
  // заполнение ЦО
  cgCoFill_ByDefault            = 0; // значением по умолчанию
  cgCoFill_ByDogovor            = 1; // по договору
  cgCoFill_ByBase               = 2; // по основанию
  // информацию о сформированных платежных документах
  cgTuneOfp_PerfReport_No       = 0; // не выводить в отчет
  cgTuneOfp_PerfReport_Print    = 1; // отобразить в печатной форме
  cgTuneOfp_PerfReport_Edit     = 2; // отобразить в окне
  // Первоначальная дата ФО по счету
  cgTuneOfp_AktDateFirst_DateDO = 0; // дата ДО
  cgTuneOfp_AktDateFirst_NaSrok = 1; // дата ДО + "на срок"
  cgTuneOfp_AktDateFirst_OplDo  = 2; // дата из "Оплатить до"
  cgTuneOfp_AktDateFirst_Setted = 3; // указанная
  // Формирование сумм в Бюджете
  cgTuneOfp_BudgetNo            = 0; // не ведется
  cgTuneOfp_BudgetByFO          = 1; // по ФО
  cgTuneOfp_BudgetByFop         = 2; // по Фоп
  cgTuneOfp_BudgetByReq         = 3; // по заявкам

  cgTuneOfp_BudAsNo             = 0; // не ведется
  cgTuneOfp_BudAsSumma          = 1; // суммами в копии
  cgTuneOfp_BudAsFpOb           = 2; // ФинПроводками по ФинОперациям

  cgTuneOfp_WayBudAsNo          = 0; // не ведется
  cgTuneOfp_WayBudAsAktOfp      = 2; // суммами в копии по ФОБ
  cgTuneOfp_WayBudAsFpOb        = 3; // суммами в копии по ФОП
  cgTuneOfp_WayBudAsDocReq      = 4; // суммами в копии по заявкам
  cgTuneOfp_WayFpOborotAsAktOfp = 6; // ФинПроводками по ФОБ (не реализовано)
  cgTuneOfp_WayFpOborotAsFpOb   = 1; // ФинПроводками по ФОП
  cgTuneOfp_WayFpOborotAsDocReq = 5; // ФинПроводками по заявкам

  // "Книга финпроводок ведется по документам" Фоп/ФО/Заявкам
  // GetTune_Budget_ByDocs
  cgTuneOfp_BudByFop            = 1;
  cgTuneOfp_BudByAkt            = 2;
  cgTuneOfp_BudByReq            = 4;

  // Подбор финоперации при привязке платежек ДО к ФО
  cgTuneOfp_IspDoToFop_FindSome = 0; // 1 - искать подходящую
  cgTuneOfp_IspDoToFop_FindMake = 1; // 2 - если не найдена - создавать
  cgTuneOfp_IspDoToFop_MakeNew  = 2; // 3 - всегда создавать новую
  // сумма формирования ФО по ДО
  cgTuneOfp_SumFoByDo_All       = 0; // вся сумма
  cgTuneOfp_SumFoByDo_NotOpl    = 1; // неоплаченная сумма ДО
  cgTuneOfp_SumFoByDo_OtgNotOpl = 2; // отгружено, но не оплачено
  cgTuneOfp_SumFoByDo_Nakl      = 3; // сумма по накладным (отгрузки/поставки)
  cgTuneOfp_SumFoByDo_UserAlg   = 4; // пользовательским алгоритмом (по настр)

  // Регистрация исполнения финопераций платежного календаря
  cgTuneOfp_RegFactFop_ByHO     = 0; // по хозоперациям
  cgTuneOfp_RegFactFop_Manual   = 1; // автономно

  //-------------------------------------------------------
  // ОБЪЕКТ aHistory
  //-------------------------------------------------------
  cgHist_OfpTitle = 'История последних операций';
  // для aLogs
  cgHistType_Ok    = 0;
  cgHistType_Error = 1;
  cgHistType_Break = 2;
  cgHistType_Inform= 3; // с произвольным текстом
  cgHistType_sOk    = '< операция завершена успешно >'; // можно не отображать
  cgHistType_sError = '< ошибка на последней операции >';
  cgHistType_sBreak = '< операция прервана пользователем >';
  cgHistType_sNoError = '< ошибок не обнаружено >';
//не компилится
//  cgHistType_cOk    = 0;
//  cgHistType_cError = ColorError;
//  cgHistType_cBreak = ColorSysGreen;
  // коды для aHist
  cgHistCode_OfpOp   = 1; // ПК: все операции
//  cgHistCode_OfpPlat = 2; // ПК: формирование платежек
//  cgHistCode_OfpFo   = 3; // ПК: формирование ФО
  cgHistCode_OfpCheck= 4; // проверка таблиц
//  cgHistCode_OfpOpOne= 5; // одиночные операции
  cgHistCode_OfpIn   = 5; // ПК: операции из внешних модулей
//  cgHistLevel_01 = 1;
//  cgHistLevel_02 = 2;
//  cgHistLevel_03 = 3;
//  cgHistLevel_04 = 4;
//  cgHistLevel_05 = 5;

  cgOfpLog_SoprHoz = 11111;

  cgDefPrecision: double = 0.005;

  // параметр интерфейса OfpClDay
  cgiOfpClDay_ClsOpn  = 0;
  cgiOfpClDay_Archive = 1;

  //----------------------------------------------------------------------------
  // константы для согласования сумм ФО и ФОП
  cgCheckDisbalansWasChanged = 0; // Проверка соответствия сумм и их сбалансирование
  cgAktOfpSumWasChanged      = 1; // Сбалансирование сумм после изменения суммы ФО
  cgClearingSumWasChanged    = 2; // Сбалансирование сумм после изменения суммы ФОП

  cgNotBalanceSums     = 0; // Не балансировать суммы
  cgMakeNewClearing    = 1; // Создать новую ФОП
  cgCorrectClearingSum = 2; // Скорректировать сумму ФОП
  cgCorrectAktOfpSum   = 3; // Скорректировать сумму ФО

  //----------------------------------------------------------------------------
  // константы для выбора даты ФО при формировании по заявке
  cgChangeFODateModeDSKName    = 'Ofpbydr_GetNewFODateMode'; // Режим выбора даты ФО в dsk
  cgChangeFODateNewDateDSKName = 'Ofpbydr_GetNewDateValue'; // Дата ФО в dsk

  cgNoDateMode = 0; // Режим выбора даты ФО не выбран
  cgByBegPlat  = 1; // Дата ФО = Планируемая дата начала оплаты
  cgByEndPlat  = 2; // Дата ФО = Планируемая дата окончания оплаты
  cgUserDate   = 3; // Дата ФО явно задается пользователем

  //-------------------------------------------------------
  // ДРУГИЕ
  //-------------------------------------------------------
  // форматы сумм для doubletostr
  // sums_m.inc - соответствующие макросы для использования в формате поля
  TSummaNdeSign   = '\2p[|-]36`666`666`666`667.88'; // формат максимальной суммы в НДЕ (размером [17.2])
  TSummaNdeNoSign = '\2p6`666`666`666`667.88';      // беззнаковый
  TSummaValSign   = '\2p[|-]36`666`666`667.88';     // формат максимальной суммы в валюте (размером [14.2])
  TSummaValNoSign = '\2p6`666`666`667.88';          // беззнаковый
  //-------------------------------------------------------
  // модуль, из которого сформирована Заявка на расх.средств
  cgModulN_Ofp         =  0; // ПК
  cgModulN_Dog         =  1; // управление договорами
  cgModulN_Bye         =  2; // снабжением
  cgModulN_Sel         =  3; // сбытом
  cgModulN_Stroy       =  4; // Управление комплектацией строительства (ДСД)

//!!DEL
  // где сформирована Заявка на расходование
  cgModul_Ofp          =  0;
  cgModul_Dog          =  1;
  cgModul_Snab         =  2;
  cgModul_Sbyt         =  3;
  cgModul_Stroy        =  4;
  //-------------------------------------------------------

  cgOfp_CheckConvert = 'конвертация';
  //-------------------------------------------------------
  // закладки ПК (bookmarks)
  cgOfpBM_FOBrws  =  1;
  cgOfpBM_FopBrws =  2;
  cgOfpBM_PrfBrws =  4;
  cgOfpBM_NpBrws  =  8;
  cgOfpBM_BudBrws = 16;

  // выбор Договора/Уточняющего соглашения
  // откуда вызвали: 1 - договора 2 - соглашение 4 - календарный план
  cgOfpDog_Dogovor    =  1;
  cgOfpDog_AppDogovor =  2;
  cgOfpDog_CalPlan    = 32; // bdrip3.VPP
                                     // откуда вызвали:
                                     // 1 - договора
                                     // 2 - соглашение
                                     // 4 - календарный план товарный
                                     // 16 - календарный план финансовый
                                     // 32 - календарный план все
  //-------------------------------------------------------
  // Настройка отчетов
  //-------------------------------------------------------
  // валюта
  cgOfpRepVal_Nde = 0; // НДЕ
  cgOfpRepVal_Tar = 1; // валюта отчетов
  cgOfpRepVal_Def = 2; // другая (выбранная) валюта

  //----------------------------------------------------------------------------
  // параметры для интерфейса OfpAvailableDocs
  cgPlPorForOFP   = 1; // документы, из которых доступно создание ФО

  //----------------------------------------------------------------------------
  // параметры для фильтра по признаку исполнения финобязательства
  fsALL   = 0;   // все
  fsNO    = 1;   // отсуттвует
  fsOK    = 2;   // присутствует
  fsFORM  = 3;   // сформировано на всю сумму
  fsOPL   = 4;   // оплачено на всю сумму
  fsNOOPL = 5;   // не оплачено
  fsCH    = 9;   // частично исполнено
  //----------------------------------------------------------------------------
  // параметры для фильтра по признаку исполнения финобязательства для СЗО
  fsNO_SZO  = 6;   // неоплаченные
  fsCH_SZO  = 7;   // частично оплаченные
  fsOK_SZO  = 8;   // оплаченные полностью

  //----------------------------------------------------------------------------
  // признак включения в реестры платежей
  prRPNo     = 0; // заявка не включена в реестр платежей
  prRPOkAll  = 1; // заявка полностью (на всю сумму) включена в реестры платежей. Реестры, из которых заявка была исключена, не учитываются.
  prRPOk     = 2; // заявка включена в реестры платежей частично, т.е. не на всю сумму заявки. Реестры, из которых заявка была исключена, не учитываются.
  prRPIskAll = 3; // заявка исключена из реестра (т.е. заявка была исключена из всех рее-стров, в которые изначально входила).
  prRPIsk    = 4; // заявка исключена только из последнего реестра (при условии, что за-явка включалась в несколько реестров).
  prRPUtvAll = 5; // заявка утверждена полностью (на всю сумму). Т.е. сумма по заявкам на оплату, указанная в реестрах, которые имеют статус <утвержденный>, равна сумме самой заявки.
  prRPUtv    = 6; // последний реестр, в который была включена заявка на оплату, имеет статус <утвержденный>, но вся сумма заявки еще не утверждена.

  //----------------------------------------------------------------------------
  // для браузера ФО
  cgRP_No     = ''  ;
  cgRP_OkAll  = 'P' ;
  cgRP_Ok     = 'Pч';
  cgRP_IskAll = 'И' ;
  cgRP_Isk    = 'Ич';
  cgRP_UtvAll = 'У' ;
  cgRP_Utv    = 'Уч';

  //----------------------------------------------------------------------------
  // фильтр по признаку включения в реестры платежей
  fsRPAll    = 0; // все
  fsRPNo     = 1; // заявка не включена в реестр платежей
  fsRPOkAll  = 2; // заявка полностью (на всю сумму) включена в реестры платежей.
  fsRPOk     = 3; // заявка включена в реестры платежей частично, т.е. не на всю сумму заявки.
  fsRPIsk    = 4; // заявка исключена только из последнего реестра
  fsRPUtvAll = 5; // заявка утверждена полностью
  fsRPUtv    = 6; // не вся сумма заявки еще не утверждена.

  //----------------------------------------------------------------------------
  // основание для рассчета суммы заявки, налогов, ЦО ...
  cgNoReason            = 0; // основание не определено
  cgFakt_DO             = 1; // ДО
  cgFakt_PKP_Tov        = 2; // товарный ПКП
  cgFakt_PKP_Fin_Fakt   = 3; // финансовый ПКП "по факту"
  cgFakt_AppDogovor     = 4; // соглашение
  cgFakt_Dogovor        = 5; // договор
  cgAvans_DO            = 6; // ДО
  cgAvans_PKP_Fin_Avans = 7; // финансовый ПКП "аванс"

  //----------------------------------------------------------------------------
  // Формирование исполнения (найдена соответствующая)
  cgLinkXO    = 0;  // привязать
  cgCansXO    = 1;  // пропустить
  cgFormXO    = 2;  // формировать новую
  cgLinkAllXO = 3;  // привязать все
  cgCansAllXO = 4;  // пропустить все
  cgFormAllXO = 5;  // формировать новую для всех
  // Формирование исполнения (не найдена соответствующая)
  cgCans_XO    = 6; // пропустить
  cgForm_XO    = 7; // формировать новую
  cgCans_AllXO = 8; // пропустить все
  cgForm_AllXO = 9; // формировать новую для всех

  //----------------------------------------------------------------------------
  // константы для копирования ФОБ
  cgCopyFOB_All       = 524287;// Все поля
  cgCopyFOB_DateDoc   = 0;     // Планируемые сроки погашения
  cgCopyFOB_NoDoc     = 1;     // Номер
  cgCopyFOB_AktSum    = 2;     // Сводное ФОБ
  cgCopyFOB_AktGr     = 3;     // Группу ФОБ
  cgCopyFOB_Prior     = 4;     // Приоритет
  cgCopyFOB_NaznDoc   = 5;     // Назначение документа
  cgCopyFOB_NaznPlat  = 6;     // Назначение платежа
  cgCopyFOB_Dogovor   = 7;     // Договор, соглашение
  cgCopyFOB_CalPlan   = 8;     // ПКП
  cgCopyFOB_BaseDoc   = 9;     // ДО
  cgCopyFOB_DocReq    = 10;    // Заявка
  cgCopyFOB_KatOrg    = 11;    // Контрагент
  cgCopyFOB_Summa     = 12;    // Сумма
  cgCopyFOB_KatStroy  = 13;    // Объект строительства
  cgCopyFOB_CO        = 14;    // ЦО
  cgCopyFOB_Person    = 15;    // Куратор
  cgCopyFOB_Fop       = 16;    // Финансовые операции
  cgCopyFOB_StBud     = 17;    // Статьи бюджета
  cgCopyFOB_Attr      = 18;    // Внешние атрибуты и классификации

  //----------------------------------------------------------------------------
  // константы для копирования Заявок
  cgCopyREQ_All       = 32767; // Все поля
  cgCopyREQ_DateDoc   = 0;     // Планируемый срок платежа
  cgCopyREQ_NoDoc     = 1;     // Номер
  cgCopyREQ_Prior     = 2;     // Приоритет
  cgCopyREQ_NaznDoc   = 3;     // Назначение
  cgCopyREQ_Dogovor   = 4;     // Договор, соглашение
  cgCopyREQ_CalPlan   = 5;     // ПКП
  cgCopyREQ_BaseDoc   = 6;     // ДО
  cgCopyREQ_Credit    = 7;     // Кредит
  cgCopyREQ_KatOrg    = 8;     // Контрагент
  cgCopyREQ_Summa     = 9;     // Сумма
  cgCopyREQ_KatStroy  = 10;    // Объект строительства
  cgCopyREQ_CO        = 11;    // ЦО
  cgCopyREQ_Person    = 12;    // Куратор
  cgCopyREQ_StBud     = 13;    // Статьи бюджета
  cgCopyREQ_Attr      = 14;    // Внешние атрибуты и классификации

  //----------------------------------------------------------------------------
  // константы для поиска документов
  cgFind_First = 0; // с начала списка
  cgFind_Last  = 1; // с конца списка
  cgFind_Next  = 2; // от курсора вниз
  cgFind_Prev  = 4; // от курсора вверх

  //----------------------------------------------------------------------------
  // виды заявок на оплату
  cgDocReq_Fact  = 0; // регламентный
  cgDocReq_Avans = 1; // авансовый

  //----------------------------------------------------------------------------
  // виды деятельности заявок на оплату
  cgDocReq_PR  = 0; // производственная
  cgDocReq_HOZ = 1; // хозяйственная

  //----------------------------------------------------------------------------
  // виды договоров
  cgDog_NoVid  = 0; // не определен
  cgDog_Pr_All = 1; // прочие
  cgDog_Pr_SMP = 2; // СМР (производственная (инвестиционная деятельность))
  cgDog_Pr_MTR = 3; // МТР (производственная (инвестиционная деятельность))
  cgDog_Hoz    = 4; // хозяйственная деятельность

//----------------------------------------------------------------------------
// Тип платежного средства по умолчанию
  cgPayMean_Noncash = 0; // Безналичные деньги
  cgPayMean_Encash  = 1; // Наличные деньги
