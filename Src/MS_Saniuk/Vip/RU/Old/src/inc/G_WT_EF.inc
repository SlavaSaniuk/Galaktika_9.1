//******************************************************************************
//                                                      (с) корпорация Галактика
// Галактика 8.1 - Табельный учет
// Описания зарегистрированных функций
//******************************************************************************

//------------------------------------------------------------------------------
// функции обработки фактического табеля
// WRKTABLE.PAS
//------------------------------------------------------------------------------
function InitWorkingTable: boolean; external 'WT.DLL';
function WT_IsNew: boolean; external 'WT.DLL';
procedure ReSetWorkingTable;  external 'WT.DLL';
function ReFormWorkingTable(comp, word, word): integer; external 'WT.DLL';
function ReCalcWorkingTable(comp, word, word): integer; external 'WT.DLL';
function RefreshWorkingTable(comp, word, word): integer; external 'WT.DLL';
function LoadWorkingTable(comp, word, word): integer; external 'WT.DLL';
procedure WT_LoadTunes; external 'WT.DLL';
function WT_GetCurrent: comp; external 'WT.DLL';
function WT_IsVacationable(Date, word): boolean; external 'WT.DLL';
function WT_GetHours(byte, integer): double; external 'WT.DLL';
function WT_AutoTotalHours(byte): boolean; external 'WT.DLL';
function WT_SplitTotalHours: boolean; external 'WT.DLL';

#doc
  Возвращает код способа учета сверхурочных работ на день Day.</brief>

  <p> Коды способов расчета:
  <ul>
  <li> 0 - не определен
  <li> 1 - поденный
  <li> 2 - суммированный
  </ul>
  </p>
#end
function WT_GetOverworkCalculationMethod(Day: byte): byte; external 'WT.DLL';

function WT_GetHoursInDay(byte, byte, integer): double; external 'WT.DLL';
function WT_GetHoursBwDays(byte, double, double, integer, byte, byte): double; external 'WT.DLL';

function WT_GHBD(byte, double, double, integer, date, date): double; external 'WT.DLL';
function WT_GetHoursBwDates(byte, double, double, integer, date, date): double; external 'WT.DLL';

function WT_GetDays(byte, integer): byte; external 'WT.DLL';
function WT_GetDaysBwDays(byte, integer, byte, byte): byte; external 'WT.DLL';

function WT_GetDaysBwDates(byte, integer, date, date): integer; external 'WT.DLL';
function WT_GDBD(byte, integer, date, date): integer; external 'WT.DLL';

function WT_TestDay(byte, byte, integer): boolean; external 'WT.DLL';
function WT_FirstThat(byte, integer, var byte): boolean; external 'WT.DLL';
function WT_LastThat(byte, integer, var byte): boolean; external 'WT.DLL';

function WT_IsDayEnabled(byte): boolean; external 'WT.DLL';
function WT_IsDayValid(byte, boolean): boolean; external 'WT.DLL';
function WT_IsDayUseless(byte): boolean; external 'WT.DLL';
function WT_GetChange(byte): comp; external 'WT.DLL';
function WT_GetChangeAffectingPersonalAccountState(date): comp; external 'WT.DLL';
function WT_GetNorthernCategory(byte): word; external 'WT.DLL';
function WT_IsNorthernCategoryFixed(byte): boolean; external 'WT.DLL';

procedure WT_AddChangeFilter(comp); external 'WT.DLL';
procedure WT_AddDepartmentFilter(comp); external 'WT.DLL';
procedure WT_AddPaymentModeFilter(word); external 'WT.DLL';
procedure WT_AddCategoryFilter(word); external 'WT.DLL';
procedure WT_AddOperatingModeFilter(word); external 'WT.DLL';
procedure WT_AddAnalyticsFilter(word, comp); external 'WT.DLL';
procedure WT_AddAppointmentFilter(comp); external 'WT.DLL';
procedure WT_AddBrigadeFilter(comp); external 'WT.DLL';
procedure WT_AddTariffFilter(double); external 'WT.DLL';
procedure WT_AddMpfFilter(double); external 'WT.DLL';
procedure WT_SetupDayMask(byte, boolean); external 'WT.DLL';
procedure WT_ApplyDayMask; external 'WT.DLL';
procedure WT_UndoDayMask; external 'WT.DLL';
procedure WT_AddDayRangeFilter(byte, byte); external 'WT.DLL';
procedure WT_SetAttributeFilter(byte, comp); external 'WT.DLL';
function WT_GetAttributeFilter(var comp): byte; external 'WT.DLL';
function WT_IsFilterSet: boolean; external 'WT.DLL';
function WT_ReSetFilter: boolean; external 'WT.DLL';

// неявки
function WT_GetAbsenceCount(byte): integer; external 'WT.DLL';
function WT_GetAbsenceAttribute(byte, integer, word, var AnyType): boolean; external 'WT.DLL';
procedure WT_ReSetAbsences(byte); external 'WT.DLL';

