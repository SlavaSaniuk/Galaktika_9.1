//------------------------------------------------------------------------------
//                                                      (c) корпорация Галактика
// Галактика 8.10 - компонента "Excel-отчеты"
// Внешние фукнции : "Библиотека фукнций работы с Excel"
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
Function XLGETIMPLEMENTATIONMODE : word; external 'ExcelLib3X.dll';
Function XLSETIMPLEMENTATIONMODE(word) : boolean; external 'ExcelLib3X.dll';

//------------------------------------------------------------------------------
Function XLOPENEXCEL(boolean) : boolean; external 'ExcelLib3X.dll';
Function XLOPENNEWEXCEL(boolean) : boolean; external 'ExcelLib3X.dll';
Function XLCREATEEXCEL(string, boolean) : boolean; external 'ExcelLib3X.dll';
Function XLCREATEEXCELWITHTEMPLATE(string, boolean) : boolean; external 'ExcelLib3X.dll';
Function XLCREATENEWEXCELWITHTEMPLATE(string, boolean) : boolean; external 'ExcelLib3X.dll';
Function XLISEXCELVALID : boolean; external 'ExcelLib3X.dll';

Function XLGETLASTERROR : LongInt; external 'ExcelLib3X.dll';
Function XLDISPLAYALERTS(boolean) : boolean; external 'ExcelLib3X.dll';
Function XLSETAPPVISIBLEMODE(boolean) : boolean; external 'ExcelLib3X.dll';

Function XLOPENWORKBOOK(string) : boolean; external 'ExcelLib3X.dll';
Function XLSAVEWORKBOOK(LongInt) : boolean; external 'ExcelLib3X.dll';
Function XLSAVEASWORKBOOK(LongInt, string) : boolean; external 'ExcelLib3X.dll';
Function XLCLOSEWORKBOOK(LongInt) : boolean; external 'ExcelLib3X.dll';
Function XLSAVEWORKBOOKBYNAME(string) : boolean; external 'ExcelLib3X.dll';
Function XLSAVEASWORKBOOKBYNAME(string, string) : boolean; external 'ExcelLib3X.dll';
Function XLCLOSEWORKBOOKBYNAME(string) : boolean; external 'ExcelLib3X.dll';
//------------------------------------------------------------------------------
Function XLGETWORKBOOKSCOUNT(var anytype) : boolean; external 'ExcelLib3X.dll';
//------------------------------------------------------------------------------

Function XLSETACTIVEWORKBOOK(word) : boolean; external 'ExcelLib3X.dll';
Function XLSETACTIVEWORKBOOKBYNAME(string) : boolean; external 'ExcelLib3X.dll';
//------------------------------------------------------------------------------
Function XLGETACTIVEWORKBOOKNAME(var string) : boolean; external 'ExcelLib3X.dll';
//------------------------------------------------------------------------------

Function XLGETRANGENAMESCOUNT(var anytype) : boolean; external 'ExcelLib3X.dll';
Function XLGETINDNAME(string) : LongInt; external 'ExcelLib3X.dll';
Function XLDELRANGEBYNAME(string) : boolean; external 'ExcelLib3X.dll';
Function XLDELRANGENAME(LongInt) : boolean; external 'ExcelLib3X.dll';
Function XLADDRANGENAME(string, longint, longint, longint, longint) : boolean; external 'ExcelLib3X.dll';
Function XLSETRANGENAME(string, longint, longint, longint, longint) : boolean; external 'ExcelLib3X.dll';
Function XLGETRANGEBYNAME(string, var longint, var longint, var longint, var longint) : boolean; external 'ExcelLib3X.dll';
//------------------------------------------------------------------------------
Function XLGETRANGENAMESCOUNTINBOOK(var anytype) : boolean; external 'ExcelLib3X.dll';
Function XLGETINDNAMEINBOOK(string) : LongInt; external 'ExcelLib3X.dll';
Function XLDELRANGEBYNAMEINBOOK(string) : boolean; external 'ExcelLib3X.dll';
Function XLDELRANGENAMEINBOOK(LongInt) : boolean; external 'ExcelLib3X.dll';
Function XLADDRANGENAMEINBOOK(string, longint, longint, longint, longint) : boolean; external 'ExcelLib3X.dll';
Function XLSETRANGENAMEINBOOK(string, longint, longint, longint, longint) : boolean; external 'ExcelLib3X.dll';
Function XLGETRANGEBYNAMEINBOOK(string, var longint, var longint, var longint, var longint) : boolean; external 'ExcelLib3X.dll';
//------------------------------------------------------------------------------

