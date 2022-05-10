//******************************************************************************
//                                                      (c) корпорация Галактика
// Галактика 8.10 - Логистика
// Заполнение таблиц в памяти по данным прототипа TOVN
//******************************************************************************

//******************************************************************************
// линк-форма, выполняющая связь с данными прототипа
.linkform 'FillTmpTbl' prototype is tovn
.NameInList 'Выгрузка данных из прототипа TOVN в FastReport'
.group 'FastReport'
.var
  recNakl     : TMPrnSoprNakl;
  recOrg      : TMPrnSoprOrg;
  recTTI      : TMPrnSoprTTI;
  recSpec     : TMPrnSoprSpNakl;
  recUsl      : TMPrnSoprUslNakl;
  recAttr     : TMPrnSoprAttr;
  recTTISp    : TMPrnSoprSpTTI;
#ifdef __PrnSoprFunMem__
  oPrnSoprFun : iPrnSoprFunMem;
#else
  oPrnSoprFun : iPrnSoprFun;
#end
.endvar
.create view MemTblSopr
from
  MPrnSoprNakl
, MPrnSoprOrg
, MPrnSoprTTI
, MPrnSoprSpNakl
, MPrnSoprUslNakl
, MPrnSoprAttr
, MPrnSoprSpTTI
;
!Очистка таблиц в памяти
.begin
  MemTblSopr.Delete All MPrnSoprNakl;
  MemTblSopr.Delete All MPrnSoprOrg;
  MemTblSopr.Delete All MPrnSoprTTI;
  MemTblSopr.Delete All MPrnSoprSpNakl;
  MemTblSopr.Delete All MPrnSoprUslNakl;
  MemTblSopr.Delete All MPrnSoprAttr;
  MemTblSopr.Delete All MPrnSoprSpTTI;
