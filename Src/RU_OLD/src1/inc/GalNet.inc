//******************************************************************************
//                                                      (c) корпорация Галактика
// Галактика 7.12 - сборка
// Константы для сборки випов
//******************************************************************************

//------------------------------------------------------------------------------
#include PreDefs.inc
//------------------------------------------------------------------------------
#include galhelp.inc    // все хелп-константы
//------------------------------------------------------------------------------
#ifdef ComponentVersion
#include coConst.inc    // глобальные константы таблиц словаря
//#include coSysTbl.inc   // константы Атлантических таблиц (%Atlantis%Gen)
#end
//------------------------------------------------------------------------------
// глобальные константы
#include gloconst.inc
#include CommonC.inc    // все константы для сборки вип-ов
#include buhconst.inc
#include reports.inc    // Единая нумерация отчетов
#include kauconst.inc
#include regconst.inc
#include fpconst.inc
#include ofpconst.inc   // констраны "Платежного календаря"
#include taxes.inc      // константы "Ведения налоговых расчетов"
#include repTree.inc
#include Treenew.inc    // константы для объекта aTreeNew
#include KatDoc.inc     // Константы для типов документов
#include aPlPor.inc     // контсанты таблицы PlPor
#include FAConst.inc    // ФинАнализ
//------------------------------------------------------------------------------
#include Excel.inc      // константы Excel
#include Mark.inc       // константы команд пометки (разные для Atl 3.03 и 5.1)
#include galnet.ccm     // константы пользовательских команд
#include galnet.csc     // константы статус-строк Галактики
#include money.ccm      // пользовательские команды з/платы
#include money.csc      // константы статус-строк з/платы
#include galinc.adm     // Все константы административного контура
#include classes.inc    // Все константы административного контура
#include tunes.inc      // Новые настройки
#include pick.inc       // константы для Pick.wList

#ifNdef Gal8_1
#include MBPCommn.inc   // Константы "МБП" для общего использования
#include MBPConst.inc   // Константы "МБП"
#include SFOConst.inc   // Константы "Спецодежды"
#end

#include ieConst.inc
#include AsrConsts.inc
#include olap.inc

#ifdef GAL8_1
#include ieXMLConst.inc
#endif

#include staff.inc      // Константы "Кадров"
#include osnma.inc      // константы ОС и НМА
#include veksl.inc      // константы векселей
//------------------------------------------------------------------------------
// ASUP
#include tpp.inc
#include tpp.ccm
#include tpp.csc
#include tep.inc
#include tep.ccm
#include tep.csc
#include scmick.inc
//------------------------------------------------------------------------------
#include CompConst.inc
#include tppconst.inc
#ifNdef GAL8_1
#include fnconst.inc
#include cg.inc
#end
#include Control.inc
#include mnplan.inc
#include EvnLog.inc
#include JSGal.inc
#include Reserv.inc
//------------------------------------------------------------------------------
#include lifo.inc       // Константы склада
//------------------------------------------------------------------------------
#include remont.inc     // Remont
#include kutconst.inc   // Roznitsa
#include Bookings.inc   // Resource
#include FldColor.inc   // Colours
#include tpp_key.inc    // ТХО
#include galnet.cad     // Дескриминаторы абстрактных документов
#include getdocs.inc    // константы параметров вызова интерфейсов
#include TranspNalog.inc// налог на транспорт
//------------------------------------------------------------------------------
#include cfg_all.inc    // константы для использования конфигуратора
#include cfg_err.inc
//------------------------------------------------------------------------------
#include crm.inc        // CRM
#include obedsch.inc    // константы для интерфейса ObedSch
#include obedconst.inc  // константы для всех функций объединений
#include NalTunes.inc   // константы настроек работы с ДО и СФ (бухгалтерия)
#include NalogReg.inc   // Константы "Налоговых регистров"
//------------------------------------------------------------------------------
// константы для форматов Excel
// #include ExcelFormat.inc // Пока не решена проблемма 102.31867
//------------------------------------------------------------------------------
#include PLConsts.inc   //
//------------------------------------------------------------------------------
#include KursDate.inc   // Константы способа определения даты курса
//------------------------------------------------------------------------------