Function XLSETFONTSIZE(word, longint, longint, longint, longint): boolean; external 'ExcelLib3X.dll';
Function XLSETCELLSTRINGVALUE(string, longint, longint, longint, longint) : boolean; external 'ExcelLib3X.dll';
Function XLSETCELLNUMBERVALUE(double, longint, longint, longint, longint) : boolean; external 'ExcelLib3X.dll';
Function XLSETCELLDATEVALUE(date, longint, longint, longint, longint) : boolean; external 'ExcelLib3X.dll';
Function XLSETCELLFORMULA(string, longint, longint, longint, longint) : boolean; external 'ExcelLib3X.dll';

Function XLADDCELLSTRINGVALUE(string, longint, longint) : boolean; external 'ExcelLib3X.dll';

//------------------------------------------------------------------------------
Function XLGETCELLVALUE(longint, longint, var anytype) : boolean; external 'ExcelLib3X.dll';
Function XLGETCELLSUBSTRINGVALUE(longint, longint, longint, longint) : string; external 'ExcelLib3X.dll';
//------------------------------------------------------------------------------

Function XLSETCELLINDENTLEVEL(longint, longint, longint, longint, longint) : boolean; external 'ExcelLib3X.dll';
Function XLFREEZE(longint, longint) : boolean; external 'ExcelLib3X.dll';
Function XLUNFREEZE : boolean; external 'ExcelLib3X.dll';
Function XLSETROWHEIGHT(word, longint, longint, longint, longint) : boolean; external 'ExcelLib3X.dll';
Function XLSETCOLUMNWIDTH(word, longint, longint, longint, longint) : boolean; external 'ExcelLib3X.dll';
Function XLSETFONTCOLOR(longint, longint, longint, longint, longint) : boolean; external 'ExcelLib3X.dll';
Function XLSETBACKCOLOR(longint, longint, longint, longint, longint) : boolean; external 'ExcelLib3X.dll';
// по битикам Bold, Italic, Underline
Function XLSETFONTSTYLE(word, longint, longint, longint, longint) : boolean; external 'ExcelLib3X.dll';
// 1-ый параметер куду вставляем (см. Excel.inc)
Function XLINSERTRANGE(longint, longint, longint, longint, longint) : boolean; external 'ExcelLib3X.dll';
Function XLDELETERANGE(longint, longint, longint, longint, longint) : boolean; external 'ExcelLib3X.dll';
Function XLSHRINKCELLS(longint, longint, longint, longint) : boolean; external 'ExcelLib3X.dll';
// 1-ый align (см. Excel.inc)
Function XLALIGNCELLS(longint, longint, longint, longint, longint) : boolean; external 'ExcelLib3X.dll';
Function XLALIGNCELLSEX(longint, longint, longint, longint, longint, longint) : boolean; external 'ExcelLib3X.dll';
Function XLMERGECELLS(longint, longint, longint, longint) : boolean; external 'ExcelLib3X.dll';
// 1-ый строка с форматом, надо учитывать текущие системные разделители
Function XLSETNUMBERFORMAT(string, longint, longint, longint, longint) : boolean; external 'ExcelLib3X.dll';
Function XLCLEARRANGECONTENTS(longint, longint, longint, longint) : boolean; external 'ExcelLib3X.dll';
Function XLCLEARRANGEFORMATS(longint, longint, longint, longint) : boolean; external 'ExcelLib3X.dll';
Function XLCLEARRANGECOMMENTS(longint, longint, longint, longint) : boolean; external 'ExcelLib3X.dll';
// 1-ый где фрейм, по битикам в порядке следования констант (Excel.inc); 2-ой вес линии; 3-ий стиль линии (все Excel.inc)
Function XLFRAMECELLS(word, longint, longint, longint, longint, longint, longint, longint) : boolean; external 'ExcelLib3X.dll';
Function XLADDCOMMENTSHORT(string, longint, longint, longint, longint) : boolean; external 'ExcelLib3X.dll';
Function XLAUTOFIT(longint, longint, longint, longint) : boolean; external 'ExcelLib3X.dll';
//------------------------------------------------------------------------------
Function XLGETUSEDRANGE(var longint, var longint, var longint, var longint) : boolean; external 'ExcelLib3X.dll';
//------------------------------------------------------------------------------
Function XLWRAPTEXT(longint, longint, longint, longint) : boolean; external 'ExcelLib3X.dll';
// работа с буффером Excel
Function XLCOPYTOBUFF(longint, longint, longint, longint) : boolean; external 'ExcelLib3X.dll';
Function XLPASTEFORMATFROMBUFF(longint, longint, longint, longint) : boolean; external 'ExcelLib3X.dll';
Function XLPASTEALLFROMBUFF(longint, longint, longint, longint) : boolean; external 'ExcelLib3X.dll';
// работа с листом рабочей книги Excel
Function XLSETACTIVESHEET(LongInt) : boolean; external 'ExcelLib3X.dll';
Function XLSETACTIVESHEETBYNAME(string) : boolean; external 'ExcelLib3X.dll';
Function XLSETSHEETNAME(LongInt, string) : boolean; external 'ExcelLib3X.dll';
//------------------------------------------------------------------------------
Function XLGETSHEETNAME(LongInt, var anytype) : boolean; external 'ExcelLib3X.dll';
//------------------------------------------------------------------------------
Function XLADDSHEET : boolean; external 'ExcelLib3X.dll';
Function XLDELETESHEET(LongInt) : boolean; external 'ExcelLib3X.dll';
Function XLDELETESHEETBYNAME(string) : boolean; external 'ExcelLib3X.dll';
//------------------------------------------------------------------------------
Function XLGETSHEETSCOUNT(var anytype) : boolean; external 'ExcelLib3X.dll';
//------------------------------------------------------------------------------
Function XLCOPYEXTFORMAT(string, string) : boolean; external 'ExcelLib3X.dll';
Function XLRUNMACRO(string) : boolean; external 'ExcelLib3X.dll';
Function XLADDINSINSTAL(string, string) : boolean; external 'ExcelLib3X.dll';

