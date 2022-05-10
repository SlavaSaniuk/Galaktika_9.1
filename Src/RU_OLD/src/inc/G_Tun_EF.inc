/*
 ╔═══════════════════════════════════════════════════════════════════════════╗
 ║                     (c) 1994,2008 корпорация ГАЛАКТИКА                    ║
 ║ Система       : ГАЛАКТИКА                                                 ║
 ║ Проект        : Ядро                                                      ║
 ║ Версия        : 8.10                                                      ║
 ║ Назначение    : Внешние процедуры и функции из G_Tune.dll                 ║
 ║ Ответственный :                                                           ║
 ╚═══════════════════════════════════════════════════════════════════════════╝
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

function  GetUserOffice (comp)                           : word;    external 'G_Tune.dll';    // оффис пользователя
function  GetCurrOffice                                  : word;    external 'G_Tune.dll';    // текущий офис

function GetCurrFilial                                   : word;    external 'G_Tune.dll';    // текущий филиал
function SetTuneFilial (word)                            : word;    external 'G_Tune.dll';    // установить филиал для настроек
function GetOfficeFilial                                 : longInt; external 'G_Tune.dll';    // текущий офис + филиал
function UserOfficeFilial (comp)                         : longInt; external 'G_Tune.dll';    // офис + текущий филиал пользователя
function FilialNo (comp)                                 : word;    external 'G_Tune.dll';    // Получить номер филиала по его ID
function OfficeFilialTune (word, word)                   : longInt; external 'G_Tune.dll';    // офис и филиал сворачиваются в одно поле

function isModifyDataFilial                              : boolean; external 'G_Tune.dll';    // в многофилиальной БД установлен ли текущий филиал
function ExistFilial                                     : boolean; external 'G_Tune.dll';    // Включена ли филиальность

function  TunesInit                                      : boolean;  external 'G_Tune.dll';
function  isTunesInit                                    : boolean;  external 'G_Tune.dll';
function  TunesDone                                      : boolean;  external 'G_Tune.dll';

procedure Conv_Vip;                                                 external 'G_Tune.dll';    // запускатель интерфейсов для конвертора

//------------------------------------------------------------------------------