end.
.{
.begin


//******************************************************************************
! формирование MPrnSoprNakl
  ClearAdvRecord(recNakl);

  recNakl.KatSoprNRec        := накладная_нрек;
  recNakl.UNN                := unn_inn;
  recNakl.KolSpSopr          := количество_SpSopr;
  recNakl.TypeParentDoc      := тип_родительского_документа;
  recNakl.LicPost            := Лицензия_Поставщик;
  recNakl.LicGrouzOtp        := Лицензия_Грузоотправитель;
  recNakl.LicGrouzPol        := Лицензия_Грузополучатель;
  recNakl.LicPol             := Лицензия_Получатель;
  recNakl.LicPlat            := Лицензия_Плательщик;
  recNakl.LicZakPlat         := Лицензия_Заказчик_Плательщик;
  recNakl.grotp_gl_name      := Грузоотправитель_Головная_Орг_Наимен;
  recNakl.grpol_gl_name      := Грузополучатель_Головная_Орг_Наимен;
  recNakl.PriceList          := ПрейскурантЦен;
  recNakl.Director           := Директор;
  recNakl.DirectorTabNom     := Директор_ТабНом;
  recNakl.DirectorApp        := Директор_Должность;
  recNakl.GBuhName           := Главный_Бухгалтер;
  recNakl.GbuhNom            := Главный_Бухгалтер_ТабНом;
  recNakl.GbuhApp            := Главный_Бухгалтер_Должность;
  recNakl.KatSopr_NSopr      := Номер;
  recNakl.KatSopr_Descr      := ОператорЭВМ;
  recNakl.KatSopr_DescNum    := Номер_с_дескриптором;
  recNakl.KatSopr_UserField  := ПолеПользователя;
  recNakl.Dogovor_NoDoc      := Номер_Договора;
  recNakl.Dogovor_dDoc       := Дата_Договора;
  recNakl.Dogovor_NoDoc_Ext  := Номер_Договора_Ext;
  recNakl.KatSopr_dSopr      := Дата;
  recNakl.Day_KatSopr_dSopr  := ДатаДень;
  recNakl.Mon_KatSopr_dSopr  := ДатаМесяц;
  recNakl.Year_KatSopr_dSopr := ДатаГод;
  recNakl.KatSopr_dOpr       := Дата_Отгрузки;
  recNakl.KatSopr_nDover     := НомерДовер;
  recNakl.KatSopr_dDover     := ДатаДовер;
  recNakl.KatSopr_sDover     := ФИОДовер;
  recNakl.DovFIO_Name        := ДовЛицо;
  recNakl.DovFIO_Post        := ДовЛицоДолжность;
  recNakl.DovFIO_PasSer      := ДовЛицоПаспСерия;
  recNakl.DovFIO_PasNumb     := ДовЛицоПаспНомер;
  recNakl.DovFIO_WhereVid    := ДовЛицоПаспГде;
  recNakl.DovFIO_DatVid      := ДовЛицоПаспКогда;
  recNakl.DoverOrgName       := ОргДовер;
  recNakl.KatSopr_Name       := Назван_накладной;
  recNakl.KatPodr_Name       := Склад;
  recNakl.KatPodr_Addr       := Склад_Адрес;
  recNakl.KatPodrTo_Name     := Склад_Пол;
  recNakl.KatPodrTo_Addr     := Склад_Пол_Адрес;
  recNakl.KatMol_Name        := МОЛ;
  recNakl.MolTabNom          := Мол_ТабНом;
  recNakl.MolApp             := МолДолжность;
  recNakl.SkladBoss          := СкладРуководитель;
  recNakl.KatMolTo_Name      := МОЛ_Пол;
  recNakl.MolPolTabNom       := Мол_Пол_ТабНом;
  recNakl.MolPolApp          := МолДолжность_Пол;
  recNakl.SkladBossPol       := СкладРуководитель_Пол;
  recNakl.TXO_Name           := Назван_ТХО;
  recNakl.Class_OsnOtp       := Основание_отпуска;
  recNakl.Class_CelPriobr    := Цель_приобретения;
  recNakl.SchFact_NRec       := СчФакт_НРек;
  recNakl.SchFact_Num        := СчФакт_Номер;
  recNakl.BaseDoc_NoDoc      := Основание;
  recNakl.BaseDoc_DDoc       := ДатаОснования;
  recNakl.KatNazna_Name      := Назначение;
  recNakl.NZakaz_NoDoc       := НарядЗаказНомер;
  recNakl.NZakaz_DDoc        := НарядЗаказДата;
  recNakl.NakSymbol          := НакСимвол;
  recNakl.NacSymbol          := НацСимвол;
  recNakl.ValSymbol          := ВалСимвол;
  recNakl.CurseSpis          := Курс_списания;
  recNakl.Attr_SdalOptApp    := сдал_отправитель_должность;
  recNakl.Attr_SdalOptFIO    := сдал_отправитель;
  recNakl.Attr_OptRazApp     := отпуск_разрешил_должность;
  recNakl.Attr_OptRazFIO     := отпуск_разрешил;
  recNakl.Attr_OptRazApp2    := отпуск_разрешил_должность2;
  recNakl.Attr_OptRazFIO2    := отпуск_разрешил2;
  recNakl.Attr_OptRazApp3    := отпуск_разрешил_должность3;
  recNakl.Attr_OptRazFIO3    := отпуск_разрешил3;
  recNakl.Attr_Driver        := водитель;
  recNakl.Attr_Forw          := экспедитор;
  recNakl.Attr_MyAuto        := собственный_транспорт;
  recNakl.Attr_AutoName      := Автопредприятие_назв;
  recNakl.MetLoad_Name       := ТТН_ПунктП_Метод_2;
  recNakl.Attr_Auto          := автомобиль;
  recNakl.Attr_MetTrans      := способ_транспортировки;
  recNakl.Attr_KolEzd        := количество_ездок;
  recNakl.TranspUsl1         := транспортная_услуга_1;
  recNakl.TranspUsl2         := транспортная_услуга_2;
  recNakl.KatSopr_cVal       := Валюта_нрек;


//******************************************************************************
! формирование MPrnSoprTTI
  ClearAdvRecord(recTTI);
  recTTI.KatSoprNRec         := recNakl.KatSoprNRec;
  recTTI.MarKod              := ТТН_Маршрут_Код;
  recTTI.MarName             := ТТН_Маршрут_Имя;
  recTTI.MarSpKod            := ТТН_Маршрут_СпособТран_Код;
  recTTI.MarSpName           := ТТН_Маршрут_СпособТран_Имя;
  recTTI.MarRasst            := ТТН_Маршрут_Расст;
  recTTI.MarSpeed            := ТТН_Маршрут_Скорость;
  recTTI.SpeedKod            := ТТН_Скорость_Код;
  recTTI.SpeedName           := ТТН_Скорость_Имя;
  recTTI.SpeedMin            := ТТН_Скорость_Мин;
  recTTI.SpeedMax            := ТТН_Скорость_Макс;
  recTTI.Speed               := ТТН_Скорость;
  recTTI.BasisKod            := ТТН_Базис_Код;
  recTTI.BasisName           := ТТН_Базис_Имя;
  recTTI.SpOtgrKod           := ТТН_СпособОтгр_Код;
  recTTI.SpOtgrName          := ТТН_СпособОтгр_Имя;
  recTTI.SpOtgrBasisKod      := ТТН_СпособОтгр_Базис_Код;
  recTTI.SpOtgrBasisName     := ТТН_СпособОтгр_Базис_Имя;
  recTTI.SpTransKod          := ТТН_СпособОтгр_СпособТран_Код;
  recTTI.SpTransName         := ТТН_СпособОтгр_СпособТран_Имя;
  recTTI.PunktRNormRazgr     := ТТН_ПунктР_Норматив_Разгр;
  recTTI.PunktRNormMar       := ТТН_ПунктР_Расст_Маршрут;
  recTTI.PunktRName          := ТТН_ПунктР_Имя;
  recTTI.PunktRRasst         := ТТН_ПунктР_Расст;
  recTTI.PunktRCountryKod    := ТТН_ПунктР_СТРАНА_КОД;
  recTTI.PunktRCountryName   := ТТН_ПунктР_СТРАНА_ИМЯ;
  recTTI.PunktRCountryNal    := ТТН_ПунктР_СТРАНА_НАЛОГИ;
  recTTI.PunktRSityKod       := ТТН_ПунктР_ГОРОД_КОД;
  recTTI.PunktRSityName      := ТТН_ПунктР_ГОРОД_ИМЯ;
  recTTI.PunktRSityTel       := ТТН_ПунктР_ГОРОД_ТЕЛ;
  recTTI.PunktRSCountryKod   := ТТН_ПунктР_ГОРОД_СТРАНА_КОД;
  recTTI.PunktRSCountryName  := ТТН_ПунктР_ГОРОД_СТРАНА_ИМЯ;
  recTTI.PunktRSCountryNal   := ТТН_ПунктР_ГОРОД_СТРАНА_НАЛОГИ;
  recTTI.PunktRAddr          := ТТН_ПунктР_Адрес;
  recTTI.PunktRDateIn        := ТТН_ПунктР_Дата_С;
  recTTI.PunktRTimeIn        := ТТН_ПунктР_Время_С;
  recTTI.PunktRDateOut       := ТТН_ПунктР_Дата_По;
  recTTI.PunktRTimeOut       := ТТН_ПунктР_Время_По;
  recTTI.PunktRMet           := ТТН_ПунктР_Метод;
  recTTI.PunktRDopName       := ТТН_ПунктР_Доп_Имя;
  recTTI.PunktRDopKol        := ТТН_ПунктР_Доп_Колич;
  recTTI.PunktRDopTime       := ТТН_ПунктР_Доп_Время;
  recTTI.PunktPNormRazgr     := ТТН_ПунктП_Норматив_Погр;
  recTTI.PunktPNormMar       := ТТН_ПунктП_Расст_Маршрут;
  recTTI.PunktPName          := ТТН_ПунктП_Имя;
  recTTI.PunktPRasst         := ТТН_ПунктП_Расст;
  recTTI.PunktPCountryKod    := ТТН_ПунктП_СТРАНА_КОД;
  recTTI.PunktPCountryName   := ТТН_ПунктП_СТРАНА_ИМЯ;
  recTTI.PunktPCountryNal    := ТТН_ПунктП_СТРАНА_НАЛОГИ;
  recTTI.PunktPSityKod       := ТТН_ПунктП_ГОРОД_КОД;
  recTTI.PunktPSityName      := ТТН_ПунктП_ГОРОД_ИМЯ;
  recTTI.PunktPSityTel       := ТТН_ПунктП_ГОРОД_ТЕЛ;
  recTTI.PunktPSCountryKod   := ТТН_ПунктП_ГОРОД_СТРАНА_КОД;
  recTTI.PunktPSCountryName  := ТТН_ПунктП_ГОРОД_СТРАНА_ИМЯ;
  recTTI.PunktPSCountryNal   := ТТН_ПунктП_ГОРОД_СТРАНА_НАЛОГИ;
  recTTI.PunktPAddr          := ТТН_ПунктП_Адрес;
  recTTI.PunktPDateIn        := ТТН_ПунктП_Дата_С;
  recTTI.PunktPTimeIn        := ТТН_ПунктП_Время_С;
  recTTI.PunktPDateOut       := ТТН_ПунктП_Дата_По;
  recTTI.PunktPTimeOut       := ТТН_ПунктП_Время_По;
  recTTI.PunktPMet           := ТТН_ПунктП_Метод;
  recTTI.PunktPDopName       := ТТН_ПунктП_Доп_Имя;
  recTTI.PunktPDopKol        := ТТН_ПунктП_Доп_Колич;
  recTTI.PunktPDopTime       := ТТН_ПунктП_Доп_Время;
  recTTI.Summa               := ТТН_Сумма;
  recTTI.Val                 := ТТН_Валюта;
  recTTI.Putlst_Kformpl      := ТТН_ПЛист_Код;
  recTTI.Putlst_NPL          := ТТН_ПЛист_Номер;
  recTTI.Putlst_Nseria       := ТТН_ПЛист_Серия;
  recTTI.Putlst_Nomer        := ТТН_ПЛист_ГосНомер;
  recTTI.Putlst_DatPl        := ТТН_ПЛист_ДатаВыдачи;
  recTTI.Putlst_ExitDn       := ТТН_ПЛист_ДатаВыезда;
  recTTI.Putlst_ReturnDn     := ТТН_ПЛист_ДатаВозврата;
  recTTI.TTNDoc_sPList       := ТТН_Номер_ПЛист;
  recTTI.KnDriver_TABN       := ТТН_Водитель_Табель;
  recTTI.KnDriver_Name       := ТТН_Водитель_Имя;
  recTTI.KnDriver_Klassv     := ТТН_Водитель_Класс;
  recTTI.KnDriver_KatgA      := ТТН_Водитель_КатA;
  recTTI.KnDriver_KatgB      := ТТН_Водитель_КатB;
  recTTI.KnDriver_KatgC      := ТТН_Водитель_КатC;
  recTTI.KnDriver_KatgD      := ТТН_Водитель_КатD;
  recTTI.KnDriver_KatgE      := ТТН_Водитель_КатE;
  recTTI.KnDriver_StagVd     := ТТН_Водитель_Стаж;
  recTTI.KnDriver_Nudov      := ТТН_Водитель_НомерУдост;
  recTTI.KnForwarder_TABN    := ТТН_Экспедитор_Табель;
  recTTI.KnForwarder_Name    := ТТН_Экспедитор_Имя;
  recTTI.KnForwarder_Klassv  := ТТН_Экспедитор_Класс;
  recTTI.KnForwarder_KatgA   := ТТН_Экспедитор_КатA;
  recTTI.KnForwarder_KatgB   := ТТН_Экспедитор_КатB;
  recTTI.KnForwarder_KatgC   := ТТН_Экспедитор_КатC;
  recTTI.KnForwarder_KatgD   := ТТН_Экспедитор_КатD;
  recTTI.KnForwarder_KatgE   := ТТН_Экспедитор_КатE;
  recTTI.KnForwarder_StagVd  := ТТН_Экспедитор_Стаж;
  recTTI.KnForwarder_Nudov   := ТТН_Экспедитор_НомерУдост;
  recTTI.Transp_Nomer        := ТТН_Авто_Номер;
  recTTI.Transp_Marka        := ТТН_Авто_Марка;
  recTTI.Transp_Volume       := ТТН_Авто_ОбъемЦ;
  recTTI.Transp_Passport     := ТТН_Авто_НомерТС;
  recTTI.Transp_nPassp       := ТТН_Авто_НомерЦ;
  recTTI.Transp_INNUM        := ТТН_Авто_ИнвНомер;
  recTTI.Transp_Godv         := ТТН_Авто_ДатаВыпуска;
  recTTI.Transp_GarNom       := ТТН_Авто_НомерГараж;
  recTTI.Transp_Nomdvig      := ТТН_Авто_НомерДвигатель;
  recTTI.Transp_Nomchas      := ТТН_Авто_НомерШасси;
  recTTI.Transp_ForceLs      := ТТН_Авто_МощностьЛС;
  recTTI.Transp_NomKuz       := ТТН_Авто_НомерКузов;
  recTTI.Transp_GruzPod      := ТТН_Авто_Груз;
  recTTI.Transp_Weight       := ТТН_Авто_Вес;
  recTTI.Transp1_Nomer       := ТТН_Прицеп1_Номер;
  recTTI.Transp1_Marka       := ТТН_Прицеп1_Марка;
  recTTI.Transp1_Volume      := ТТН_Прицеп1_ОбъемЦ;
  recTTI.Transp1_Passport    := ТТН_Прицеп1_НомерТС;
  recTTI.Transp1_nPassp      := ТТН_Прицеп1_НомерЦ;
  recTTI.Transp1_INNUM       := ТТН_Прицеп1_ИнвНомер;
  recTTI.Transp1_Godv        := ТТН_Прицеп1_ДатаВыпуска;
  recTTI.Transp1_GarNom      := ТТН_Прицеп1_НомерГараж;
  recTTI.Transp1_Nomdvig     := ТТН_Прицеп1_НомерДвигатель;
  recTTI.Transp1_Nomchas     := ТТН_Прицеп1_НомерШасси;
  recTTI.Transp1_ForceLs     := ТТН_Прицеп1_МощностьЛС;
  recTTI.Transp1_NomKuz      := ТТН_Прицеп1_НомерКузов;
  recTTI.Transp1_GruzPod     := ТТН_Прицеп1_Груз;
  recTTI.Transp1_Weight      := ТТН_Прицеп1_Вес;
  recTTI.Transp2_Nomer       := ТТН_Прицеп2_Номер;
  recTTI.Transp2_Marka       := ТТН_Прицеп2_Марка;
  recTTI.Transp2_Volume      := ТТН_Прицеп2_ОбъемЦ;
  recTTI.Transp2_Passport    := ТТН_Прицеп2_НомерТС;
  recTTI.Transp2_nPassp      := ТТН_Прицеп2_НомерЦ;
  recTTI.Transp2_INNUM       := ТТН_Прицеп2_ИнвНомер;
  recTTI.Transp2_Godv        := ТТН_Прицеп2_ДатаВыпуска;
  recTTI.Transp2_GarNom      := ТТН_Прицеп2_НомерГараж;
  recTTI.Transp2_Nomdvig     := ТТН_Прицеп2_НомерДвигатель;
  recTTI.Transp2_Nomchas     := ТТН_Прицеп2_НомерШасси;
  recTTI.Transp2_ForceLs     := ТТН_Прицеп2_МощностьЛС;
  recTTI.Transp2_NomKuz      := ТТН_Прицеп2_НомерКузов;
  recTTI.Transp2_GruzPod     := ТТН_Прицеп2_Груз;
  recTTI.Transp2_Weight      := ТТН_Прицеп2_Вес;
  recTTI.Transp3_Nomer       := ТТН_Прицеп3_Номер;
  recTTI.Transp3_Marka       := ТТН_Прицеп3_Марка;
  recTTI.Transp3_Volume      := ТТН_Прицеп3_ОбъемЦ;
  recTTI.Transp3_Passport    := ТТН_Прицеп3_НомерТС;
  recTTI.Transp3_nPassp      := ТТН_Прицеп3_НомерЦ;
  recTTI.Transp3_INNUM       := ТТН_Прицеп3_ИнвНомер;
  recTTI.Transp3_Godv        := ТТН_Прицеп3_ДатаВыпуска;
  recTTI.Transp3_GarNom      := ТТН_Прицеп3_НомерГараж;
  recTTI.Transp3_Nomdvig     := ТТН_Прицеп3_НомерДвигатель;
  recTTI.Transp3_Nomchas     := ТТН_Прицеп3_НомерШасси;
  recTTI.Transp3_ForceLs     := ТТН_Прицеп3_МощностьЛС;
  recTTI.Transp3_NomKuz      := ТТН_Прицеп3_НомерКузов;
  recTTI.Transp3_GruzPod     := ТТН_Прицеп3_Груз;
  recTTI.Transp3_Weight      := ТТН_Прицеп3_Вес;

  MemTblSopr.MPrnSoprTTI.Buffer := recTTI;
  MemTblSopr.Insert Current MPrnSoprTTI;

//------------------------------------------------------------------------------
! Атрибуты KatSopr
  ClearAdvRecord(recAttr);
  recAttr.KatSoprNRec         := recNakl.KatSoprNRec;
  recAttr.SpSoprNRec          := 0;
  recAttr.wTable              := coKatSopr;
  recAttr.AttrVal[1]          := атр1_нак;
  recAttr.AttrVal[2]          := атр2_нак;
  recAttr.AttrVal[3]          := атр3_нак;
  recAttr.AttrVal[4]          := атр4_нак;
  recAttr.AttrVal[5]          := атр5_нак;
  recAttr.AttrVal[6]          := атр6_нак;
  recAttr.AttrVal[7]          := атр7_нак;
  recAttr.AttrVal[8]          := атр8_нак;
  recAttr.AttrVal[9]          := атр9_нак;
  recAttr.AttrVal[10]         := атр10_нак;

  MemTblSopr.MPrnSoprAttr.Buffer := recAttr;
  MemTblSopr.Insert Current MPrnSoprAttr;

//------------------------------------------------------------------------------
! Атрибуты KatOrg
  ClearAdvRecord(recAttr);
  recAttr.KatSoprNRec         := recNakl.KatSoprNRec;
  recAttr.SpSoprNRec          := 0;
  recAttr.wTable              := coKatOrg;
  recAttr.AttrVal[1]          := атр1_пол;
  recAttr.AttrVal[2]          := атр2_пол;
  recAttr.AttrVal[3]          := атр3_пол;
  recAttr.AttrVal[4]          := атр4_пол;
  recAttr.AttrVal[5]          := атр5_пол;
  recAttr.AttrVal[6]          := атр6_пол;
  recAttr.AttrVal[7]          := атр7_пол;
  recAttr.AttrVal[8]          := атр8_пол;
  recAttr.AttrVal[9]          := атр9_пол;
  recAttr.AttrVal[10]         := атр10_пол;

  MemTblSopr.MPrnSoprAttr.Buffer := recAttr;
  MemTblSopr.Insert Current MPrnSoprAttr;


//------------------------------------------------------------------------------
! Атрибуты TTNDOC
  ClearAdvRecord(recAttr);
  recAttr.KatSoprNRec         := recNakl.KatSoprNRec;
  recAttr.SpSoprNRec          := 0;
  recAttr.wTable              := coTtnDoc;
  recAttr.AttrVal[1]          := атр1_тти;
  recAttr.AttrVal[2]          := атр2_тти;
  recAttr.AttrVal[3]          := атр3_тти;
  recAttr.AttrVal[4]          := атр4_тти;
  recAttr.AttrVal[5]          := атр5_тти;
  recAttr.AttrVal[6]          := атр6_тти;
  recAttr.AttrVal[7]          := атр7_тти;
  recAttr.AttrVal[8]          := атр8_тти;
  recAttr.AttrVal[9]          := атр9_тти;
  recAttr.AttrVal[10]         := атр10_тти;

  MemTblSopr.MPrnSoprAttr.Buffer := recAttr;
  MemTblSopr.Insert Current MPrnSoprAttr;


//------------------------------------------------------------------------------
! формирование MPrnSoprOrg
! Поставщик - 1
  ClearAdvRecord(recOrg);
  recOrg.KatSoprNRec         := recNakl.KatSoprNRec;
  recOrg.SpSoprNRec          := 0;
  recOrg.PrOrg               := 1;
  recOrg.KatOrg_Name         := Поставщик;
  recOrg.KatOrg_TipOrg       := ПоставщикКод;
  recOrg.KatOrg_Addr         := Поставщик_Адрес;
  recOrg.KatOrg_OKPO         := Поставщик_ОКПО;
  recOrg.KatOrg_OKONH        := Поставщик_ОКОНХ;
  recOrg.KatOrg_TEL          := Поставщик_ТЕЛ;
  recOrg.KatOrg_CONTAKT      := Поставщик_КонтИнф;
  recOrg.KatOrg_EMAIL        := Поставщик_Email;
  recOrg.PodrInfo_OKATO      := Поставщик_OKATO;
  recOrg.PodrInfo_KBK        := Поставщик_KBK;
  recOrg.PodrInfo_OGRN       := Поставщик_OGRN;
  recOrg.PodrInfo_REGNO      := Поставщик_РегНом_в_ПФ;
  recOrg.PodrInfo_POlE3      := Поставщик_РегНом_Страхователя;
  recOrg.PodrInfo_INSNA      := Поставщик_Орган_Исполн_Власти;
  recOrg.FormSobs_Name       := Поставщик_Форма_Собственности;
  recOrg.FormSobs_VidD       := Поставщик_Вид_Деятельности;
  recOrg.KatState_KOD        := Поставщик_СТАРАНА_КОД;
  recOrg.KatState_Name       := Поставщик_СТРАНА_ИМЯ;
  recOrg.KatState_IsNal      := Поставщик_СТРАНА_НАЛОГИ;
  recOrg.KatCity_KOD         := Поставщик_ГОРОД_КОД;
  recOrg.KatCity_Name        := Поставщик_ГОРОД_ИМЯ;
  recOrg.KatCity_TEL         := Поставщик_ГОРОД_ТЕЛ;
  recOrg.KatStateS_KOD       := Поставщик_ГОРОД_СТРАНА_КОД;
  recOrg.KatStateS_Name      := Поставщик_ГОРОД_СТРАНА_ИМЯ;
  recOrg.KatStateS_IsNal     := Поставщик_ГОРОД_СТРАНА_НАЛОГИ;
  recOrg.KatOrg_CorpoIn      := Поставщик_КОРПОРАЦИЯ;
  recOrg.KatOrg_UNN          := ПоставщикУНН;
  recOrg.KatOrg_KODPLAT      := ПоставщикКПП;
  recOrg.KatB_Name           := Поставщик_БАНК_Имя;
  recOrg.KatB_Remark         := Поставщик_БАНК_Коментарий;
  recOrg.KatB_Addr           := Поставщик_БАНК_Адрес;
  recOrg.KatB_MFO1           := Поставщик_БАНК_Мфо;
  recOrg.KatB_MFO2           := Поставщик_БАНК_Ркц;
  recOrg.KatB_Schet1         := Поставщик_БАНК_Счет;
  recOrg.KatB_Schet2         := Поставщик_БАНК_Счет_Ркц;
  recOrg.KatB_Schet3         := Поставщик_БАНК_Счет_Плат;
  recOrg.KatB_TipSchet       := Поставщик_БАНК_Тип_Счета;
  recOrg.KatB_Aktiv          := Поставщик_БАНК_Вид_Счета;
  recOrg.KatOrg_UrAddr       := Поставщик_ЮрАдрес;

  MemTblSopr.MPrnSoprOrg.Buffer := recOrg;
  MemTblSopr.Insert Current MPrnSoprOrg;

//******************************************************************************
! Грузоотправитель - 2
  ClearAdvRecord(recOrg);
  recOrg.KatSoprNRec         := recNakl.KatSoprNRec;
  recOrg.SpSoprNRec          := 0;
  recOrg.PrOrg               := 2;
  recOrg.KatOrg_Name         := Грузоотправитель;
  recOrg.KatOrg_TipOrg       := ГрузоотправительКод;
  recOrg.KatOrg_Addr         := Грузоотправитель_Адрес;
  recOrg.KatOrg_OKPO         := Грузоотправитель_ОКПО;
  recOrg.KatOrg_OKONH        := Грузоотправитель_ОКОНХ;
  recOrg.KatOrg_TEL          := Грузоотправитель_ТЕЛ;
  recOrg.KatOrg_CONTAKT      := Грузоотправитель_КонтИнф;
  recOrg.KatOrg_EMAIL        := Грузоотправитель_Email;
  recOrg.PodrInfo_OKATO      := Грузоотправитель_OKATO;
  recOrg.PodrInfo_KBK        := Грузоотправитель_KBK;
  recOrg.PodrInfo_OGRN       := Грузоотправитель_OGRN;
  recOrg.PodrInfo_REGNO      := Грузоотправитель_РегНом_в_ПФ;
  recOrg.PodrInfo_POlE3      := Грузоотправитель_РегНом_Страхователя;
  recOrg.PodrInfo_INSNA      := Грузоотправитель_Орган_Исполн_Власти;
  recOrg.FormSobs_Name       := Грузоотправитель_Форма_Собственности;
  recOrg.FormSobs_VidD       := Грузоотправитель_Вид_Деятельности;
  recOrg.KatState_KOD        := Грузоотправитель_СТАРАНА_КОД;
  recOrg.KatState_Name       := Грузоотправитель_СТРАНА_ИМЯ;
  recOrg.KatState_IsNal      := Грузоотправитель_СТРАНА_НАЛОГИ;
  recOrg.KatCity_KOD         := Грузоотправитель_ГОРОД_КОД;
  recOrg.KatCity_Name        := Грузоотправитель_ГОРОД_ИМЯ;
  recOrg.KatCity_TEL         := Грузоотправитель_ГОРОД_ТЕЛ;
  recOrg.KatStateS_KOD       := Грузоотправитель_ГОРОД_СТРАНА_КОД;
  recOrg.KatStateS_Name      := Грузоотправитель_ГОРОД_СТРАНА_ИМЯ;
  recOrg.KatStateS_IsNal     := Грузоотправитель_ГОРОД_СТРАНА_НАЛОГИ;
  recOrg.KatOrg_CorpoIn      := Грузоотправитель_КОРПОРАЦИЯ;
  recOrg.KatOrg_UNN          := oPrnSoprFun.GetOrgUNN(Грузоотправитель, ГрузоотправительУНН, ПоставщикУНН);
  recOrg.KatOrg_KODPLAT      := ГрузоотправительКПП;
  recOrg.KatB_Name           := Грузоотправитель_БАНК_Имя;
  recOrg.KatB_Remark         := Грузоотправитель_БАНК_Коментарий;
  recOrg.KatB_Addr           := Грузоотправитель_БАНК_Адрес;
  recOrg.KatB_MFO1           := Грузоотправитель_БАНК_Мфо;
  recOrg.KatB_MFO2           := Грузоотправитель_БАНК_Ркц;
  recOrg.KatB_Schet1         := Грузоотправитель_БАНК_Счет;
  recOrg.KatB_Schet2         := Грузоотправитель_БАНК_Счет_Ркц;
  recOrg.KatB_Schet3         := Грузоотправитель_БАНК_Счет_Плат;
  recOrg.KatB_TipSchet       := Грузоотправитель_БАНК_Тип_Счета;
  recOrg.KatB_Aktiv          := Грузоотправитель_БАНК_Вид_Счета;
  recOrg.KatOrg_UrAddr       := Грузоотправитель_ЮрАдрес;

  MemTblSopr.MPrnSoprOrg.Buffer := recOrg;
  MemTblSopr.Insert Current MPrnSoprOrg;


//******************************************************************************
! Грузополучатель - 3
  ClearAdvRecord(recOrg);
  recOrg.KatSoprNRec         := recNakl.KatSoprNRec;
  recOrg.SpSoprNRec          := 0;
  recOrg.PrOrg               := 3;
  recOrg.KatOrg_Name         := Грузополучатель;
  recOrg.KatOrg_TipOrg       := ГрузополучательКод;
  recOrg.KatOrg_Addr         := Грузополучатель_Адрес;
  recOrg.KatOrg_OKPO         := Грузополучатель_ОКПО;
  recOrg.KatOrg_OKONH        := Грузополучатель_ОКОНХ;
  recOrg.KatOrg_TEL          := Грузополучатель_ТЕЛ;
  recOrg.KatOrg_CONTAKT      := Грузополучатель_КонтИнф;
  recOrg.KatOrg_EMAIL        := Грузополучатель_Email;
  recOrg.PodrInfo_OKATO      := Грузополучатель_OKATO;
  recOrg.PodrInfo_KBK        := Грузополучатель_KBK;
  recOrg.PodrInfo_OGRN       := Грузополучатель_OGRN;
  recOrg.PodrInfo_REGNO      := Грузополучатель_РегНом_в_ПФ;
  recOrg.PodrInfo_POlE3      := Грузополучатель_РегНом_Страхователя;
  recOrg.PodrInfo_INSNA      := Грузополучатель_Орган_Исполн_Власти;
  recOrg.FormSobs_Name       := Грузополучатель_Форма_Собственности;
  recOrg.FormSobs_VidD       := Грузополучатель_Вид_Деятельности;
  recOrg.KatState_KOD        := Грузополучатель_СТАРАНА_КОД;
  recOrg.KatState_Name       := Грузополучатель_СТРАНА_ИМЯ;
  recOrg.KatState_IsNal      := Грузополучатель_СТРАНА_НАЛОГИ;
  recOrg.KatCity_KOD         := Грузополучатель_ГОРОД_КОД;
  recOrg.KatCity_Name        := Грузополучатель_ГОРОД_ИМЯ;
  recOrg.KatCity_TEL         := Грузополучатель_ГОРОД_ТЕЛ;
  recOrg.KatStateS_KOD       := Грузополучатель_ГОРОД_СТРАНА_КОД;
  recOrg.KatStateS_Name      := Грузополучатель_ГОРОД_СТРАНА_ИМЯ;
  recOrg.KatStateS_IsNal     := Грузополучатель_ГОРОД_СТРАНА_НАЛОГИ;
  recOrg.KatOrg_CorpoIn      := Грузополучатель_КОРПОРАЦИЯ;
  recOrg.KatOrg_UNN          := oPrnSoprFun.GetOrgUNN(Грузополучатель, ГрузополучательУНН, ПоставщикУНН);
  recOrg.KatOrg_KODPLAT      := ГрузополучательКПП;
  recOrg.KatB_Name           := Грузополучатель_БАНК_Имя;
  recOrg.KatB_Remark         := Грузополучатель_БАНК_Коментарий;
  recOrg.KatB_Addr           := Грузополучатель_БАНК_Адрес;
  recOrg.KatB_MFO1           := Грузополучатель_БАНК_Мфо;
  recOrg.KatB_MFO2           := Грузополучатель_БАНК_Ркц;
  recOrg.KatB_Schet1         := Грузополучатель_БАНК_Счет;
  recOrg.KatB_Schet2         := Грузополучатель_БАНК_Счет_Ркц;
  recOrg.KatB_Schet3         := Грузополучатель_БАНК_Счет_Плат;
  recOrg.KatB_TipSchet       := Грузополучатель_БАНК_Тип_Счета;
  recOrg.KatB_Aktiv          := Грузополучатель_БАНК_Вид_Счета;
  recOrg.KatOrg_UrAddr       := Грузополучатель_ЮрАдрес;

  MemTblSopr.MPrnSoprOrg.Buffer := recOrg;
  MemTblSopr.Insert Current MPrnSoprOrg;

//******************************************************************************
! Получатель - 4
  ClearAdvRecord(recOrg);
  recOrg.KatSoprNRec         := recNakl.KatSoprNRec;
  recOrg.SpSoprNRec          := 0;
  recOrg.PrOrg               := 4;
  recOrg.KatOrg_Name         := Получатель;
  recOrg.KatOrg_TipOrg       := ПолучательКод;
  recOrg.KatOrg_Addr         := Получатель_Адрес;
  recOrg.KatOrg_OKPO         := Получатель_ОКПО;
  recOrg.KatOrg_OKONH        := Получатель_ОКОНХ;
  recOrg.KatOrg_TEL          := Получатель_ТЕЛ;
  recOrg.KatOrg_CONTAKT      := Получатель_КонтИнф;
  recOrg.KatOrg_EMAIL        := Получатель_Email;
  recOrg.PodrInfo_OKATO      := Получатель_OKATO;
  recOrg.PodrInfo_KBK        := Получатель_KBK;
  recOrg.PodrInfo_OGRN       := Получатель_OGRN;
  recOrg.PodrInfo_REGNO      := Получатель_РегНом_в_ПФ;
  recOrg.PodrInfo_POlE3      := Получатель_РегНом_Страхователя;
  recOrg.PodrInfo_INSNA      := Получатель_Орган_Исполн_Власти;
  recOrg.FormSobs_Name       := Получатель_Форма_Собственности;
  recOrg.FormSobs_VidD       := Получатель_Вид_Деятельности;
  recOrg.KatState_KOD        := Получатель_СТАРАНА_КОД;
  recOrg.KatState_Name       := Получатель_СТРАНА_ИМЯ;
  recOrg.KatState_IsNal      := Получатель_СТРАНА_НАЛОГИ;
  recOrg.KatCity_KOD         := Получатель_ГОРОД_КОД;
  recOrg.KatCity_Name        := Получатель_ГОРОД_ИМЯ;
  recOrg.KatCity_TEL         := Получатель_ГОРОД_ТЕЛ;
  recOrg.KatStateS_KOD       := Получатель_ГОРОД_СТРАНА_КОД;
  recOrg.KatStateS_Name      := Получатель_ГОРОД_СТРАНА_ИМЯ;
  recOrg.KatStateS_IsNal     := Получатель_ГОРОД_СТРАНА_НАЛОГИ;
  recOrg.KatOrg_CorpoIn      := Получатель_КОРПОРАЦИЯ;
  recOrg.KatOrg_UNN          := ПолучательУНН;
  recOrg.KatOrg_KODPLAT      := ПолучательКПП;
  recOrg.KatB_Name           := Получатель_БАНК_Имя;
  recOrg.KatB_Remark         := Получатель_БАНК_Коментарий;
  recOrg.KatB_Addr           := Получатель_БАНК_Адрес;
  recOrg.KatB_MFO1           := Получатель_БАНК_Мфо;
  recOrg.KatB_MFO2           := Получатель_БАНК_Ркц;
  recOrg.KatB_Schet1         := Получатель_БАНК_Счет;
  recOrg.KatB_Schet2         := Получатель_БАНК_Счет_Ркц;
  recOrg.KatB_Schet3         := Получатель_БАНК_Счет_Плат;
  recOrg.KatB_TipSchet       := Получатель_БАНК_Тип_Счета;
  recOrg.KatB_Aktiv          := Получатель_БАНК_Вид_Счета;
  recOrg.KatOrg_UrAddr       := Получатель_ЮрАдрес;

  MemTblSopr.MPrnSoprOrg.Buffer := recOrg;
  MemTblSopr.Insert Current MPrnSoprOrg;

//******************************************************************************
! Плательщик - 5
  ClearAdvRecord(recOrg);
  recOrg.KatSoprNRec         := recNakl.KatSoprNRec;
  recOrg.SpSoprNRec          := 0;
  recOrg.PrOrg               := 5;
  recOrg.KatOrg_Name         := Плательщик;
  recOrg.KatOrg_TipOrg       := ПлательщикКод;
  recOrg.KatOrg_Addr         := Плательщик_Адрес;
  recOrg.KatOrg_OKPO         := Плательщик_ОКПО;
  recOrg.KatOrg_OKONH        := Плательщик_ОКОНХ;
  recOrg.KatOrg_TEL          := Плательщик_ТЕЛ;
  recOrg.KatOrg_CONTAKT      := Плательщик_КонтИнф;
  recOrg.KatOrg_EMAIL        := Плательщик_Email;
  recOrg.PodrInfo_OKATO      := Плательщик_OKATO;
  recOrg.PodrInfo_KBK        := Плательщик_KBK;
  recOrg.PodrInfo_OGRN       := Плательщик_OGRN;
  recOrg.PodrInfo_REGNO      := Плательщик_РегНом_в_ПФ;
  recOrg.PodrInfo_POlE3      := Плательщик_РегНом_Страхователя;
  recOrg.PodrInfo_INSNA      := Плательщик_Орган_Исполн_Власти;
  recOrg.FormSobs_Name       := Плательщик_Форма_Собственности;
  recOrg.FormSobs_VidD       := Плательщик_Вид_Деятельности;
  recOrg.KatState_KOD        := Плательщик_СТАРАНА_КОД;
  recOrg.KatState_Name       := Плательщик_СТРАНА_ИМЯ;
  recOrg.KatState_IsNal      := Плательщик_СТРАНА_НАЛОГИ;
  recOrg.KatCity_KOD         := Плательщик_ГОРОД_КОД;
  recOrg.KatCity_Name        := Плательщик_ГОРОД_ИМЯ;
  recOrg.KatCity_TEL         := Плательщик_ГОРОД_ТЕЛ;
  recOrg.KatStateS_KOD       := Плательщик_ГОРОД_СТРАНА_КОД;
  recOrg.KatStateS_Name      := Плательщик_ГОРОД_СТРАНА_ИМЯ;
  recOrg.KatStateS_IsNal     := Плательщик_ГОРОД_СТРАНА_НАЛОГИ;
  recOrg.KatOrg_CorpoIn      := Плательщик_КОРПОРАЦИЯ;
  recOrg.KatOrg_UNN          := ПлательщикУНН;
  recOrg.KatOrg_KODPLAT      := ПлательщикКПП;
  recOrg.KatB_Name           := Плательщик_БАНК_Имя;
  recOrg.KatB_Remark         := Плательщик_БАНК_Коментарий;
  recOrg.KatB_Addr           := Плательщик_БАНК_Адрес;
  recOrg.KatB_MFO1           := Плательщик_БАНК_Мфо;
  recOrg.KatB_MFO2           := Плательщик_БАНК_Ркц;
  recOrg.KatB_Schet1         := Плательщик_БАНК_Счет;
  recOrg.KatB_Schet2         := Плательщик_БАНК_Счет_Ркц;
  recOrg.KatB_Schet3         := Плательщик_БАНК_Счет_Плат;
  recOrg.KatB_TipSchet       := Плательщик_БАНК_Тип_Счета;
  recOrg.KatB_Aktiv          := Плательщик_БАНК_Вид_Счета;
  recOrg.KatOrg_UrAddr       := Плательщик_ЮрАдрес;

  MemTblSopr.MPrnSoprOrg.Buffer := recOrg;
  MemTblSopr.Insert Current MPrnSoprOrg;


//******************************************************************************
! Заказчик_Плательщик - 6
  ClearAdvRecord(recOrg);
  recOrg.KatSoprNRec         := recNakl.KatSoprNRec;
  recOrg.SpSoprNRec          := 0;
  recOrg.PrOrg               := 6;
  recOrg.KatOrg_Name         := Заказчик_Плательщик;
  recOrg.KatOrg_TipOrg       := Заказчик_ПлательщикКод;
  recOrg.KatOrg_Addr         := Заказчик_Плательщик_Адрес;
  recOrg.KatOrg_OKPO         := Заказчик_Плательщик_ОКПО;
  recOrg.KatOrg_OKONH        := Заказчик_Плательщик_ОКОНХ;
  recOrg.KatOrg_TEL          := Заказчик_Плательщик_ТЕЛ;
  recOrg.KatOrg_CONTAKT      := Заказчик_Плательщик_КонтИнф;
  recOrg.KatOrg_EMAIL        := Заказчик_Плательщик_Email;
  recOrg.PodrInfo_OKATO      := Заказчик_Плательщик_OKATO;
  recOrg.PodrInfo_KBK        := Заказчик_Плательщик_KBK;
  recOrg.PodrInfo_OGRN       := Заказчик_Плательщик_OGRN;
  recOrg.PodrInfo_REGNO      := Заказчик_Плательщик_РегНом_в_ПФ;
  recOrg.PodrInfo_POlE3      := Заказчик_Плательщик_РегНом_Страхователя;
  recOrg.PodrInfo_INSNA      := Заказчик_Плательщик_Орган_Исполн_Власти;
  recOrg.FormSobs_Name       := Заказчик_Плательщик_Форма_Собственности;
  recOrg.FormSobs_VidD       := Заказчик_Плательщик_Вид_Деятельности;
  recOrg.KatState_KOD        := Заказчик_Плательщик_СТАРАНА_КОД;
  recOrg.KatState_Name       := Заказчик_Плательщик_СТРАНА_ИМЯ;
  recOrg.KatState_IsNal      := Заказчик_Плательщик_СТРАНА_НАЛОГИ;
  recOrg.KatCity_KOD         := Заказчик_Плательщик_ГОРОД_КОД;
  recOrg.KatCity_Name        := Заказчик_Плательщик_ГОРОД_ИМЯ;
  recOrg.KatCity_TEL         := Заказчик_Плательщик_ГОРОД_ТЕЛ;
  recOrg.KatStateS_KOD       := Заказчик_Плательщик_ГОРОД_СТРАНА_КОД;
  recOrg.KatStateS_Name      := Заказчик_Плательщик_ГОРОД_СТРАНА_ИМЯ;
  recOrg.KatStateS_IsNal     := Заказчик_Плательщик_ГОРОД_СТРАНА_НАЛОГИ;
  recOrg.KatOrg_CorpoIn      := Заказчик_Плательщик_КОРПОРАЦИЯ;
  recOrg.KatOrg_UNN          := oPrnSoprFun.GetOrgUNN(Заказчик_Плательщик, Заказчик_ПлательщикУНН, ПоставщикУНН);
  recOrg.KatOrg_KODPLAT      := Заказчик_ПлательщикКПП;
  recOrg.KatB_Name           := Заказчик_Плательщик;
  recOrg.KatB_Remark         := Заказчик_Плательщик_БАНК_Коментарий;
  recOrg.KatB_Addr           := Заказчик_Плательщик_БАНК_Адрес;
  recOrg.KatB_MFO1           := Заказчик_Плательщик_БАНК_Мфо;
  recOrg.KatB_MFO2           := Заказчик_Плательщик_БАНК_Ркц;
  recOrg.KatB_Schet1         := Заказчик_Плательщик_БАНК_Счет;
  recOrg.KatB_Schet2         := Заказчик_Плательщик_БАНК_Счет_Ркц;
  recOrg.KatB_Schet3         := Заказчик_Плательщик_БАНК_Счет_Плат;
  recOrg.KatB_TipSchet       := Заказчик_Плательщик_БАНК_Тип_Счета;
  recOrg.KatB_Aktiv          := Заказчик_Плательщик_БАНК_Вид_Счета;
  recOrg.KatOrg_UrAddr       := Заказчик_Плательщик_ЮрАдрес;

  MemTblSopr.MPrnSoprOrg.Buffer := recOrg;
  MemTblSopr.Insert Current MPrnSoprOrg;


//******************************************************************************
! ТТН_АвтоОрг - 7
  ClearAdvRecord(recOrg);
  recOrg.KatSoprNRec         := recNakl.KatSoprNRec;
  recOrg.SpSoprNRec          := 0;
  recOrg.PrOrg               := 7;
  recOrg.KatOrg_Name         := ТТН_АвтоОрг_Имя;
  recOrg.KatOrg_TipOrg       := ТТН_АвтоОрг_Тип;
  recOrg.KatOrg_Addr         := ТТН_АвтоОрг_Адрес;
  recOrg.KatOrg_OKPO         := ТТН_АвтоОрг_ОКПО;
  recOrg.KatOrg_OKONH        := ТТН_АвтоОрг_ОКОНХ;
  recOrg.KatOrg_TEL          := ТТН_АвтоОрг_ТЕЛ;
  recOrg.KatOrg_CONTAKT      := ТТН_АвтоОрг_КонтИнф;
  recOrg.KatOrg_EMAIL        := ТТН_АвтоОрг_Email;
  recOrg.PodrInfo_OKATO      := ТТН_АвтоОрг_OKATO;
  recOrg.PodrInfo_KBK        := ТТН_АвтоОрг_KBK;
  recOrg.PodrInfo_OGRN       := ТТН_АвтоОрг_OGRN;
  recOrg.PodrInfo_REGNO      := ТТН_АвтоОрг_РегНом_в_ПФ;
  recOrg.PodrInfo_POlE3      := ТТН_АвтоОрг_РегНом_Страхователя;
  recOrg.PodrInfo_INSNA      := ТТН_АвтоОрг_Орган_Исполн_Власти;
  recOrg.FormSobs_Name       := ТТН_АвтоОрг_Форма_Собственности;
  recOrg.FormSobs_VidD       := ТТН_АвтоОрг_Вид_Деятельности;
  recOrg.KatState_KOD        := ТТН_АвтоОрг_СТРАНА_КОД;
  recOrg.KatState_Name       := ТТН_АвтоОрг_СТРАНА_ИМЯ;
  recOrg.KatState_IsNal      := ТТН_АвтоОрг_СТРАНА_НАЛОГИ;
  recOrg.KatCity_KOD         := ТТН_АвтоОрг_ГОРОД_КОД;
  recOrg.KatCity_Name        := ТТН_АвтоОрг_ГОРОД_ИМЯ;
  recOrg.KatCity_TEL         := ТТН_АвтоОрг_ГОРОД_ТЕЛ;
  recOrg.KatStateS_KOD       := ТТН_АвтоОрг_ГОРОД_СТРАНА_КОД;
  recOrg.KatStateS_Name      := ТТН_АвтоОрг_ГОРОД_СТРАНА_ИМЯ;
  recOrg.KatStateS_IsNal     := ТТН_АвтоОрг_ГОРОД_СТРАНА_НАЛОГИ;
  recOrg.KatOrg_CorpoIn      := ТТН_АвтоОрг_КОРПОРАЦИЯ;
  recOrg.KatOrg_UNN          := ТТН_АвтоОрг_УНН;
  recOrg.KatOrg_KODPLAT      := ТТН_АвтоОрг_КПП;
  recOrg.KatB_Name           := ТТН_АвтоОрг_БАНК_Имя;
  recOrg.KatB_Remark         := ТТН_АвтоОрг_БАНК_Комментарий;
  recOrg.KatB_Addr           := ТТН_АвтоОрг_БАНК_Адрес;
  recOrg.KatB_MFO1           := ТТН_АвтоОрг_БАНК_Мфо;
  recOrg.KatB_MFO2           := ТТН_АвтоОрг_БАНК_Ркц;
  recOrg.KatB_Schet1         := ТТН_АвтоОрг_БАНК_Счет;
  recOrg.KatB_Schet2         := ТТН_АвтоОрг_БАНК_Счет_Ркц;
  recOrg.KatB_Schet3         := ТТН_АвтоОрг_БАНК_Счет_Плат;
  recOrg.KatB_TipSchet       := ТТН_АвтоОрг_БАНК_Тип_Счета;
  recOrg.KatB_Aktiv          := ТТН_АвтоОрг_БАНК_Вид_Счета;
  recOrg.KatOrg_UrAddr       := '';

  MemTblSopr.MPrnSoprOrg.Buffer := recOrg;
  MemTblSopr.Insert Current MPrnSoprOrg;



//******************************************************************************
! ТТН_ПунктР_Орг - 8
  ClearAdvRecord(recOrg);
  recOrg.KatSoprNRec         := recNakl.KatSoprNRec;
  recOrg.SpSoprNRec          := 0;
  recOrg.PrOrg               := 8;
  recOrg.KatOrg_Name         := ТТН_ПунктР_Орг_Имя;
  recOrg.KatOrg_TipOrg       := ТТН_ПунктР_Орг_Тип;
  recOrg.KatOrg_Addr         := ТТН_ПунктР_Орг_Адрес;
  recOrg.KatOrg_OKPO         := ТТН_ПунктР_Орг_ОКПО;
  recOrg.KatOrg_OKONH        := ТТН_ПунктР_Орг_ОКОНХ;
  recOrg.KatOrg_TEL          := ТТН_ПунктР_Орг_ТЕЛ;
  recOrg.KatOrg_CONTAKT      := ТТН_ПунктР_Орг_КонтИнф;
  recOrg.KatOrg_EMAIL        := ТТН_ПунктР_Орг_Email;
  recOrg.PodrInfo_OKATO      := ТТН_ПунктР_Орг_OKATO;
  recOrg.PodrInfo_KBK        := ТТН_ПунктР_Орг_KBK;
  recOrg.PodrInfo_OGRN       := ТТН_ПунктР_Орг_OGRN;
  recOrg.PodrInfo_REGNO      := ТТН_ПунктР_Орг_РегНом_в_ПФ;
  recOrg.PodrInfo_POlE3      := ТТН_ПунктР_Орг_РегНом_Страхователя;
  recOrg.PodrInfo_INSNA      := ТТН_ПунктР_Орг_Орган_Исполн_Власти;
  recOrg.FormSobs_Name       := ТТН_ПунктР_Орг_Форма_Собственности;
  recOrg.FormSobs_VidD       := ТТН_ПунктР_Орг_Вид_Деятельности;
  recOrg.KatState_KOD        := ТТН_ПунктР_Орг_СТРАНА_КОД;
  recOrg.KatState_Name       := ТТН_ПунктР_Орг_СТРАНА_ИМЯ;
  recOrg.KatState_IsNal      := ТТН_ПунктР_Орг_СТРАНА_НАЛОГИ;
  recOrg.KatCity_KOD         := ТТН_ПунктР_Орг_ГОРОД_КОД;
  recOrg.KatCity_Name        := ТТН_ПунктР_Орг_ГОРОД_ИМЯ;
  recOrg.KatCity_TEL         := ТТН_ПунктР_Орг_ГОРОД_ТЕЛ;
  recOrg.KatStateS_KOD       := ТТН_ПунктР_Орг_ГОРОД_СТРАНА_КОД;
  recOrg.KatStateS_Name      := ТТН_ПунктР_Орг_ГОРОД_СТРАНА_ИМЯ;
  recOrg.KatStateS_IsNal     := ТТН_ПунктР_Орг_ГОРОД_СТРАНА_НАЛОГИ;
  recOrg.KatOrg_CorpoIn      := ТТН_ПунктР_Орг_КОРПОРАЦИЯ;
  recOrg.KatOrg_UNN          := ТТН_ПунктР_Орг_УНН;
  recOrg.KatOrg_KODPLAT      := ТТН_ПунктР_Орг_КПП;
  recOrg.KatB_Name           := ТТН_ПунктР_Орг_БАНК_Имя;
  recOrg.KatB_Remark         := ТТН_ПунктР_Орг_БАНК_Комментарий;
  recOrg.KatB_Addr           := ТТН_ПунктР_Орг_БАНК_Адрес;
  recOrg.KatB_MFO1           := ТТН_ПунктР_Орг_БАНК_Мфо;
  recOrg.KatB_MFO2           := ТТН_ПунктР_Орг_БАНК_Ркц;
  recOrg.KatB_Schet1         := ТТН_ПунктР_Орг_БАНК_Счет;
  recOrg.KatB_Schet2         := ТТН_ПунктР_Орг_БАНК_Счет_Ркц;
  recOrg.KatB_Schet3         := ТТН_ПунктР_Орг_БАНК_Счет_Плат;
  recOrg.KatB_TipSchet       := ТТН_ПунктР_Орг_БАНК_Тип_Счета;
  recOrg.KatB_Aktiv          := ТТН_ПунктР_Орг_БАНК_Вид_Счета;
  recOrg.KatOrg_UrAddr       := '';

  MemTblSopr.MPrnSoprOrg.Buffer := recOrg;
  MemTblSopr.Insert Current MPrnSoprOrg;


//******************************************************************************
! ТТН_ПунктП_Орг - 9
  ClearAdvRecord(recOrg);
  recOrg.KatSoprNRec         := recNakl.KatSoprNRec;
  recOrg.SpSoprNRec          := 0;
  recOrg.PrOrg               := 9;
  recOrg.KatOrg_Name         := ТТН_ПунктП_Орг_Имя;
  recOrg.KatOrg_TipOrg       := ТТН_ПунктП_Орг_Тип;
  recOrg.KatOrg_Addr         := ТТН_ПунктП_Орг_Адрес;
  recOrg.KatOrg_OKPO         := ТТН_ПунктП_Орг_ОКПО;
  recOrg.KatOrg_OKONH        := ТТН_ПунктП_Орг_ОКОНХ;
  recOrg.KatOrg_TEL          := ТТН_ПунктП_Орг_ТЕЛ;
  recOrg.KatOrg_CONTAKT      := ТТН_ПунктП_Орг_КонтИнф;
  recOrg.KatOrg_EMAIL        := ТТН_ПунктП_Орг_Email;
  recOrg.PodrInfo_OKATO      := ТТН_ПунктП_Орг_OKATO;
  recOrg.PodrInfo_KBK        := ТТН_ПунктП_Орг_KBK;
  recOrg.PodrInfo_OGRN       := ТТН_ПунктП_Орг_OGRN;
  recOrg.PodrInfo_REGNO      := ТТН_ПунктП_Орг_РегНом_в_ПФ;
  recOrg.PodrInfo_POlE3      := ТТН_ПунктП_Орг_РегНом_Страхователя;
  recOrg.PodrInfo_INSNA      := ТТН_ПунктП_Орг_Орган_Исполн_Власти;
  recOrg.FormSobs_Name       := ТТН_ПунктП_Орг_Форма_Собственности;
  recOrg.FormSobs_VidD       := ТТН_ПунктП_Орг_Вид_Деятельности;
  recOrg.KatState_KOD        := ТТН_ПунктП_Орг_СТРАНА_КОД;
  recOrg.KatState_Name       := ТТН_ПунктП_Орг_СТРАНА_ИМЯ;
  recOrg.KatState_IsNal      := ТТН_ПунктП_Орг_СТРАНА_НАЛОГИ;
  recOrg.KatCity_KOD         := ТТН_ПунктП_Орг_ГОРОД_КОД;
  recOrg.KatCity_Name        := ТТН_ПунктП_Орг_ГОРОД_ИМЯ;
  recOrg.KatCity_TEL         := ТТН_ПунктП_Орг_ГОРОД_ТЕЛ;
  recOrg.KatStateS_KOD       := ТТН_ПунктП_Орг_ГОРОД_СТРАНА_КОД;
  recOrg.KatStateS_Name      := ТТН_ПунктП_Орг_ГОРОД_СТРАНА_ИМЯ;
  recOrg.KatStateS_IsNal     := ТТН_ПунктП_Орг_ГОРОД_СТРАНА_НАЛОГИ;
  recOrg.KatOrg_CorpoIn      := ТТН_ПунктП_Орг_КОРПОРАЦИЯ;
  recOrg.KatOrg_UNN          := ТТН_ПунктП_Орг_УНН;
  recOrg.KatOrg_KODPLAT      := ТТН_ПунктП_Орг_КПП;
  recOrg.KatB_Name           := ТТН_ПунктП_Орг_БАНК_Имя;
  recOrg.KatB_Remark         := ТТН_ПунктП_Орг_БАНК_Комментарий;
  recOrg.KatB_Addr           := ТТН_ПунктП_Орг_БАНК_Адрес;
  recOrg.KatB_MFO1           := ТТН_ПунктП_Орг_БАНК_Мфо;
  recOrg.KatB_MFO2           := ТТН_ПунктП_Орг_БАНК_Ркц;
  recOrg.KatB_Schet1         := ТТН_ПунктП_Орг_БАНК_Счет;
  recOrg.KatB_Schet2         := ТТН_ПунктП_Орг_БАНК_Счет_Ркц;
  recOrg.KatB_Schet3         := ТТН_ПунктП_Орг_БАНК_Счет_Плат;
  recOrg.KatB_TipSchet       := ТТН_ПунктП_Орг_БАНК_Тип_Счета;
  recOrg.KatB_Aktiv          := ТТН_ПунктП_Орг_БАНК_Вид_Счета;
  recOrg.KatOrg_UrAddr       := '';

  MemTblSopr.MPrnSoprOrg.Buffer := recOrg;
  MemTblSopr.Insert Current MPrnSoprOrg;
end.
.if tovn01
.end
.if tovn02
.end
.{
.begin
//******************************************************************************
! формирование MPrnSoprSpNakl
! Спецификация
  ClearAdvRecord(recSpec);
  recSpec.KatSoprNRec         := recNakl.KatSoprNRec;
  recSpec.SpSoprNRec          := спецификацияМЦ_нрек;
  recSpec.PrMc                := Признак_МЦ;
  recSpec.Npp                 := Номер_пп;
  recSpec.NVEND               := ТНВЭД;
  recSpec.ResName             := Ресурс_хранения;
  recSpec.GroupKod            := код_группы;
  recSpec.GroupName           := название_группы;
#ifdef _TOVN_DEI
  recSpec.MCFullName          := ДлНазвание;
#end
  recSpec.MCKod               := КодМЦ;
  recSpec.MCName              := Название;
  recSpec.DopInfo             := Дополнительная_информация;
  recSpec.GrouzKod            := КодГруза;
  recSpec.GrouzClass          := КлассГруза;
  recSpec.StroyObj            := Объект_строительства;
  recSpec.StZatr              := Статья_затрат;
  recSpec.ExciseMark          := акцизные_марки;
  recSpec.CustomSolution      := таможенные_разрешения;
  recSpec.CountryIn           := страна_ввоза;
  recSpec.GigienReg           := удост_госгигиен_регистрации;
  recSpec.RNakl               := Pнакладная;
  recSpec.Descr               := Дескриптор_рнакладной;
  recSpec.RDescr              := Рнакладная_с_дескриптором;
  recSpec.KoefGodn            := Коэффициент_годности;
  recSpec.VhodProc            := Вход_процент;
  recSpec.IshodProc           := Исход_процент;
  recSpec.StrSkidka           := Скидка_Надбавка_cтрока;
  recSpec.ZavCena             := Завод_Цена;
  recSpec.ZavCenaOtp          := Завод_Цена_Отп;
  recSpec.ZavCenaNak          := Завод_ЦенаНак;
  recSpec.ZavCenaNakOtp       := Завод_ЦенаНак_Отп;
  recSpec.ZavCenaVal          := Завод_ЦенаВал;
  recSpec.ZavCenaValOtp       := Завод_ЦенаВал_Отп;
  recSpec.GrMKol              := КОЛ_ГРУЗОВЫХ_МЕСТ;
  recSpec.GrMEd               := ЕД_ИЗМЕРЕНИЯ_ГРУЗОВЫХ_МЕСТ;
  recSpec.GrMKoef             := КОЭФФИЦИЕНТ_ГРУЗОВЫХ_МЕСТ;
  recSpec.KolOneGrM           := KolOneGrM;
  recSpec.McPrim              := KatMC_примечание;
  recSpec.McNote              := ПримМЦ;
  recSpec.OtpEd               := ОтпЕд;
  recSpec.OtpEdKod            := ОтпЕд_Код;
  recSpec.MaxProcNac          := МаксПроцНаценки;
  recSpec.MassaMC             := МассаМЦ;
  recSpec.MassaTar            := МассаТарыМЦ;
  recSpec.MCVolume            := ОбъемМЦ;
  recSpec.MCSizeX             := SizeX;
  recSpec.MCSizeY             := SizeY;
  recSpec.MCSizeZ             := SizeZ;
  recSpec.UthEd               := УчЕд;
  recSpec.KolDO               := КолДО;
  recSpec.KolF                := КолФ;
  recSpec.StrKolF             := стр_КолФ;
  recSpec.KolOpl              := КолОпл;
  recSpec.ProcUb              := ПроцУб;
  recSpec.KolUth              := КолУч;
  recSpec.KolVes              := КолВес;
  recSpec.KolOb               := КолОб;
  recSpec.KolBrak             := Брак;
  recSpec.KolBoy              := Бой;
  recSpec.CNak                := ЦНак;
  recSpec.CNac                := ЦНац;
  recSpec.CVal                := ЦВал;
  recSpec.CNakUth             := ЦНакУч;
  recSpec.CNacUth             := ЦНацУч;
  recSpec.CValUth             := ЦВалУч;
  recSpec.StNak               := СтНак;
  recSpec.StOpl               := СтОпл;
  recSpec.StNac               := СтНац;
  recSpec.StVal               := СтВал;
  recSpec.Nalog1              := Налог1Р;
  recSpec.Nalog1V             := Налог1В;
  recSpec.Nalog2              := Налог2Р;
  recSpec.Nalog2V             := Налог2В;
  recSpec.Nalog3              := Налог3Р;
  recSpec.Nalog3V             := Налог3В;
  recSpec.Nalog4              := Налог4Р;
  recSpec.Nalog4V             := Налог4В;
  recSpec.Nalog5              := Налог5Р;
  recSpec.Nalog5V             := Налог5В;
  recSpec.Nalog6              := Налог6Р;
  recSpec.Nalog6V             := Налог6В;
  recSpec.NalogOth            := Налог_прочие_Р;
  recSpec.NalogOthV           := Налог_прочие_В;
  recSpec.CNakBN              := ЦНакБН;
  recSpec.CNacBN              := ЦНацБН;
  recSpec.CValBN              := ЦВалБН;
  recSpec.CNakBNUth           := ЦНакБНУч;
  recSpec.CNacBNUth           := ЦНацБНУч;
  recSpec.CValBNUth           := ЦВалБНУч;
  recSpec.CNakSN              := ЦНакСН;
  recSpec.CNacSN              := ЦНацСН;
  recSpec.CValSN              := ЦВалСН;
  recSpec.CNakSNUth           := ЦНакСНУч;
  recSpec.CNacSNUth           := ЦНацСНУч;
  recSpec.CValSNUth           := ЦВалСНУч;
  recSpec.PrNDS               := ПризнакНДС;
  recSpec.StNDS               := ставка_первого_налога;
  recSpec.CNDSNak             := ЦНДСНак;
  recSpec.CExciseNak          := ЦАкцизНак;
  recSpec.CProdNak            := ЦНПродНак;
  recSpec.CNalNak             := ЦНАЛНак;
  recSpec.CNDSNac             := ЦНДСНац;
  recSpec.CExciseNac          := ЦАкцизНац;
  recSpec.CNProdNac           := ЦНПродНац;
  recSpec.CNalNac             := ЦНАЛНац;
  recSpec.CNDSVal             := ЦНДСВал;
  recSpec.CExiseVal           := ЦАкцизВал;
  recSpec.CNProdVal           := ЦНПродВал;
  recSpec.CNalVal             := ЦНАЛВал;
  recSpec.StNakBN             := СтНакБН;
  recSpec.StNacBN0            := СтНацБН0;
  recSpec.StValBN             := СтВалБН;
  recSpec.StNakSN             := СтНакСН;
  recSpec.StNacSN0            := СтНацСН0;
  recSpec.StValSN             := СтВалСН;
  recSpec.StNDSNak            := СтНДСНак;
  recSpec.StExciseNak         := СтАкцизНак;
  recSpec.StNProdNak          := СтНПродНак;
  recSpec.StNalNak            := СтНАЛНак;
  recSpec.StNDSNac0           := СтНДСНац0;
  recSpec.StExciseNac         := СтАкцизНац;
  recSpec.StNProdNac          := СтНПродНац;
  recSpec.StNalNac            := СтНАЛНац;
  recSpec.StNDSVal            := СтНДСВал;
  recSpec.StExciseVal         := СтАкцизВал;
  recSpec.StNProdVal          := СтНПродВал;
  recSpec.StNalVal            := СтНАЛВал;
  recSpec.CenaDO              := ЦенаДО;
  recSpec.SummaDO             := СуммаДО;
  recSpec.Kol_DO              := Кол_ДО;
  recSpec.Kol_DOOpl           := Кол_ДО_Опл;
  recSpec.ProcNDS             := ПрНДС;
  recSpec.ProcExcise          := ПрАкциз;
  recSpec.ProcNProd           := ПрНПрод;
  recSpec.ProcNal             := ПрНАЛ;
  recSpec.Volume              := Объем;
  recSpec.Plotn               := Плотность;
  recSpec.Temper              := Температура;
  recSpec.GroupParty          := Группа_Партии;
  recSpec.PartyName           := Партия;
  recSpec.PartyPrim           := KatParty_примечание;
  recSpec.PartyZavCena        := Цена_изготовителяНац;
  recSpec.PartyZavCenaV       := Цена_изготовителяВалНак;
  recSpec.GrouzDoc            := с_грузом_след_док;
  recSpec.GrouzDocDop         := с_грузом_след_док_доп;
  recSpec.GrouzDocDop2        := с_грузом_след_док_доп2;
  recSpec.CertNomer           := Номер_сертификата;
  recSpec.CertDate            := Дата_сертификата;
  recSpec.CertWho             := Ктовыдал_сертификат;
  recSpec.PartyOrg            := Производитель_партии;
  recSpec.PartyCountry        := Страна_производителя_партии;
  recSpec.PartyAttr           := Атрибут_Партии_Число;
  recSpec.PartyDateAnaliz     := Дата_анализа;
  recSpec.PartyNumAnaliz      := Номер_анализа;
  recSpec.PartyVal            := Валюта_партии;
  recSpec.PartyKodVal         := КодВалюты_партии;
  recSpec.PartySrokGodn       := Срок_годности;
  recSpec.PartyTimeCreate     := Время_создания;
  recSpec.PartyTimeGodn       := Время_годности;
  recSpec.CenaOrd             := Цена_ордера_нац;
  recSpec.CenaOrdVal          := Цена_ордера_вал;
  recSpec.AltEd               := Альтернативная_единица_название;
  recSpec.AltEd2              := Альтернативная_единица_соотношение;
#ifdef _TOVN_DEI
  recSpec.DEIName             := ДЕИ_Наим;
  recSpec.DEIKol              := ДЕИ_Кол;
  recSpec.DEICena             := ДЕИ_Цена;
! Печать спецификации для ТТН
  recSpec.MCFullName2         := ДлНазвание2;
#end
  recSpec.MCName2             := Название2;
  recSpec.MCKod2              := КодМЦ2;
  recSpec.MCVolume2           := Объем2;
  recSpec.MCPlot2             := Плотность2;
  recSpec.KolF2               := КолФ2;
  recSpec.KolBrak2            := Брак2;
  recSpec.KolBoy2             := Бой2;
  recSpec.CNac2               := ЦНац2;
  recSpec.CNDSNac2            := ЦНДСНац2;
  recSpec.CNDSVal2            := ЦНДСВал2;
  recSpec.ProcNDS2            := ПрНДС2;
  recSpec.CExciseNac2         := ЦАкцизНац2;
  recSpec.CExciseVal2         := ЦАкцизВал2;
  recSpec.ProcExise2          := ПрАкциз2;
  recSpec.CNProdNac2          := ЦНПродНац2;
  recSpec.CNProdVal2          := ЦНПродВал2;
  recSpec.ProcNProd2          := ПрНПрод2;
  recSpec.StNac2              := СтНац2;
  recSpec.StNavOpl2           := СтНацОпл2;
  recSpec.StNacBN2            := СтНацБН2;
  recSpec.StNacBNOpl2         := СтНацБНОпл2;
  recSpec.StNacSN2            := СтНацCН2;
  recSpec.StNacSNOpl2         := СтНацCНОпл2;
  recSpec.StNalNac2           := СтНалНац2;
  recSpec.MassaMC2            := МассаМЦ2;
  recSpec.MassaTar2           := МассаТарыМЦ2;
  recSpec.KolUth2             := КолУч2;
  recSpec.KolOpl2             := КолОпл2;
  recSpec.OtpEdAbbr2          := ОтпЕдАббр2;
  recSpec.SpOprVes2           := СпособОпрВеса2;
  recSpec.CertNomer2          := Номер_сертификата2;
  recSpec.CertDate2           := Дата_сертификата2;
  recSpec.CertWho2            := Ктовыдал_сертификат2;
  recSpec.GigienReg2          := удост_госгигиен_регистрации2;
  recSpec.CustomSolution2     := таможенные_разрешения2;
  recSpec.ExciseMarkNode      := акцизные_марки_узел;
  recSpec.ExciseMark1         := акцизные_марки1;
  recSpec.ExciseMark2         := акцизные_марки2;
  recSpec.ExciseMark3         := акцизные_марки3;
  recSpec.ExciseMark4         := акцизные_марки4;
  recSpec.ExciseMark5         := акцизные_марки5;
  recSpec.ExciseMark6         := акцизные_марки6;
  recSpec.ExciseMark7         := акцизные_марки7;
  recSpec.ExciseMark8         := акцизные_марки8;
  recSpec.ExciseMark9         := акцизные_марки9;
  recSpec.ExciseMark10        := акцизные_марки10;
#ifdef _TOVN_DEI
  recSpec.DEIName2            := ДЕИ2_Наим;
  recSpec.DEIKol2             := ДЕИ2_Кол;
  recSpec.DEICena2            := ДЕИ2_Цена;
#end
  recSpec.sPrim               := sPrimechanie;
  recSpec.sPrimV              := sPrimechanieV;

  MemTblSopr.MPrnSoprSpNakl.Buffer := recSpec;
  MemTblSopr.Insert Current MPrnSoprSpNakl;

//------------------------------------------------------------------------------
! Атрибуты SpSopr
  ClearAdvRecord(recAttr);
  recAttr.KatSoprNRec         := 0;
  recAttr.SpSoprNRec          := recSpec.SpSoprNRec ;
  recAttr.wTable              := coSpSopr;
  recAttr.AttrVal[1]          := атр1_спц;
  recAttr.AttrVal[2]          := атр2_спц;
  recAttr.AttrVal[3]          := атр3_спц;
  recAttr.AttrVal[4]          := атр4_спц;
  recAttr.AttrVal[5]          := атр5_спц;
  recAttr.AttrVal[6]          := атр6_спц;
  recAttr.AttrVal[7]          := атр7_спц;
  recAttr.AttrVal[8]          := атр8_спц;
  recAttr.AttrVal[9]          := атр9_спц;
  recAttr.AttrVal[10]         := атр10_спц;

  MemTblSopr.MPrnSoprAttr.Buffer := recAttr;
  MemTblSopr.Insert Current MPrnSoprAttr;

//------------------------------------------------------------------------------
! Атрибуты KatMc
  ClearAdvRecord(recAttr);
  recAttr.KatSoprNRec         := 0;
  recAttr.SpSoprNRec          := recSpec.SpSoprNRec ;
  recAttr.wTable              := coKatMc;
  recAttr.AttrVal[1]          := атр1_МЦ;
  recAttr.AttrVal[2]          := атр2_МЦ;
  recAttr.AttrVal[3]          := атр3_МЦ;
  recAttr.AttrVal[4]          := атр4_МЦ;
  recAttr.AttrVal[5]          := атр5_МЦ;
  recAttr.AttrVal[6]          := атр6_МЦ;
  recAttr.AttrVal[7]          := атр7_МЦ;
  recAttr.AttrVal[8]          := атр8_МЦ;
  recAttr.AttrVal[9]          := атр9_МЦ;
  recAttr.AttrVal[10]         := атр10_МЦ;

  MemTblSopr.MPrnSoprAttr.Buffer := recAttr;

  MemTblSopr.Insert Current MPrnSoprAttr;


//------------------------------------------------------------------------------
! Атрибуты KatParty
  ClearAdvRecord(recAttr);

  recAttr.KatSoprNRec := 0;
  recAttr.SpSoprNRec  := recSpec.SpSoprNRec;
  recAttr.wTable      := coKatParty;
  recAttr.AttrVal[1]  := атр1_прт;
  recAttr.AttrVal[2]  := атр2_прт;
  recAttr.AttrVal[3]  := атр3_прт;
  recAttr.AttrVal[4]  := атр4_прт;
  recAttr.AttrVal[5]  := атр5_прт;
  recAttr.AttrVal[6]  := атр6_прт;
  recAttr.AttrVal[7]  := атр7_прт;
  recAttr.AttrVal[8]  := атр8_прт;
  recAttr.AttrVal[9]  := атр9_прт;
  recAttr.AttrVal[10] := атр10_прт;

  MemTblSopr.MPrnSoprAttr.Buffer := recAttr;

  MemTblSopr.Insert Current MPrnSoprAttr;

//------------------------------------------------------------------------------
!Формирование MPrnSoprSpTTI
  ClearAdvRecord(recTTISp);

  recTTISp.SpSoprNRec         := recSpec.SpSoprNRec;
  recTTISp.PunktRDateIn       := СпТТН_ПунктР_Дата_С;
  recTTISp.PunktRTimeIn       := СпТТН_ПунктР_Время_С;
  recTTISp.PunktRDateOut      := СпТТН_ПунктР_Дата_По;
  recTTISp.PunktRTimeOut      := СпТТН_ПунктР_Время_По;
  recTTISp.PunktRDopName      := СпТТН_ПунктР_Доп_Имя;
  recTTISp.PunktRDopKol       := СпТТН_ПунктР_Доп_Колич;
  recTTISp.PunktRDopTime      := СпТТН_ПунктР_Доп_Время;
  recTTISp.PunktPDateIn       := СпТТН_ПунктП_Дата_С;
  recTTISp.PunktPTimeIn       := СпТТН_ПунктП_Время_С;
  recTTISp.PunktPDateOut      := СпТТН_ПунктП_Дата_По;
  recTTISp.PunktPTimeOut      := СпТТН_ПунктП_Время_По;
  recTTISp.PunktPDopName      := СпТТН_ПунктП_Доп_Имя;
  recTTISp.PunktPDopKol       := СпТТН_ПунктП_Доп_Колич;
  recTTISp.PunktPDopTime      := СпТТН_ПунктП_Доп_Время;
  recTTISp.PunktRCountryNal   := СпТТН_НормаПогрузки;
  recTTISp.PunktRSityKod      := СпТТН_НормаРазгрузки;
  recTTISp.PunktRSityName     := СпТтнЖд_ЕдПодвСост_Имя;
  recTTISp.PunktRSityTel      := СпТтнЖд_ЕдПодвСост_Номер;
  recTTISp.PunktRSCountryKod  := СпТтнЖд_ЖдКвит_Номер;
  recTTISp.PunktRSCountryName := СпТтнЖд_ЖдТариф;
  recTTISp.PunktRSCountryNal  := СпТтнЖд_ЖдТариф_Вал;
  recTTISp.PunktRAddr         := СпТтнЖд_ЕдВеса;
  recTTISp.ZhDOprVes          := СпТтнЖд_СпособОпрВеса;
  recTTISp.ZhDNetto           := СпТтнЖд_ВесНетто;
  recTTISp.ZhDBrutto          := СпТтнЖд_ВесБрутто;
  recTTISp.ZhDResOtgr         := СпТтнЖд_РесОтгрузки;

  MemTblSopr.MPrnSoprSpTTI.Buffer := recTTISp;

  MemTblSopr.Insert Current MPrnSoprSpTTI;

//******************************************************************************
! СпПунктР_Орг - 10
  ClearAdvRecord(recOrg);

  recOrg.KatSoprNRec     := recNakl.KatSoprNRec;
  recOrg.SpSoprNRec      := recSpec.SpSoprNRec;
  recOrg.PrOrg           := 10;
  recOrg.KatOrg_Name     := СпТТН_ПунктР_Орг_Имя;
  recOrg.KatOrg_TipOrg   := СпТТН_ПунктР_Орг_Тип;
  recOrg.KatOrg_Addr     := СпТТН_ПунктР_Орг_Адрес;
  recOrg.KatOrg_OKPO     := СпТТН_ПунктР_Орг_ОКПО;
  recOrg.KatOrg_OKONH    := СпТТН_ПунктР_Орг_ОКОНХ;
  recOrg.KatOrg_TEL      := СпТТН_ПунктР_Орг_ТЕЛ;
  recOrg.KatOrg_CONTAKT  := СпТТН_ПунктР_Орг_КонтИнф;
  recOrg.KatOrg_EMAIL    := СпТТН_ПунктР_Орг_Email;
  recOrg.PodrInfo_OKATO  := СпТТН_ПунктП_Орг_OKATO;
  recOrg.PodrInfo_KBK    := СпТТН_ПунктП_Орг_KBK;
  recOrg.PodrInfo_OGRN   := СпТТН_ПунктП_Орг_OGRN;
  recOrg.PodrInfo_REGNO  := СпТТН_ПунктП_Орг_РегНом_в_ПФ;
  recOrg.PodrInfo_POlE3  := СпТТН_ПунктП_Орг_РегНом_Страхователя;
  recOrg.PodrInfo_INSNA  := СпТТН_ПунктП_Орг_Орган_Исполн_Власти;
  recOrg.FormSobs_Name   := СпТТН_ПунктП_Орг_Форма_Собственности;
  recOrg.FormSobs_VidD   := СпТТН_ПунктП_Орг_Вид_Деятельности;
  recOrg.KatState_KOD    := СпТТН_ПунктП_Орг_СТРАНА_КОД;
  recOrg.KatState_Name   := СпТТН_ПунктП_Орг_СТРАНА_ИМЯ;
  recOrg.KatState_IsNal  := СпТТН_ПунктП_Орг_СТРАНА_НАЛОГИ;
  recOrg.KatCity_KOD     := СпТТН_ПунктП_Орг_ГОРОД_КОД;
  recOrg.KatCity_Name    := СпТТН_ПунктП_Орг_ГОРОД_ИМЯ;
  recOrg.KatCity_TEL     := СпТТН_ПунктП_Орг_ГОРОД_ТЕЛ;
  recOrg.KatStateS_KOD   := СпТТН_ПунктП_Орг_ГОРОД_СТРАНА_КОД;
  recOrg.KatStateS_Name  := СпТТН_ПунктП_Орг_ГОРОД_СТРАНА_ИМЯ;
  recOrg.KatStateS_IsNal := СпТТН_ПунктП_Орг_ГОРОД_СТРАНА_НАЛОГИ;
  recOrg.KatOrg_CorpoIn  := СпТТН_ПунктП_Орг_КОРПОРАЦИЯ;
  recOrg.KatOrg_UNN      := СпТТН_ПунктП_Орг_УНН;
  recOrg.KatOrg_KODPLAT  := СпТТН_ПунктП_Орг_КПП;
  recOrg.KatB_Name       := СпТТН_ПунктП_Орг_БАНК_Имя;
  recOrg.KatB_Remark     := СпТТН_ПунктП_Орг_БАНК_Комментарий;
  recOrg.KatB_Addr       := СпТТН_ПунктП_Орг_БАНК_Адрес;
  recOrg.KatB_MFO1       := СпТТН_ПунктП_Орг_БАНК_Мфо;
  recOrg.KatB_MFO2       := СпТТН_ПунктП_Орг_БАНК_Ркц;
  recOrg.KatB_Schet1     := СпТТН_ПунктП_Орг_БАНК_Счет;
  recOrg.KatB_Schet2     := СпТТН_ПунктП_Орг_БАНК_Счет_Ркц;
  recOrg.KatB_Schet3     := СпТТН_ПунктП_Орг_БАНК_Счет_Плат;
  recOrg.KatB_TipSchet   := СпТТН_ПунктП_Орг_БАНК_Тип_Счета;
  recOrg.KatB_Aktiv      := СпТТН_ПунктП_Орг_БАНК_Вид_Счета;
  recOrg.KatOrg_UrAddr   := '';

  MemTblSopr.MPrnSoprOrg.Buffer := recOrg;

  MemTblSopr.Insert Current MPrnSoprOrg;

//******************************************************************************
! СпПунктП_Орг - 11
  ClearAdvRecord(recOrg);

  recOrg.KatSoprNRec     := recNakl.KatSoprNRec;
  recOrg.SpSoprNRec      := recSpec.SpSoprNRec;
  recOrg.PrOrg           := 11;
  recOrg.KatOrg_Name     := СпТТН_ПунктП_Орг_Имя;
  recOrg.KatOrg_TipOrg   := СпТТН_ПунктП_Орг_Тип;
  recOrg.KatOrg_Addr     := СпТТН_ПунктП_Орг_Адрес;
  recOrg.KatOrg_OKPO     := СпТТН_ПунктП_Орг_ОКПО;
  recOrg.KatOrg_OKONH    := СпТТН_ПунктП_Орг_ОКОНХ;
  recOrg.KatOrg_TEL      := СпТТН_ПунктП_Орг_ТЕЛ;
  recOrg.KatOrg_CONTAKT  := СпТТН_ПунктП_Орг_КонтИнф;
  recOrg.KatOrg_EMAIL    := СпТТН_ПунктП_Орг_Email;
  recOrg.PodrInfo_OKATO  := СпТТН_ПунктП_Орг_OKATO;
  recOrg.PodrInfo_KBK    := СпТТН_ПунктП_Орг_KBK;
  recOrg.PodrInfo_OGRN   := СпТТН_ПунктП_Орг_OGRN;
  recOrg.PodrInfo_REGNO  := СпТТН_ПунктП_Орг_РегНом_в_ПФ;
  recOrg.PodrInfo_POlE3  := СпТТН_ПунктП_Орг_РегНом_Страхователя;
  recOrg.PodrInfo_INSNA  := СпТТН_ПунктП_Орг_Орган_Исполн_Власти;
  recOrg.FormSobs_Name   := СпТТН_ПунктП_Орг_Форма_Собственности;
  recOrg.FormSobs_VidD   := СпТТН_ПунктП_Орг_Вид_Деятельности;
  recOrg.KatState_KOD    := СпТТН_ПунктП_Орг_СТРАНА_КОД;
  recOrg.KatState_Name   := СпТТН_ПунктП_Орг_СТРАНА_ИМЯ;
  recOrg.KatState_IsNal  := СпТТН_ПунктП_Орг_СТРАНА_НАЛОГИ;
  recOrg.KatCity_KOD     := СпТТН_ПунктП_Орг_ГОРОД_КОД;
  recOrg.KatCity_Name    := СпТТН_ПунктП_Орг_ГОРОД_ИМЯ;
  recOrg.KatCity_TEL     := СпТТН_ПунктП_Орг_ГОРОД_ТЕЛ;
  recOrg.KatStateS_KOD   := СпТТН_ПунктП_Орг_ГОРОД_СТРАНА_КОД;
  recOrg.KatStateS_Name  := СпТТН_ПунктП_Орг_ГОРОД_СТРАНА_ИМЯ;
  recOrg.KatStateS_IsNal := СпТТН_ПунктП_Орг_ГОРОД_СТРАНА_НАЛОГИ;
  recOrg.KatOrg_CorpoIn  := СпТТН_ПунктП_Орг_КОРПОРАЦИЯ;
  recOrg.KatOrg_UNN      := СпТТН_ПунктП_Орг_УНН;
  recOrg.KatOrg_KODPLAT  := СпТТН_ПунктП_Орг_КПП;
  recOrg.KatB_Name       := СпТТН_ПунктП_Орг_БАНК_Имя;
  recOrg.KatB_Remark     := СпТТН_ПунктП_Орг_БАНК_Комментарий;
  recOrg.KatB_Addr       := СпТТН_ПунктП_Орг_БАНК_Адрес;
  recOrg.KatB_MFO1       := СпТТН_ПунктП_Орг_БАНК_Мфо;
  recOrg.KatB_MFO2       := СпТТН_ПунктП_Орг_БАНК_Ркц;
  recOrg.KatB_Schet1     := СпТТН_ПунктП_Орг_БАНК_Счет;
  recOrg.KatB_Schet2     := СпТТН_ПунктП_Орг_БАНК_Счет_Ркц;
  recOrg.KatB_Schet3     := СпТТН_ПунктП_Орг_БАНК_Счет_Плат;
  recOrg.KatB_TipSchet   := СпТТН_ПунктП_Орг_БАНК_Тип_Счета;
  recOrg.KatB_Aktiv      := СпТТН_ПунктП_Орг_БАНК_Вид_Счета;
  recOrg.KatOrg_UrAddr   := '';

  MemTblSopr.MPrnSoprOrg.Buffer := recOrg;

  MemTblSopr.Insert Current MPrnSoprOrg;
end.
.}
.{ CHECKENTER TOVNUSL
.begin
//******************************************************************************
! формирование MPrnSoprNakl
  ClearAdvRecord(recUsl);

  recUsl.KatSoprNRec := recNakl.KatSoprNRec;
  recUsl.SpSoprNRec  := спецификацияУС_нрек;
  recUsl.UslName     := НазваниеУслуги;
  recUsl.UslKod      := КодУслуги;
  recUsl.OtpEd       := ОтпЕдИзмУслуги;
  recUsl.UthEd       := УчЕдИзмУслуги;
  recUsl.KoefOtpEd   := КоэфУслуги;
  recUsl.KolD        := КолДУслуги;
  recUsl.KolF        := КолФУслуги;
  recUsl.Cena        := ЦенаУслуги;
  recUsl.CenaVal     := ЦенаВалУслуги;
  recUsl.Nalog1      := У_Налог1Р;
  recUsl.NalogV1     := У_Налог1В;
  recUsl.Nalog2      := У_Налог2Р;
  recUsl.NalogV2     := У_Налог2В;
  recUsl.Nalog3      := У_Налог3Р;
  recUsl.NalogV3     := У_Налог3В;
  recUsl.Nalog4      := У_Налог4Р;
  recUsl.NalogV4     := У_Налог4В;
  recUsl.Nalog5      := У_Налог5Р;
  recUsl.NalogV5     := У_Налог5В;
  recUsl.Nalog6      := У_Налог6Р;
  recUsl.NalogV6     := У_Налог6В;
  recUsl.NalogOth    := У_Налог_прочие_Р;
  recUsl.NalogOthV   := У_Налог_прочие_В;
  recUsl.CNakBN      := У_ЦНакБН;
  recUsl.CNacBN      := У_ЦНацБН;
  recUsl.CValBN      := У_ЦВалБН;
  recUsl.CNakBNUth   := У_ЦНакБНУч;
  recUsl.CNacBNUth   := У_ЦНацБНУч;
  recUsl.CValBNUth   := У_ЦВалБНУч;
  recUsl.CNakSN      := У_ЦНакСН;
  recUsl.CNacSN      := У_ЦНацСН;
  recUsl.CValSN      := У_ЦВалСН;
  recUsl.CNakSNUth   := У_ЦНакСНУч;
  recUsl.CNacSNUth   := У_ЦНацСНУч;
  recUsl.CValSNUth   := У_ЦВалСНУч;
  recUsl.StNDS       := У_ставка_первого_налога;
  recUsl.CNDSNak     := У_ЦНДСНак;
  recUsl.CExciseNak  := У_ЦАкцизНак;
  recUsl.CNProdNak   := У_ЦНПродНак;
  recUsl.CNalNak     := У_ЦНАЛНак;
  recUsl.CNDSNac     := У_ЦНДСНац;
  recUsl.CExciseNac  := У_ЦАкцизНац;
  recUsl.CNProdNac   := У_ЦНПродНац;
  recUsl.CNalNac     := У_ЦНАЛНац;
  recUsl.CNDSVal     := У_ЦНДСВал;
  recUsl.CExciseVal  := У_ЦАкцизВал;
  recUsl.CNProdVal   := У_ЦНПродВал;
  recUsl.CNalVal     := У_ЦНАЛВал;
  recUsl.CStNakBN    := У_СтНакБН;
  recUsl.StNacBN     := У_СтНацБН;
  recUsl.StValBN     := У_СтВалБН;
  recUsl.StNakSN     := У_СтНакСН;
  recUsl.StNacSN     := У_СтНацСН;
  recUsl.StValSN     := У_СтВалСН;
  recUsl.StNDSNak    := У_СтНДСНак;
  recUsl.StExciseNak := У_СтАкцизНак;
  recUsl.StNProdNak  := У_СтНПродНак;
  recUsl.StNalNak    := У_СтНАЛНак;
  recUsl.StNDSNac    := У_СтНДСНац;
  recUsl.StExciseNac := У_СтАкцизНац;
  recUsl.StNProdNac  := У_СтНПродНац;
  recUsl.StNalNac    := У_СтНАЛНац;
  recUsl.StNDSVal    := У_СтНДСВал;
  recUsl.StExciseVal := У_СтАкцизВал;
  recUsl.StNProdVal  := У_СтНПродВал;
  recUsl.StNalVal    := У_СтНАЛВал;
  recUsl.ProcNDS     := У_ПрНДС;
  recUsl.ProcExcise  := У_ПрАкциз;
  recUsl.ProcNProd   := У_ПрНПрод;
  recUsl.ProcNal     := У_ПрНАЛ;
  recUsl.PartyName   := У_Партия;
  recUsl.StroyObj    := У_Объект_строительства;
  recUsl.StZatr      := У_Статья_затрат;

  MemTblSopr.MPrnSoprUslNakl.Buffer := recUsl;

  MemTblSopr.Insert Current MPrnSoprUslNakl;
end.
.}
.begin
//******************************************************************************
! продолжение формирования MPrnSoprNakl
  recNakl.StrAstNakSN1   := стр_АСтНакСН1;
  recNakl.bNalProd       := bNalProd;
  recNakl.bFixGrMC       := bFixGrMC;
  recNakl.bAutoGrM       := bAutoGrM;
  recNakl.TaraVoz        := TaraVoz;
  recNakl.ANaim          := АНаименований;
  recNakl.StrANaim       := стр_АНаименований;
  recNakl.AKolF          := АКолФ;
  recNakl.StrAKolf       := стр_АКолФ;
  recNakl.AKolUth        := АКолУч;
  recNakl.StrAKolUth     := стр_АКолУч;
  recNakl.AKolVes        := АКолВес;
  recNakl.StrAKolVes     := стр_АКолВес;
  recNakl.AKolOb         := АКолОб;
  recNakl.StrAKolOb      := стр_АКолОб;
  recNakl.AStNak         := АСтНак;
  recNakl.StrAStNak      := стр_АСтНак;
  recNakl.AStOpl         := АСтОпл;
  recNakl.StrAStOpl      := стр_АСтОпл;
  recNakl.AStNac         := АСтНац;
  recNakl.StrAStNac      := стр_АСтНац;
  recNakl.AStNacSDost    := АСтНацСДост;
  recNakl.StrAStNacSDost := стр_АСтНацСДост;
  recNakl.AStVal         := АСтВал;
  recNakl.StrAStVal      := стр_АСтВал;
  recNakl.AStNakBN       := АСтНакБН;
  recNakl.StrAStNakBN    := стр_АСтНакБН;
  recNakl.AStNacBN0      := АСтНацБН0;
  recNakl.StrAStNacBN    := стр_АСтНацБН;
  recNakl.AStValBN       := АСтВалБН;
  recNakl.StrAStValBN    := стр_АСтВалБН;
  recNakl.AStNakSN       := АСтНакСН;
  recNakl.StrAStNakSN    := стр_АСтНакСН;
  recNakl.AStNacSN0      := АСтНацСН0;
  recNakl.StrAStNacSN    := стр_АСтНацСН;
  recNakl.AStValSN       := АСтВалСН;
  recNakl.StrAStValSN    := стр_АСтВалСН;
  recNakl.ANDSNak        := АНДСНак;
  recNakl.StrANDSNak     := стр_АНДСНак;
  recNakl.AEciseNak      := ААкцизНак;
  recNakl.StrAEciseNak   := стр_ААкцизНак;
  recNakl.ANProdNak      := АНПродНак;
  recNakl.StrANProdNak   := стр_АНПродНак;
  recNakl.ANalNak        := АНАЛНак;
  recNakl.StrANalNak     := стр_АНАЛНак;
  recNakl.ANDSNac0       := АНДСНац0;
  recNakl.StrANDSNac     := стр_АНДСНац;
  recNakl.AEciseNac      := ААкцизНац;
  recNakl.StrAEciseNac   := стр_ААкцизНац;
  recNakl.ANProdNac      := АНПродНац;
  recNakl.StrANProdNac   := стр_АНПродНац;
  recNakl.ANalNac        := АНАЛНац;
  recNakl.StrANalNac     := стр_АНАЛНац;
  recNakl.ANDSVal        := АНДСВал;
  recNakl.StrANDSVal     := стр_АНДСВал;
  recNakl.AEciseVal      := ААкцизВал;
  recNakl.StrAEciseVal   := стр_ААкцизВал;
  recNakl.ANProdVal      := АНПродВал;
  recNakl.StrANProdVal   := стр_АНПродВал;
  recNakl.ANalVal        := АНАЛВал;
  recNakl.StrANalVal     := стр_АНАЛВал;
  recNakl.APrNDS         := АПрНДС;
  recNakl.APrEcise       := АПрАкциз;
  recNakl.APrNProd       := АПрНПрод;
  recNakl.APrNal         := АПрНАЛ;
  recNakl.Signer1        := Подписант1;
  recNakl.SignerApp1     := Подписант_Должность1;
  recNakl.Signer2        := Подписант2;
  recNakl.SignerApp2     := Подписант_Должность2;
  recNakl.Signer3        := Подписант3;
  recNakl.SignerApp3     := Подписант_Должность3;
  recNakl.Signer4        := Подписант4;
  recNakl.SignerApp4     := Подписант_Должность4;
  recNakl.Signer5        := Подписант5;
  recNakl.SignerApp5     := Подписант_Должность5;
  recNakl.AllDoc1        := все_документы1;
  recNakl.AllDoc2        := все_документы2;
  recNakl.AllDoc3        := все_документы3;
  recNakl.AllDoc4        := все_документы4;
  recNakl.AllDoc5        := все_документы5;
  recNakl.AllCert1       := все_сертификаты1;
  recNakl.AllCert2       := все_сертификаты2;
  recNakl.AllCert3       := все_сертификаты3;
  recNakl.AllCert4       := все_сертификаты4;
  recNakl.AllCert5       := все_сертификаты5;
  recNakl.sPrice         := все_прайслисты;
  recNakl.SpSymbol       := спецсимвол;

  MemTblSopr.MPrnSoprNakl.Buffer := recNakl;

  MemTblSopr.Insert Current MPrnSoprNakl;
end.
.{
.}
.}
.begin
  RunInterFace('PrnTovnForFastRep');
end.
.endform
