/*
 ╔═══════════════════════════════════════════════════════════════════════════╗
 ║                     (c) 1994,97 корпорация ГАЛАКТИКА                      ║
 ║ Проект        : ГАЛАКТИКА                                                 ║
 ║ Система       : Спецодежда                                                ║
 ║ Версия        : 5.5                                                       ║
 ║ Назначение    : Константы, используемые в различных интерф "Спецодежды"   ║
 ║ Ответственный : Станевич Юрий                                             ║
 ╚═══════════════════════════════════════════════════════════════════════════╝
*/

Const

  CustDate = date(1, 11, 1992);
  MaxDate  = date(31, 12, 2100);

  cgRealNeed = 1;
  cgForShow  = 2;
  cgNormKol  = 4;

  // Количество параметров размеров одежды сотрудника,
  // которое может быть заведено и использовано в системе.
  MaxRazSFO   = 7; // В модуле Спецодежда
  MaxRazCtm   = 8; // В модуле Вещевое имущество

  rfUnConfReq = 0; // Флаги разнесенности требования на выдачу.
  rfConfReq   = 1;
  rfFrozenReq = 2;

  rfInHandle  = 1; // Признаки - требование разносится.
  rfNtHandle  = 0;

                   // Статусы Личных Карточек учета СФО.
  crdNormal   = 1; // Ведется
  crdClosed   = 0; // Закрыта
  crdMoving   = 2; // Перевод
  crdMoved    = 3; // Переведен

                 // Статусы выдач в ЛК.
  sfoInUse  = 0; // В носке
  sfoBacked = 1; // Возвращено
  sfoLost   = 2; // Утеряно
  sfoSpis   = 3; // Списано
  sfoCmps   = 4; // Выплачена компенсация
  sfoMove   = 5; // Передано другому работнику

  SizeDelim = '/';  // Пока что так

  sfoReqDoc = 1; // Типы документов СФО (соответствующие хозоперации - из МБП)
  sfoOutDoc = 2;
  sfoUvlDoc = 3;
  sfoRetDoc = 4;
  sfoAttDoc = 5;
  sfoReglSp = 6;
  sfoGrpOut = 7;
  sfoReqLst = 8;

//-------------------------------------------------------------------------
// Порядковые номера полей таблицы MBPOut для проверок корректности

  fldPersSFO_cPersCard =  1;
  fldPersSFO_cPersSpec =  2;
  fldPersSFO_cSpReqSFO =  3;
  fldPersSFO_cDocMBPIn =  4;
  fldPersSFO_cCurMBPIn =  5;
  fldPersSFO_cMBPOut   =  6;
  fldPersSFO_cMBPMove  =  7;
  fldPersSFO_cGroupSFO =  8;
  fldPersSFO_cKatMBP   =  9;
  fldPersSFO_cPersSFO  = 10;
  fldPersSFO_giveDate  = 11;
  fldPersSFO_operDate  = 12;
  fldPersSFO_giveNom   = 13;
  fldPersSFO_explDate  = 14;
  fldPersSFO_Srok      = 15;
  fldPersSFO_docKol    = 16;
  fldPersSFO_curKol    = 17;
  fldPersSFO_endDate   = 18;
  fldPersSFO_spisNom   = 19;
  fldPersSFO_specFlag  = 20;
  fldPersSFO_Status    = 21;
  fldPersSFO_cDopRec   = 22;

  PersSFOFld_Count = 22;

// end;
