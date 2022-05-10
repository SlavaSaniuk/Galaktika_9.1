//******************************************************************************
//                                                      (c) корпорация Галактика
// Галактика 7.12 - Ядро
// Внешние процедуры и функции из G_Common.dll
//******************************************************************************

//------------------------------------------------------------------------------
// GalName.pas
#ifNdef Gal8_1
!!! Не публиковать эти функции ни при каких обстоятельствах в 8.1 и выше [Gera]
function  GetTiDkGalName      (Word)                  : String;  external 'G_Common.dll';
function  GetVidBaseDocName   (Word)                  : String;  external 'G_Common.dll';
#end
//------------------------------------------------------------------------------
// DocBasFn.pas
function  DocBasFn866to1251   (String)                : String;  external 'G_Common.dll';
function  DocBasFn1251to866   (String)                : String;  external 'G_Common.dll';
function  oem2utf8            (String, var String)    : Integer; external 'G_Common.dll';
//------------------------------------------------------------------------------
// Rounder.pas
function  fRoundAny           (Double,Double,Word)    : Double;  external 'G_Common.dll';
function  fRoundRub1          (Double)                : Double;  external 'G_Common.dll';
function  fRoundVal1          (Double)                : Double;  external 'G_Common.dll';
function  fRoundRub2          (Double)                : Double;  external 'G_Common.dll';
function  fRoundVal2          (Double)                : Double;  external 'G_Common.dll';
function  fRoundRub3          (Double)                : Double;  external 'G_Common.dll';
function  fRoundVal3          (Double)                : Double;  external 'G_Common.dll';
function  fRoundRub4          (Double)                : Double;  external 'G_Common.dll';
function  fRoundVal4          (Double)                : Double;  external 'G_Common.dll';
function  fRoundRub5          (Double)                : Double;  external 'G_Common.dll';
function  fRoundVal5          (Double)                : Double;  external 'G_Common.dll';
function  fRoundRub6          (Double)                : Double;  external 'G_Common.dll';
function  fRoundVal6          (Double)                : Double;  external 'G_Common.dll';
function  fRoundRub7          (Double)                : Double;  external 'G_Common.dll';
function  fRoundVal7          (Double)                : Double;  external 'G_Common.dll';
function  fRoundRubOrd        (Word, Double)          : Double;  external 'G_Common.dll';
function  fRoundValOrd        (Word, Double)          : Double;  external 'G_Common.dll';
function  fRoundRubSklDoc     (Word, Double)          : Double;  external 'G_Common.dll';
function  fRoundValSklDoc     (Word, Double)          : Double;  external 'G_Common.dll';
function  fRoundRubAdvSell    (Double)                : Double;  external 'G_Common.dll';
function  fRoundValAdvSell    (Double)                : Double;  external 'G_Common.dll';
function  TypeRound_Ord                               : Word;    external 'G_Common.dll';
function  ValRound            (Word, Comp, Double)    : Double;  external 'G_Common.dll';
function  fRoundRubSoprRem    (Double)                : Double;  external 'G_Common.dll';
function  fRoundValSoprRem    (Double)                : Double;  external 'G_Common.dll';
//------------------------------------------------------------------------------
function  StrKol              (Double)                : String;  external 'G_Common.dll';
//------------------------------------------------------------------------------
procedure SetFieldVisible        (LongInt, Boolean)           ;  external 'G_Common.dll';
procedure SetFieldAndLabelVisible(LongInt, Boolean)           ;  external 'G_Common.dll';
procedure SetFieldSelectable     (LongInt, Boolean)           ;  external 'G_Common.dll';
procedure SetFieldProtected      (LongInt, Boolean)           ;  external 'G_Common.dll';
procedure SetCommandEnabled      (LongInt, Boolean)           ;  external 'G_Common.dll';
//------------------------------------------------------------------------------
// Sum2Text.pas
function  DoubleToString      (Comp,Double)           : String;  external 'G_Common.dll';
function  DoubleToStringExt   (Comp,Double)           : String;  external 'G_Common.dll';
function  DoubleToStringInVal (Comp,Double)           : String;  external 'G_Common.dll';
function  NumToString         (Double,String)         : String;  external 'G_Common.dll';
function  GetStrSumma         (Boolean, Double)       : String;  external 'G_Common.dll';
function  GetStrSummaExt  (Boolean, Boolean, Double)          : String;  external 'G_Common.dll';
function  GetStrSummaExt2 (Boolean, Boolean, Boolean, Double) : String;  external 'G_Common.dll';
//------------------------------------------------------------------------------
// GalFuncs.pas
function  PrintNumber         (String,String)         : String;  external 'G_Common.dll';
function  CommonFormHeader                            : String;  external 'G_Common.dll';
function  StringNLZ           (Double,Byte)           : String;  external 'G_Common.dll';
function  StringNLZR          (Double,Byte,Byte)      : String;  external 'G_Common.dll';
function  StringNL0           (Double,Byte,Byte)      : String;  external 'G_Common.dll';
function  Del_Chr             (String,Comp)           : String;  external 'G_Common.dll';
function  Del_Str             (String,String)         : String;  external 'G_Common.dll';
function  WordWrap            (String,Byte,Byte)      : String;  external 'G_Common.dll';
function  GroupWrap           (String,Byte,Byte)      : String;  external 'G_Common.dll';
function  GroupWrapStr        (String,Byte,Byte)      : String;  external 'G_Common.dll';
procedure Inc                 (var AnyType)                   ;  external 'G_Common.dll';
procedure Dec                 (var AnyType)                   ;  external 'G_Common.dll';
function  CurrentInterfaceTitle                       : String;  external 'G_Common.dll';
function  DecToRoman          (Word)                  : String;  external 'G_Common.dll';
function  UserNameMinusDomen  (String)                : String;  external 'G_Common.dll';

