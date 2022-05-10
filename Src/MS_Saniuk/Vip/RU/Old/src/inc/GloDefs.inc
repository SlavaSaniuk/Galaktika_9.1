//------------------------------------------------------------------------------
//                                                      (c) Корпорация ГАЛАКТИКА
//------------------------------------------------------------------------------
// Система       : ГАЛАКТИКА
// Версия        : 8.0
// Назначение    : Глобальные макроопределения
// Ответсвенный  :
//------------------------------------------------------------------------------

!-------------------------------------------------------------------------------
// Активно используется в коде для выделения номера счета
// БЕЗ кода плана счетов
#define GetDbSch(Schet) SubStr(#Schet,2,cgSchetLength-1)
!-------------------------------------------------------------------------------
// Используется в коде для вызова отладочных функций
// чтобы отдалочные функции стали доступны нужно к настройке
// "=Настройка=\Пользователь\Фамилия Имя Отчество"
// приписать строчку "beta tester"
#define IsBetaTester(tag='') MatchesMask(sGetTune('User.FIO'),'*beta*tester*')
!-------------------------------------------------------------------------------
// Проверка наличия лицензии на указанный модуль
// Если ее нет - то выдается сообщение с указанием имени интерфейса
#declare CheckLicense(Module)
  if (not Lic_ModuleMayBeUsed(#Module))
  {
    if (GetFirst FastFirstRow ContourComponents where ((#Module == ContourComponents.Name)) = tsOk) {}
    Message('Для запуска интерфейса'#13 +
            'Необходима лицензия на модуль [' +
            if (IsValid(#ContourComponents),ContourComponents.Title,#Module) + ']', mfError);
    Abort; Exit;
  }
#end
// Проверка наличия лицензии на указанный модуль
// Если ее нет - то выдается сообщение с указанием имени интерфейса
#declare CheckLicenseEx(Module)
  if DemoMode(#Module)
  {
    if (GetFirst FastFirstRow ContourComponents where ((#Module == ContourComponents.Name)) = tsOk) {}
    Message('Запуск интерфейса'#13 +
            'возможен в модуле [' +
            if (IsValid(#ContourComponents),ContourComponents.Title,#Module) + ']', mfError);
    Abort; Exit;
  }
#end
#declare CheckOperLicense
if not DemoMode
  if not (DemoMode('dogovor;buy;sell;stroy;otprcons;sklad;Rozn;postpol;remont;CRM;mnuMarket')
      and DemoMode('b_kassa;b_finans;b_veks;sklad2;mbp;b_osn;b_act;b_hozop;b_balans;b_konsol;b_fa')
      and DemoMode('menuavt;NalogReg;Service;sfo;ofp;sfp;tep;tpp;ufz;ManufPlan;Controlling')
      and DemoMode('manufacture;dvs;SalePlan;SupplyPlan;coPlan')
         )
    {
      // отхвачена какая-то из указанных лицензий
    }
  else
    {
      Message('Запуск интерфейса в нелицензируемом режиме !!!', mfError);
      Abort; Exit;
    }
#end
!-------------------------------------------------------------------------------
// Проверка наличия лицензии на указанный модуль
// Если ее нет - то выдается сообщение с указанием имени интерфейса и осуществляется переход в DemoMode
#declare CheckLicenseAndDemoMode(Modules)
if not DemoMode
  if DemoMode(#Modules)
  {
    Message('Запуск интерфейса в нелицензируемом режиме', mfError);
    Abort; Exit;
  }
#end
!-------------------------------------------------------------------------------
// Проверка возможности изменять статью затрат в cmPick.
// Если изменять нельзя, выдается сообщение и событие прерывается
#declare CheckEditStatZatrInPick
if (not boGetTune('Oper.Smeta.StZatr'))
  if (IsValid(#SpDocSmeta))
  {
    Message('Спецификация сформирована по смете!'#13+'Вам запрещено изменять статью затрат.');
    Abort;
    Exit;
  }
#end
!-------------------------------------------------------------------------------
// Проверка возможности изменять статью затрат в cmDelOnProtect.
// Если изменять нельзя, выдается сообщение и событие прерывается
#declare CheckEditStatZatrInDelOnPr
if (not boGetTune('Oper.Smeta.StZatr'))
  if (IsValid(#SpDocSmeta) and IsValid(#SpecZatr))
  {
    Message('Спецификация сформирована по смете!'#13+'Вам запрещено изменять статью затрат.');
    Abort;
    Exit;
  }
#end
!-------------------------------------------------------------------------------
! Форматы строки для использования в браузере и т.п., в DoubleToStr
!   например:
!     mySumma: [17.2,#SFormatNdeSign];
!     mySummaStr := doubleToStr(mySumma, #SFormatValNoSign);
!-------------------------------------------------------------------------------
// максимальная сумма в НДЕ [21]
#define SFormatNdeSign   '\2p[|-]36`666`666`666`667.88'
// беззнаковый [20]
#define SFormatNdeNoSign '\2p6`666`666`666`667.88'
// максимальная сумма в валюте [17]
#define SFormatValSign   '\2p[|-]36`666`666`667.88'
// беззнаковый [16]
#define SFormatValNoSign '\2p6`666`666`667.88'
// проценты [07]
#define SFormatPercent   '\2p[|-]3667.88'
// дата [10]
#define SFormatDate      'DD/MM/YYYY'
// время [05] часы:минуты
#define SFormatTime      'HH:MM'
// время [08] часы:минуты:секунды
#define SFormatTimeSec   'HH:MM:SS'
// время [09] минуты:секунды:сотые
#define SFormatTimeHund  'MM:SS.SSS'
!-------------------------------------------------------------------------------
! Лицензирование в интерфейсах (для прописывания в VipInterface)
!-------------------------------------------------------------------------------
! Лицензировано для всех
#ifdef Atl51
  #define Licensed_Free Licensed(Free)
#else
  #define Licensed_Free
#end
!-------------------------------------------------------------------------------
! Лицензировано для всех модулей, входящих в КБУ
#ifdef Atl51
  #define Licensed_KBU Licensed(B_Finans,B_Hozop,B_Balans,B_Kassa,B_Osn,B_Act,MBP,Sklad2)
#else
  #define Licensed_KBU
#end
!-------------------------------------------------------------------------------
! Лицензировано для всех модулей, входящих в УБ
#ifdef Atl51
  #define Licensed_UB Licensed(SFP)
#else
  #define Licensed_UB
#end
!-------------------------------------------------------------------------------
! Лицензировано для Платежного календаря
#ifdef Atl51
  #define Licensed_PK Licensed(Free)
#else
  #define Licensed_PK
#end
!-------------------------------------------------------------------------------
! public определен для 5-го атлантиса, но нужен только для компонентной модели
#ifdef ComponentVersionInDict
  #define GalPublic public
#else
  #define GalPublic
#endif
!-------------------------------------------------------------------------------
! private для интерфейсов определен для 5-го атлантиса
#ifdef Atl51
  #define IntPrivate Private
#else
  #define IntPrivate
#endif
!-------------------------------------------------------------------------------
// Проет Филиальность
// Офис и Филиал сворачиваются в одно поле
#declare _OfficeFilial(OfficeNo,FilialNo)
   if (ExistFilial, LongInt(ttConstFilial*#FilialNo), LongInt(#OfficeNo))
#end
// Вырезать из TuneObj филиал или офис
#declare _FilialNo(TuneObj)
   word(#TuneObj DIV ttConstFilial)
#end
#declare _OfficeNo(TuneObj)
   word(#TuneObj MOD ttConstFilial)
#end

!-------------------------------------------------------------------------------
! Работа с типом для параметра NumPick
#ifdef Gal9_1
  #define __TypeNumPick__ LongInt
#else //Atl51
  #define __TypeNumPick__ Word
#endif//Atl51
!-------------------------------------------------------------------------------
! Работа с Help-контектами
#ifndef Atl51
  #define __TypeHelpContextID__ LongInt
#else //Atl51
  #define __TypeHelpContextID__ String
#endif//Atl51
!-------------------------------------------------------------------------------
#ifndef Atl51
  #define mHelpContextID(_HName) hc#(_HName)
#else //Atl51
  #define mHelpContextID(_HName) '#(_HName)'
#endif//Atl51

#declare HandlerPointExtPostTuneGetVipName(sComponentName,wPrior)
// Обработчик точки расширения epPostTuneComponentGetVipName
// всегда возвращает TRUE.
handler with replace PostTune#sComponentName on extensionPoint epPostTuneComponentGetVipName(objTuneFunc : TuneFuncObjExt1) [#wPrior]
action
{
   objTuneFunc.AddVipNameObjPostTune('#sComponentName::PostTune_#sComponentName');
   result := true;
}
#end

#declare HandlerPointExtPostTuneGetVipName2(sComponentName,sIntName,wPrior)
// Обработчик точки расширения epPostTuneComponentGetVipName
// всегда возвращает TRUE.
handler with replace PostTune#sComponentName on extensionPoint epPostTuneComponentGetVipName(objTuneFunc : TuneFuncObjExt1) [#wPrior]
action
{
   objTuneFunc.AddVipNameObjPostTune('#sComponentName::#sIntName');
   result := true;
}
#end
