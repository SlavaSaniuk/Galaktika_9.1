//------------------------------------------------------------------------------
//                                                      (c) Š®à¯®à æ¨ï ƒ€‹€Š’ˆŠ€
//------------------------------------------------------------------------------
// ƒ « ªâ¨ª  - Ÿ¤à®
// ‚­¥è­¨¥ äã­ªæ¨¨ ¨§ G_Buh.dll
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// B_Errors.pas
procedure BuhErrorOpen                                   ; external 'G_Buh.dll';
procedure BuhErrorPrint         (String)                 ; external 'G_Buh.dll';
procedure BuhErrorCloseAndShow                           ; external 'G_Buh.dll';
procedure BuhErrorCurrentShow                            ; external 'G_Buh.dll';
function  BuhErrorCurrentStatus                 : Boolean; external 'G_Buh.dll';
//------------------------------------------------------------------------------
// KoefRash.pas
function KoefRasch
         (Integer,Comp,String,Comp,Date,Comp)   : Double;  external 'G_Buh.dll';
function OpenKoefRasch                          : Boolean; external 'G_Buh.dll';
function CloseKoefRasch                         : Boolean; external 'G_Buh.dll';
function ExtNextNumStr          (String)        : String;  external 'G_Buh.dll';
function ModAmortStr            (Word)          : String;  external 'G_Buh.dll';
//------------------------------------------------------------------------------
// B_NewOld.pas
function Go_BuhNewMon                           : boolean; external 'G_Buh.dll';
function Go_BuhOldMon                           : boolean; external 'G_Buh.dll';
//------------------------------------------------------------------------------
// RepRun.pas
function  RunPascalReport    (Word, Word)       : boolean; external 'G_Buh.dll';
function  RunPasRep_Record
                (Word, Word, var AnyType)       : boolean; external 'G_Buh.dll';
//------------------------------------------------------------------------------
// ServFin.pas
function  Calc_NewSaldo
          (word,comp,integer,string,string,comp,comp,
           comp,comp,comp,comp,comp,Date,Date)  : boolean; external 'G_Buh.dll';
//------------------------------------------------------------------------------
// B_Saldo.pas
procedure SaldoReportInit    (comp,Date,boolean,comp,word,word,word,word,word,word,word,word)
                                                         ; external 'G_Buh.dll';
function  GetVhodSaldo(var AnyType)             : integer; external 'G_Buh.dll';
function  GetRaschSaldo(var AnyType, Date)             : integer; external 'G_Buh.dll';
//------------------------------------------------------------------------------
// ServBuh.pas
Procedure CheckPlansAndCurRep                            ; external 'G_Buh.dll';
function  SumNdeEq           (double,double)    : boolean; external 'G_Buh.dll';
function  SumValEq           (double,double)    : boolean; external 'G_Buh.dll';
function  SumKolEq           (double,double)    : boolean; external 'G_Buh.dll';
function  GetSchAndSub       (string,string)    : string;  external 'G_Buh.dll';
//------------------------------------------------------------------------------
// BuhgTune.pas
procedure BuhgTuneInit                                               ; external 'G_Buh.dll';
procedure BuhgTuneDone                                               ; external 'G_Buh.dll';
function  BuhgTuneClear: boolean                                     ; external 'G_Buh.dll';
function  BuhgTuneInitFilter(word,comp,string): boolean              ; external 'G_Buh.dll';
function  BuhgTuneFoundFilter(word,string,string,comp,comp,comp,comp,comp,comp): boolean
                                                                     ; external 'G_Buh.dll';
//------------------------------------------------------------------------------
// B_Report.pas
procedure UploadDataHierAn        (integer, var AnyType, var Boolean); external 'G_Buh.dll';