function  WordCount           (string, string)        : byte;    external 'G_Common.dll';
function  WordPosition        (byte, string, string)  : byte;    external 'G_Common.dll';
function  ExtractWord         (byte, string, string)  : string;  external 'G_Common.dll';

//------------------------------------------------------------------------------
// ImpList.pas
function  LoadImplementationList               (String, String) : Boolean; external 'G_Common.dll';
function  LoadImplementationListByUniquePrefix (String)         : Boolean; external 'G_Common.dll';
function  GetImplementationCount                                : Integer; external 'G_Common.dll';
function  GetImplementationName                (Integer)        : String ; external 'G_Common.dll';
procedure UnLoadImplementationList                                       ; external 'G_Common.dll';
function  ExpandInterfaceComponent             (String, String) : string ; external 'G_Common.dll';
//------------------------------------------------------------------------------
// OutPath.pas
function  GetDirectoryPat        : String;  external 'G_Common.dll';
function  ExDirectoryOut         : String;  external 'G_Common.dll';
#ifdef Gal8_1
function  GetDefaultUserPath     : String;  external 'G_Common.dll#UserPath';
function  UserPathVip            : String;  external 'G_Common.dll#UserPath';
#else
function  GetDefaultUserPath     : String;  external 'G_Common.dll';
function  UserPathVip            : String;  external 'G_Common.dll';
#end
//------------------------------------------------------------------------------
// Arr_recs.pas
function  TblInitNew       (Longint,Longint)          : LongInt; external 'G_Common.dll';
procedure TblDeleteTable   (LongInt)                           ; external 'G_Common.dll';
function  TblNewField      (LongInt,byte)             : Longint; external 'G_Common.dll';
function  TblNewVar        (LongInt,var AnyType)      : Longint; external 'G_Common.dll';
procedure TblEndKey        (LongInt)                           ; external 'G_Common.dll';
function  TblSetDuplicate  (LongInt,boolean)          : boolean; external 'G_Common.dll';
function  TblLastStatus    (LongInt)                  : LongInt; external 'G_Common.dll';
function  TblClearBuffer   (LongInt)                  : boolean; external 'G_Common.dll';
procedure TblClearAll      (LongInt)                           ; external 'G_Common.dll';
function  TblIsValid       (LongInt)                  : boolean; external 'G_Common.dll';
function  TblIsModified    (LongInt)                  : boolean; external 'G_Common.dll';
function  TblMakeValid     (LongInt)                  : boolean; external 'G_Common.dll';
function  TblInsertCurrent (LongInt)                  : LongInt; external 'G_Common.dll';
function  TblUpDateCurrent (LongInt)                  : LongInt; external 'G_Common.dll';
function  TblDeleteCurrent (LongInt)                  : LongInt; external 'G_Common.dll';
function  TblRecords       (LongInt)                  : LongInt; external 'G_Common.dll';
function  TblCurRec        (LongInt)                  : LongInt; external 'G_Common.dll';
function  TblGetIndex      (LongInt,LongInt)          : boolean; external 'G_Common.dll';
function  TblGetFirst      (LongInt)                  : boolean; external 'G_Common.dll';
function  TblGetLast       (LongInt)                  : boolean; external 'G_Common.dll';
function  TblGetCurrent    (LongInt)                  : boolean; external 'G_Common.dll';
function  TblGetNext       (LongInt)                  : boolean; external 'G_Common.dll';
function  TblGetPrev       (LongInt)                  : boolean; external 'G_Common.dll';
function  TblGetEqual      (LongInt)                  : boolean; external 'G_Common.dll';
function  TblGetGreat      (LongInt)                  : boolean; external 'G_Common.dll';
function  TblGetLess       (LongInt)                  : boolean; external 'G_Common.dll';
function  TblGetGrOrEq     (LongInt)                  : boolean; external 'G_Common.dll';
function  TblGetLeOrEq     (LongInt)                  : boolean; external 'G_Common.dll';
procedure TblSFBoolean     (LongInt,LongInt,Boolean )          ; external 'G_Common.dll';
procedure TblSFByte        (LongInt,LongInt,Byte    )          ; external 'G_Common.dll';
procedure TblSFLongint     (LongInt,LongInt,Longint )          ; external 'G_Common.dll';
procedure TblSFInteger     (LongInt,LongInt,Integer )          ; external 'G_Common.dll';
procedure TblSFComp        (Longint,LongInt,Comp )             ; external 'G_Common.dll';
procedure TblSFDate        (Longint,LongInt,Date )             ; external 'G_Common.dll';
procedure TblSFTime        (Longint,LongInt,Time )             ; external 'G_Common.dll';
procedure TblSFSingle      (LongInt,LongInt,Single )           ; external 'G_Common.dll';
procedure TblSFDouble      (LongInt,LongInt,Double )           ; external 'G_Common.dll';
procedure TblSFString      (LongInt,LongInt,String )           ; external 'G_Common.dll';
function  TblGFBoolean     (LongInt,LongInt)          : boolean; external 'G_Common.dll';
function  TblGFByte        (Longint,LongInt)          : Byte   ; external 'G_Common.dll';
function  TblGFLongint     (LongInt,LongInt)          : Longint; external 'G_Common.dll';
function  TblGFInteger     (LongInt,LongInt)          : Integer; external 'G_Common.dll';
function  TblGFComp        (LongInt,LongInt)          : Comp   ; external 'G_Common.dll';
function  TblGFDate        (LongInt,LongInt)          : Date   ; external 'G_Common.dll';
function  TblGFTime        (LongInt,LongInt)          : Time   ; external 'G_Common.dll';
function  TblGFSingle      (LongInt,LongInt)          : Single ; external 'G_Common.dll';
function  TblGFDouble      (LongInt,LongInt)          : Double ; external 'G_Common.dll';
function  TblGFString      (LongInt,LongInt)          : String ; external 'G_Common.dll';
function  TblGFIBoolean    (LongInt,LongInt,LongInt)  : Boolean; external 'G_Common.dll';
function  TblGFIByte       (LongInt,LongInt,LongInt)  : Byte   ; external 'G_Common.dll';
function  TblGFILongint    (LongInt,LongInt,LongInt)  : Longint; external 'G_Common.dll';
function  TblGFIInteger    (LongInt,LongInt,LongInt)  : Integer; external 'G_Common.dll';
function  TblGFIComp       (LongInt,LongInt,LongInt)  : Comp   ; external 'G_Common.dll';
function  TblGFIDate       (LongInt,LongInt,LongInt)  : Date   ; external 'G_Common.dll';
function  TblGFITime       (LongInt,LongInt,LongInt)  : Time   ; external 'G_Common.dll';
function  TblGFISingle     (LongInt,LongInt,LongInt)  : Single ; external 'G_Common.dll';
function  TblGFIDouble     (LongInt,LongInt,LongInt)  : Double ; external 'G_Common.dll';
function  TblGFIString     (LongInt,LongInt,LongInt)  : String ; external 'G_Common.dll';
function  IterInitNew      (LongInt)                  : LongInt; external 'G_Common.dll';
function  IterNow          (LongInt)                  : LongInt; external 'G_Common.dll';
function  IterNext         (LongInt)                  : LongInt; external 'G_Common.dll';
procedure IterDone         (LongInt)                           ; external 'G_Common.dll';
function  TestSpeedVip     (LongInt)                  : Double ; external 'G_Common.dll';
//------------------------------------------------------------------------------
// TranFunc.pas
function  TrBeg                                       : boolean; external 'G_Common.dll';
function  TrEnd                                       : boolean; external 'G_Common.dll';
procedure TrAbort                                              ; external 'G_Common.dll';
procedure TrSetAbort                                           ; external 'G_Common.dll';
function  TrErr                                       : boolean; external 'G_Common.dll';
function  TrF              (word)                     : boolean; external 'G_Common.dll';
function  TrGet            (word)                     : word   ; external 'G_Common.dll';
function  TrWasAbort                                  : boolean; external 'G_Common.dll';
function  TrLastStatus                                : word   ; external 'G_Common.dll';
function  TrLStaGet                                   : word   ; external 'G_Common.dll';
function  TrInitMode       (longint)                  : boolean; external 'G_Common.dll';
function  TrMode                                      : Longint; external 'G_Common.dll';
function  TrIsWork                                    : boolean; external 'G_Common.dll';
function  TrNumber                                    : Longint; external 'G_Common.dll';
function  TrMessFlag                                  : Longint; external 'G_Common.dll';
procedure TrSetMessFlag    (longint)                           ; external 'G_Common.dll';
procedure TrClrStatus                                          ; external 'G_Common.dll';
procedure TrMess                                               ; external 'G_Common.dll';
procedure TrInit                                               ; external 'G_Common.dll';
procedure TrDone                                               ; external 'G_Common.dll';

