/*
 浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様�
 �                     (c) 1994,2008 ��牆���罔� ���������                    �
 � ��痰ガ�       : ���������                                                 �
 � 蹍オ�        : �む�                                                      �
 � �ム瓱�        : 8.10                                                      �
 � ��Л�腑�┘    : ��ヨ�┘ �牀罐ゃ琺 � 粃��罔� ├ GalNet.exe                 �
 � �癶モ痰▲��覃 : �瓮��爿覃 ��с� (All)                                     �
 藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様�
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