// имя файла в который предварительно записаны макросы
Function XLIMPORTMODULE(string) : boolean; external 'ExcelLib3X.dll';

//------------------------------------------------------------------------------
// работа с сепараторами Excel_XP, для 97, 2000 возвращает системные
Function XLGETUSESYSTEMSEPARATOR : boolean;  external 'ExcelLib3X.dll';
Function XLGETTHOUSANDSEPARATOR  : char;     external 'ExcelLib3X.dll';
Function XLGETDECIMALSEPARATOR   : char;     external 'ExcelLib3X.dll';

// секция работы с вариантным массивом
Function XLCREATEMATRIX(longint, longint) : boolean; external 'ExcelLib3X.dll';
Function XLCLEARMATRIX : boolean; external 'ExcelLib3X.dll';
Function XLFREEMATRIX : boolean; external 'ExcelLib3X.dll';
//------------------------------------------------------------------------------
Function XLADDSTRTOMATRIX(longint, longint, string) : boolean; external 'ExcelLib3X.dll';
Function XLSTWRITETOMATRIX(longint, longint, string) : boolean; external 'ExcelLib3X.dll';
Function XLDOWRITETOMATRIX(longint, longint, double) : boolean; external 'ExcelLib3X.dll';
Function XLDTWRITETOMATRIX(longint, longint, date) : boolean; external 'ExcelLib3X.dll';
Function XLREADFROMMATRIX(longint, longint, var AnyType) : boolean; external 'ExcelLib3X.dll';
//------------------------------------------------------------------------------
Function XLWRITEMATRIXTOEXCEL(longint, longint) : boolean; external 'ExcelLib3X.dll';
Function XLREADMATRIXFROMEXCEL(longint, longint, longint, longint) : boolean; external 'ExcelLib3X.dll';