//******************************************************************************
// ManyFuns.pas
Function  f_DoublesAreEqual    (double, double, double): boolean; external 'G_Common.dll';
Function  f_GetNZnaks          (double)                : word   ; external 'G_Common.dll';
Function  f_sNumDate           (string, date)          : string ; external 'G_Common.dll';
Function  f_KolEqual           (double, double)        : boolean; external 'G_Common.dll';
Function  f_DoubleIsZero       (double, double)        : boolean; external 'G_Common.dll';
Function  f_KolIsZero          (double)                : boolean; external 'G_Common.dll';
Function  f_KolIsPositive      (double)                : boolean; external 'G_Common.dll';
Function  f_KolIsNegative      (double)                : boolean; external 'G_Common.dll';
Function  f_FirstIsGreater     (double, double, double): boolean; external 'G_Common.dll';
Function  f_FirstKolIsGreater  (double, double)        : boolean; external 'G_Common.dll';
Function  f_PreRound           (double)                : double ; external 'G_Common.dll';
Function  f_AddToDocName       (var AnyType, string)   : boolean; external 'G_Common.dll';
Procedure f_CommonFlagSet      (string)                         ; external 'G_Common.dll';
Procedure f_CommonFlagClear    (string)                         ; external 'G_Common.dll';
Function  f_CommonFlagCheck    (string)                : boolean; external 'G_Common.dll';
Function  f_DateToStrZ         (date)                  : string ; external 'G_Common.dll';

//******************************************************************************
// BitmapList.pas
function  InitBitmapList                               : boolean; external 'G_Common.dll';
function  GetNextBitmap        (var string)            : boolean; external 'G_Common.dll';
function  GetFirstBitmap       (var string)            : boolean; external 'G_Common.dll';
procedure FreeBitmapList                                        ; external 'G_Common.dll';