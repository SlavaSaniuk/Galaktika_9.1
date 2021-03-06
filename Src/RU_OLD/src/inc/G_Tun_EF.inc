/*
 浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様�
 �                     (c) 1994,2008 ��牆���罔� ���������                    �
 � ��痰ガ�       : ���������                                                 �
 � 蹍オ�        : �む�                                                      �
 � �ム瓱�        : 8.10                                                      �
 � ��Л�腑�┘    : ��ヨ�┘ �牀罐ゃ琺 � 粃��罔� ├ G_Tune.dll                 �
 � �癶モ痰▲��覃 :                                                           �
 藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様�
*/

//------------------------------------------------------------------------------
// GalTunes.pas

function  GetTuneName (string)                           : string;  external 'G_Tune.dll';
function  GetTuneNameEx (string, word)                   : string;  external 'G_Tune.dll';
function  ShowTune    (string, string)                   : word;    external 'G_Tune.dll';
function  ExistTune   (string)                           : boolean; external 'G_Tune.dll';
function  GetTuneType (string)                           : word;    external 'G_Tune.dll';

function  sGetTune    (string)                           : string;  external 'G_Tune.dll';
function  boGetTune   (string)                           : boolean; external 'G_Tune.dll';
function  cGetTune    (string)                           : char;    external 'G_Tune.dll';
function  wGetTune    (string)                           : word;    external 'G_Tune.dll';
function  lGetTune    (string)                           : LongInt; external 'G_Tune.dll';
function  dGetTune    (string)                           : date;    external 'G_Tune.dll';
function  tGetTune    (string)                           : time;    external 'G_Tune.dll';
function  doGetTune   (string)                           : double;  external 'G_Tune.dll';
function  coGetTune   (string)                           : comp;    external 'G_Tune.dll';

function  sGetTuneEx  (string, LongInt, comp)               : string;  external 'G_Tune.dll';
function  boGetTuneEx (string, LongInt, comp)               : boolean; external 'G_Tune.dll';
function  cGetTuneEx  (string, LongInt, comp)               : char;    external 'G_Tune.dll';
function  wGetTuneEx  (string, LongInt, comp)               : word;    external 'G_Tune.dll';
function  lGetTuneEx  (string, LongInt, comp)               : LongInt; external 'G_Tune.dll';
function  dGetTuneEx  (string, LongInt, comp)               : date;    external 'G_Tune.dll';
function  tGetTuneEx  (string, LongInt, comp)               : time;    external 'G_Tune.dll';
function  doGetTuneEx (string, LongInt, comp)               : double;  external 'G_Tune.dll';
function  coGetTuneEx (string, LongInt, comp)               : comp;    external 'G_Tune.dll';

function  sSetTune    (string, string )                  : word;    external 'G_Tune.dll';
function  boSetTune   (string, boolean)                  : word;    external 'G_Tune.dll';
function  cSetTune    (string, char   )                  : word;    external 'G_Tune.dll';
function  wSetTune    (string, word   )                  : word;    external 'G_Tune.dll';
function  lSetTune    (string, LongInt)                  : word;    external 'G_Tune.dll';
function  dSetTune    (string, date   )                  : word;    external 'G_Tune.dll';
function  tSetTune    (string, time   )                  : word;    external 'G_Tune.dll';
function  doSetTune   (string, double )                  : word;    external 'G_Tune.dll';
function  coSetTune   (string, comp, string)             : word;    external 'G_Tune.dll';

function  sSetTuneEx  (string, LongInt, comp, string )      : word;    external 'G_Tune.dll';
function  boSetTuneEx (string, LongInt, comp, boolean)      : word;    external 'G_Tune.dll';
function  cSetTuneEx  (string, LongInt, comp, char   )      : word;    external 'G_Tune.dll';
function  wSetTuneEx  (string, LongInt, comp, word   )      : word;    external 'G_Tune.dll';
function  lSetTuneEx  (string, LongInt, comp, LongInt)      : word;    external 'G_Tune.dll';
function  dSetTuneEx  (string, LongInt, comp, date   )      : word;    external 'G_Tune.dll';
function  tSetTuneEx  (string, LongInt, comp, time   )      : word;    external 'G_Tune.dll';
function  doSetTuneEx (string, LongInt, comp, double )      : word;    external 'G_Tune.dll';
function  coSetTuneEx (string, LongInt, comp, comp, string) : word;    external 'G_Tune.dll';

function  SetTune     (string, var anytype)                 : word;    external 'G_Tune.dll';
function  SetTuneEx   (string, LongInt, comp, var anytype)  : word;    external 'G_Tune.dll';

function  GetTuneFullRgh (string, LongInt, comp)         : word;    external 'G_Tune.dll';
function  GetTuneTmpRgh  (comp,   LongInt, comp)         : word;    external 'G_Tune.dll';
function  PostTuneEx     (string, LongInt, comp)         : word;    external 'G_Tune.dll';
function  LastTuneStatus                                 : word;    external 'G_Tune.dll';
function  CreateAllTune                                  : word;    external 'G_Tune.dll';
function  CreateUserTune (LongInt, comp)                 : word;    external 'G_Tune.dll';

function  StartProtokol  (string,string)                 : boolean; external 'G_Tune.dll';
function  StopProtokol                                   : boolean; external 'G_Tune.dll';

Procedure  StartLogTunes                                          ; external 'G_Tune.dll';
Procedure  StopLogTunes                                           ; external 'G_Tune.dll';

function  GetUserOffice (comp)                           : word;    external 'G_Tune.dll';    // �粐�� ���讌���皀��
function  GetCurrOffice                                  : word;    external 'G_Tune.dll';    // 皀�竕┤ �筥�

function GetCurrFilial                                   : word;    external 'G_Tune.dll';    // 皀�竕┤ 筥����
function SetTuneFilial (word)                            : word;    external 'G_Tune.dll';    // 竅����※碎 筥���� か� ��痰牀オ
function GetOfficeFilial                                 : longInt; external 'G_Tune.dll';    // 皀�竕┤ �筥� + 筥����
function UserOfficeFilial (comp)                         : longInt; external 'G_Tune.dll';    // �筥� + 皀�竕┤ 筥���� ���讌���皀��
function FilialNo (comp)                                 : word;    external 'G_Tune.dll';    // ���竍�碎 ���ム 筥����� �� ィ� ID
function OfficeFilialTune (word, word)                   : longInt; external 'G_Tune.dll';    // �筥� � 筥���� 瓣���腮��鈞瘴 � �き� ����

function isModifyDataFilial                              : boolean; external 'G_Tune.dll';    // � �����筥����讚�� �� 竅����←キ �� 皀�竕┤ 筥����
function ExistFilial                                     : boolean; external 'G_Tune.dll';    // ���鈑キ� �� 筥����讚�痰�

function  TunesInit                                      : boolean;  external 'G_Tune.dll';
function  isTunesInit                                    : boolean;  external 'G_Tune.dll';
function  TunesDone                                      : boolean;  external 'G_Tune.dll';

procedure Conv_Vip;                                                 external 'G_Tune.dll';    // ���竅��皀�� ┃皀珞ォ甌� か� ���▲珥���

//------------------------------------------------------------------------------
