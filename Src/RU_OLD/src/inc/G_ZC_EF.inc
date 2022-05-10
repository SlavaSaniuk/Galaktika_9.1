//******************************************************************************
//                                                      (с) корпорация Галактика
// Галактика 8.1 - Заработная плата
// Описания зарегистрированных функций
//******************************************************************************

//------------------------------------------------------------------------------
// ZARCACHE.PAS
//------------------------------------------------------------------------------
function CacheHolidays: boolean; external 'ZC.DLL';
function CachePaymentKinds: boolean; external 'ZC.DLL';
function GetHolidayType(date): byte; external 'ZC.DLL';

//------------------------------------------------------------------------------
// функции для выборки базовой информации о лицевом счете по ссылке на него
// перед использованием нужно захватить прикладной контекст "PaInfo"

// табельный номер лицевого счета (1)
function GetPaClockNumber(comp): string; external 'ZC.DLL';
// стандартный суффикс вида "таб. № XXX, Иванов И.И." для сообщений о лицевом счете (1)
function GetPaSuffix(comp): string; external 'ZC.DLL';
// ФИО физического лица, на которого оформлен лицевой счет (1)
function GetPaPersonName(comp): string; external 'ZC.DLL';

//------------------------------------------------------------------------------
// DEPTREE.PAS
//------------------------------------------------------------------------------
#define UseDepartmentTreeContext <p>Перед использованием функции нужно захватить прикладной контекст "DepatrmentTree".</p>

#doc
  Возвращает уточненное наименование подразделения DepartmentRef.</brief>

  #UseDepartmentTreeContext
#end
function GetDepartmentQualifiedName(DepartmentRef: comp): string; external 'ZC.DLL';

#doc
  Возвращает уточненное наименование подразделения DepartmentRef.</brief>

  <p> Иерархия подразделений просматривается по следующим правилам:

  <ul>
  <li> Если Height < 0 - до корневого, включительно
  <li> Если Height = 0 - только наименование данного подразделения
  <li> Если Height = 1 - наименование данного подразделения с разделителем, если не корневое
  <li> Если Height = 2 - до вышестоящего, включительно
  <li> Если Height = 3 - до вышестоящего вышестоящего, включительно
  <li> и т.д.;
  </ul></p>

  <p>  Имена подразделений разделяются строкой Divider и следуют в порядке
  от вышестоящего к нижестоящему, если PostOrder = false, или от
  нижестоящего к вышестоящему, если PostOrder = true.  Количество символов в
  уточненном наименовании не превышает NameLimit, или не ограничено, если
  NameLimit = 0.</p>

  #UseDepartmentTreeContext
#end
function GetDepartmentQualifiedNameExt(DepartmentRef: comp, Height: integer, Divider: string, PostOrder: boolean, NameLimit: integer): string; external 'ZC.DLL';

#doc
  #UseDepartmentTreeContext
#end
function GetDepartmentReduction(DepartmentRef: comp, Depth: integer): comp; external 'ZC.DLL';

#doc
  Возращает глубину подразделения в иерархии.</brief>

  #UseDepartmentTreeContext
#end
function GetDepartmentDepth(DepartmentRef: comp): integer; external 'ZC.DLL';


// вернуть в (2) ссылку на связанную с подразделением (1) организацию
// (в соответствии со структурой предприятия)
function GetBoundOrganization(comp, var comp): boolean; external 'ZC.DLL';

#doc
  Возвращает true и значение атрибута "плательщих налога на доходы" в Value из
  описывающего связь "подразделение - организация" филиала, с учетом иерархии.</brief>

  <p> Если в структуре предприятия нет записей, описывающих связь данного
  подразделения (или одного из вышестоящих) с какой-либо организацией, возвращает
  false.</p>

  #UseDepartmentTreeContext
#end
function GetIncomeTaxPayer(DepartmentRef: comp, var Value: word): boolean; external 'ZC.DLL';

function GetDepartmentKpp(comp, var comp): boolean; external 'ZC.DLL';


#doc
  Возвращает true и ссылку на АТД (административно-территориального деления)
  в Value для подразделения, заданного ссылкой DepartmentRef.</brief>

  <p> Возвращает ссылку на АТД (начиная с заданного вверх по иерархии подразделений), содержащуюся
  в адресе обособленного подразделения, либо в юридическом адресе организации (связанной с
  обособленным подразделением). Если ни в одном из обособленных подразделений или связанных
  с ними организациях ссылка на АТД не определена, возвращается ссылка на АТД собственной
  организации. Если ни в одном из упомянутых источников ссылка не была определена, возвращает false.
  Примечание: если DepartmentRef = 0, возвращает АТД собственной организации.</p>

  #UseDepartmentTreeContext
#end
function GetDepartmentATD(DepartmentRef: comp, var Value: comp): boolean; external 'ZC.DLL';

#doc
  Возвращает true и значение ОКАТО в Value для подразделения, заданного ссылкой
  DepartmentRef.</brief>

  <p> Возвращает ОКАТО обособленного подразделения, либо ОКАТО связанной организации,
  с учетом иерархии подразделений вверх от заданного. Если ОКАТО не определен, возвращает
  ОКАТО собственной организации. Если ни в одном из упомянутых источников ссылка не была
  определена, возвращает false.
  Примечание: если DepartmentRef = 0, возвращает ОКАТО собственной организации.</p>

  #UseDepartmentTreeContext
#end
function GetDepartmentOKATO(DepartmentRef: comp, var Value: string): boolean; external 'ZC.DLL';

