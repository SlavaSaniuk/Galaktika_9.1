/*
 ษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป
 บ                     (c) 1994,2008 ชฎเฏฎเ ๆจ๏ €€’€                    บ
 บ ‘จแโฅฌ        : €€’€                                                 บ
 บ เฎฅชโ        : คเฎ                                                      บ
 บ ฅเแจ๏        : 8.10                                                      บ
 บ  งญ ็ฅญจฅ    : ญฅ่ญจฅ ฏเฎๆฅคใเ๋ จ ไใญชๆจจ จง GalNet.exe                 บ
 บ โขฅโแโขฅญญ๋ฉ : แฅฌจเญ๋ฉ เ งใฌ (All)                                     บ
 ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ
*/

//------------------------------------------------------------------------------
// GalApp.pas
procedure PutHotCommand              (Word)                          ; external;
procedure PutKeyCommand              (Word)                          ; external;
procedure InitQuickChoice            (String)                        ; external;
function  CurTableCode                                      : Word   ; external;
//------------------------------------------------------------------------------
// Period.pas
procedure CheckPeriod                                                ; external;
function  GalApp_Second_Tune                                : boolean; external;
procedure GalApp_ExtendedSecond_tune (String)                        ; external;
procedure BeforeChangeFilial                                         ; external;
procedure AfterChangeFilial                                          ; external;
//------------------------------------------------------------------------------
#ifNdef Atl51
// SpecEdit.pas
procedure SpecProcessText            (String,Word,String,Word)       ; external;
#end

function  IfDefServerApp                                    : boolean; external;
function  TryRunBatchInterface                              : boolean; external;
procedure RunBatchInterface          (String);                         external;
procedure RunBatchInterfaceNoModal   (String);                         external;
//------------------------------------------------------------------------------

