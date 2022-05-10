//  ╔═════════════════════════════════════════════════════════════════════╗
//  ║    (c) 1997  Корпорация "ГАЛАКТИКА"                                 ║
//  ║      Проект:  "Галактика"                                           ║
//  ║      Система: "КАДРЫ"                                               ║
//  ║      Версия : 5.10                                                  ║
//  ║      Назначение:  Внутренние константы модуля Кадры                 ║
//  ║      Ответственный:  Московских А.М.                                ║
//  ║      Параметры:                                                     ║
//  ║      Изменения:                                                     ║
//  ╚═════════════════════════════════════════════════════════════════════╝

// номера списков в таблице AddrList
    alStaffKatPodrList   = 11;

// база данных
    icStaffWrkPersons    = 1; // только работающие
    icStaffDisPersons    = 2; // только уволенные из текущей базы
    icStaffWrkDisPersons = 3; // работающие + уволенные из текущей базы
    icStaffArcPersons    = 4; // только архив
    icStaffWrkArcPersons = 5; // работающие + архив
    icStaffDisArcPersons = 6; // уволенные из текущей базы + архив
    icStaffAllPersons    = 7; // вся картотека - текущая и архив

// для обработки стажей: варианты обработки
    ctStaffShowAllCat    = 10000; // показывать архив каталогов
    ctStaffStagRate      =     1; // редактируется коэффициент стажа
    ctStaffRaiseOpl      =     2; // редактируется код оплаты постоянных доплат

//***** ! менять нельзя, константы прописаны в базе !

// таблица стажей ServLen
    slStaffServLenCur       = 1;
    slStaffServLenOld       = 2;
    slStaffServLenArchCur   = 3;
    slStaffServLenArchOld   = 4;
    coStaffSuper            = 'MaslakovaPlusVasja99';


// коды модулей
    moStaff = 1;

// точки входа в каталоги
    epStaffCatRoot    =   1;
    epStaffOtherCats  =   2;  // Прочие каталоги
    epStaffDocunents  =   3;  // Виды документов
    epStaffJobCats    =   4;  // Служебные каталоги
    epStaffDepartment =  11;  // каталог подразделений (точка входа)
    epStaffServLen    =  19;  // Виды стажа
    epStaffSLCommon   =  61;  // Общий стаж
    epStaffSLCont     =  62;  // Непрерывный стаж для листа нетрудоспособности
    epStaffSLExper    =  63;  // Стаж по специальности
    epStaffSLNorth    =  64;  // Северный стаж
    epStaffSL13       =  65;  // Стаж для выслуги лет
    epStaffDStrah     = 501;  // Страховое свидетельство
    epStaffDPasspRus  = 502;  // Национальный паспорт
    epStaffDPasspFor  = 503;  // Загранпаспорт
    epStaffDPasspBel  = 504;  // Белорусский паспорт