/*
 ���������������������������������������������������������������������������ͻ
 �                     (c) 1994,2008 ��௮��� ���������                    �
 � ���⥬�       : ���������                                                 �
 � �஥��        : ���                                                      �
 � �����        : 8.10                                                      �
 � �����祭��    : ���譨� ��楤��� � �㭪樨 �� GalNet.exe                 �
 � �⢥��⢥��� : �ᥬ��� ࠧ� (All)                                     �
 ���������������������������������������������������������������������������ͼ
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