// карта распределения неявок
function WT_AbsencesMapFirstOn(byte, date): integer; external 'WT.DLL';
function WT_AbsencesMapLastOn(byte, date): integer; external 'WT.DLL';
function WT_AbsencesMapCount(byte): integer; external 'WT.DLL';
function WT_AbsencesMapAbsenceAt(byte, integer): integer; external 'WT.DLL';
function WT_AbsencesMapDayAt(byte, integer): date; external 'WT.DLL';
function WT_GetSystemAbsenceKindOnDate(date): word; external 'WT.DLL';

// карта распределения часов неявки по датам
function WT_AbsenceMappedOn(byte, integer, date): boolean; external 'WT.DLL';
function WT_GetAbsenceHoursOn(byte, integer, date, var double): boolean; external 'WT.DLL';
function WT_AbsenceHoursAt(byte, integer, integer): double; external 'WT.DLL';
function WT_AbsenceDayAt(byte, integer, integer): date; external 'WT.DLL';
function WT_AbsenceMapCount(byte, integer): integer; external 'WT.DLL';

//------------------------------------------------------------------------------
// фильтрация системных отклонений
//------------------------------------------------------------------------------
// сбросить установленные фильтры
procedure WT_ResetSystemVarianceFilters; external 'WT.DLL';
// добавить фильтр; будут отброшены все отклонения вида (1) с nrec = (2),
// если (2) <> 0
procedure WT_AddSystemVarianceFilter(word, comp); external 'WT.DLL';
// удалить фильтр
procedure WT_DelSystemVarianceFilter(word, comp); external 'WT.DLL';
// вернет true, если установлен хоть один фильтр
function WT_SystemVarianceFiltersSet: boolean; external 'WT.DLL';

// обработка месячных неявок
function WT_LoadMonthlyAbsences: integer; external 'WT.DLL';
function WT_GetMonthlyAbsenceAttr(integer, word): string; external 'WT.DLL';
function WT_GetMonthlyAbsenceAttribute(integer, word, var AnyType): boolean; external 'WT.DLL';
function WT_GetMonthlyAbsenceCount: integer; external 'WT.DLL';
procedure WT_ReSetMonthlyAbsences; external 'WT.DLL';
function WT_GetAbsencesHours(word, string, date, date): double; external 'WT.DLL';
function WT_GetAbsencesDays(word, string, date, date): longint; external 'WT.DLL';
function WT_GetAbsencesWorkingDays(word, string, date, date): longint; external 'WT.DLL';

// обработка системных неявок
procedure WT_LoadSystemAbsences(word, comp); external 'WT.DLL';
function WT_GetSystemAbsenceAttr(integer, word): string; external 'WT.DLL';
function WT_GetSystemAbsenceAttribute(integer, word, var AnyType): boolean; external 'WT.DLL';
function WT_GetSystemAbsenceCount: integer; external 'WT.DLL';
procedure WT_ReSetSystemAbsences; external 'WT.DLL';

// информационные функции
function WT_GetSpecialTaxationTreatment: double; external 'WT.DLL';
function WT_GetPayRollAvgFactor: double; external 'WT.DLL';
function WT_GetPayRollAvgFactorAsIs: double; external 'WT.DLL';
function WT_GetPayRollAvgFactorDate: date; external 'WT.DLL';
function WT_GetTariff(byte): double; external 'WT.DLL';
function WT_GetPaymentMode(byte): word; external 'WT.DLL';
function WT_GetTariffCode(byte): word; external 'WT.DLL';
function WT_GetWageCategory(byte): word; external 'WT.DLL';
function WT_GetCategory(byte): word; external 'WT.DLL';
function WT_GetCurrency(byte): comp; external 'WT.DLL';
function WT_GetOperatingMode(byte): word; external 'WT.DLL';
function WT_GetAppointment(byte): comp; external 'WT.DLL';
function WT_GetDepartment(byte): comp; external 'WT.DLL';
function WT_GetCorrectiveFactor(byte): double; external 'WT.DLL';
function WT_GetMpf(byte): double; external 'WT.DLL';
function WT_GetBrigade(byte): comp; external 'WT.DLL';
function WT_GetAnalytics(byte, word, var comp): boolean; external 'WT.DLL';

#doc
  Возвращает ссылку на дополнительные аналитики, приходящиеся на день Day.
#end
function WT_GetAdditionalAnalytics(Day: byte): comp; external 'WT.DLL';

// периоды
function WT_LoadPeriods(word): boolean; external 'WT.DLL';
function WT_GetPeriodCount: longint; external 'WT.DLL';
function WT_GetPeriod(longint, var date, var date): boolean; external 'WT.DLL';
procedure DoneWorkingTable; external 'WT.DLL';

procedure WT_PushContext; external 'WT.DLL';
procedure WT_PopContext; external 'WT.DLL';

function WT_GetRegionFactor(byte): double; external 'WT.DLL';
function FACTTM(word, word): double; external 'WT.DLL';