// секция работы с коллекцией вариантных массивов
Function XLCREATEMATRIXEX(longint, longint) : longint; external 'ExcelLib3X.dll';
Function XLCLEARMATRIXEX(longint) : boolean; external 'ExcelLib3X.dll';
Function XLFREEMATRIXEX(longint) : boolean; external 'ExcelLib3X.dll';
//------------------------------------------------------------------------------
Function XLADDSTRTOMATRIXEX(longint, longint, longint, string) : boolean; external 'ExcelLib3X.dll';
Function XLSTWRITETOMATRIXEX(longint, longint, longint, string) : boolean; external 'ExcelLib3X.dll';
Function XLDOWRITETOMATRIXEX(longint, longint, longint, double) : boolean; external 'ExcelLib3X.dll';
Function XLDTWRITETOMATRIXEX(longint, longint, longint, date) : boolean; external 'ExcelLib3X.dll';
Function XLREADFROMMATRIXEX(longint, longint, longint, var AnyType) : boolean; external 'ExcelLib3X.dll';
//------------------------------------------------------------------------------
Function XLWRITEMATRIXTOEXCELEX(longint, longint, longint) : boolean; external 'ExcelLib3X.dll';
Function XLREADMATRIXFROMEXCELEX(longint, longint, longint, longint, longint) : boolean; external 'ExcelLib3X.dll';

Function XLKILLEXCEL : boolean; external 'ExcelLib3X.dll';
Function SHORTSTRTOWIN(string) : string; external 'ExcelLib3X.dll';
Function SHORTSTRTODOS(string) : string; external 'ExcelLib3X.dll';
Function GETTHOUSANDSEPARATOR : char; external 'ExcelLib3X.dll';
Function GETDECIMALSEPARATOR : char; external 'ExcelLib3X.dll';
//------------------------------------------------------------------------------
// вспомогательные для page setup
// перевод сантиметров в точки
Function XLCENTIMETERSTOPOINTS(double) : double; external 'ExcelLib3X.dll';
// перевод дюймов в точки
Function XLINCHESTOPOINTS(double) : double; external 'ExcelLib3X.dll';
//------------------------------------------------------------------------------
// page setup
// функции XLPAGESETUP*
// все аргументы XLPAGESETUPSET...MARGIN(double) в точках (points) !!!
// см. Function XLCENTIMETERSTOPOINTS()
Function XLPAGESETUPSETLEFTMARGIN(double) : boolean; external 'ExcelLib3X.dll';
Function XLPAGESETUPSETRIGHTMARGIN(double) : boolean; external 'ExcelLib3X.dll';
Function XLPAGESETUPSETTOPMARGIN(double) : boolean; external 'ExcelLib3X.dll';
Function XLPAGESETUPSETBOTTOMMARGIN(double) : boolean; external 'ExcelLib3X.dll';
Function XLPAGESETUPSETHEADERMARGIN(double) : boolean; external 'ExcelLib3X.dll';
Function XLPAGESETUPSETFOOTERMARGIN(double) : boolean; external 'ExcelLib3X.dll';
// параметр: xlPortrait, xlLandscape - см. Excel.inc
Function XLPAGESETUPSETORIENTATION(longint) : boolean; external 'ExcelLib3X.dll';
// параметр: xlPaperXXX (xlPaperA4 для A4) - см. Excel.inc
Function XLPAGESETUPSETPAPERSIZE(longint) : boolean; external 'ExcelLib3X.dll';
//------------------------------------------------------------------------------
