//******************************************************************************
//                                                      (c) корпорация Галактика
// Галактика 8.1 - Логистика
// Внешние процедуры и функции из RTF_Edit.dll
//******************************************************************************

Function  RREADFILE(string)                                 : boolean; external 'GalRTF.dll';
Function  RSAVEFILE(string)                                 : boolean; external 'GalRTF.dll';
Function  REOF                                              : boolean; external 'GalRTF.dll';
Function  RREADFIRST                                        : string;  external 'GalRTF.dll';
Function  RREADNEXT                                         : string;  external 'GalRTF.dll';
Procedure RFREEMEMORY;                                                 external 'GalRTF.dll';
Function  RINCHARCOUNT: integer;                                       external 'GalRTF.dll';
Function  RFINDTEXT(string, integer, integer)               : integer; external 'GalRTF.dll';
Procedure RPUTOUT(integer, integer);                                   external 'GalRTF.dll';
Function  RFINDENDOFSTRUCT(integer, integer, string, string): integer; external 'GalRTF.dll';
Procedure RSETSELSTART(integer);                                       external 'GalRTF.dll';
Procedure RSETSELLEN(integer);                                         external 'GalRTF.dll';
Procedure RPUTOUTWITHREPLACE(integer, integer, string);                external 'GalRTF.dll';
Function  RFINDLOOPTABLE(integer, integer)                  : string;  external 'GalRTF.dll';
Function  RGETSELTEXT                                       : string;  external 'GalRTF.dll';

//******************************************************************************
