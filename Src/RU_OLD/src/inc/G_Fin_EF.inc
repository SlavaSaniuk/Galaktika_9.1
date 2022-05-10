/*
 ╔═══════════════════════════════════════════════════════════════════════════╗
 ║                     (c) 1994,2002 корпорация ГАЛАКТИКА                    ║
 ║ Система       : ГАЛАКТИКА                                                 ║
 ║ Проект        : Финансовый контур                                         ║
 ║ Версия        : 5.84                                                      ║
 ║ Назначение    : Внешние процедуры и функции из G_Fin.dll                  ║
 ║ Ответственный : Герман Юрий Эдуардович                                    ║
 ╚═══════════════════════════════════════════════════════════════════════════╝
*/

//------------------------------------------------------------------------------
// DebugLog.pas
// процедуры работы с логом  (Sanny)
function  FPLogInit                                          : Boolean; external 'G_Fin.dll';
function  FPLogDone                                          : Boolean; external 'G_Fin.dll';
function  FPLog                (String)                      : Boolean; external 'G_Fin.dll';
//------------------------------------------------------------------------------
// FpVipIfc
function fpInitHier            (Comp,Comp,Word)              : Longint; external 'G_Fin.dll';
function fpInitHierExt         (Comp,Comp,Word,LongInt)      : Longint; external 'G_Fin.dll';

function fpInitMatrix          (Longint,Word,Comp,Comp,Boolean,Word,Comp)
                                                             : Longint; external 'G_Fin.dll';
function fpLoadMatrix          (Longint)                     : Boolean; external 'G_Fin.dll';
function fpSetNewPeriod        (Longint,Comp)                : Boolean; external 'G_Fin.dll';
function fpSetCurrentMatrix    (Longint)                     : Boolean; external 'G_Fin.dll';
function fpKillAllValues       (Longint)                     : Boolean; external 'G_Fin.dll';
function fpReLoadMatrixStPer   (Longint,Comp,Comp)           : Boolean; external 'G_Fin.dll';

function fpAddFirstMatrixToSecond
                               (Longint,Longint,Word)        : Boolean; external 'G_Fin.dll';
function fpGetSumma            (Longint,Comp,Comp)           : Double;  external 'G_Fin.dll';
function fpSetSumma            (Longint,Comp,Comp,Double,Boolean)
                                                             : Boolean; external 'G_Fin.dll';
function fpSetCellAttr         (Longint,Comp,Comp,Word)      : Boolean; external 'G_Fin.dll';
function fpMaskCell            (Longint,Comp,Comp)           : Word;    external 'G_Fin.dll';
function fpGetCellCont         (Longint,Comp,Comp,Boolean,Longint)
                                                             : Boolean; external 'G_Fin.dll';
function fpGetExtInfo          (Longint,Comp,Comp,var Comp,var Comp,var Comp,var Comp)
                                                             : Boolean; external 'G_Fin.dll';
function fpReCount             (Longint,Boolean,var String)  : Boolean; external 'G_Fin.dll';
function fpSaveMatrix          (Longint,Word)                : Boolean; external 'G_Fin.dll';
function fpDoneMatrix          (Longint)                     : Boolean; external 'G_Fin.dll';
function fpDoneHier            (Longint)                     : Boolean; external 'G_Fin.dll';
function fpGetInfo             (Longint,Boolean)
                                                             : Longint; external 'G_Fin.dll';
function fpInitFPCheckService                                : Boolean; external 'G_Fin.dll';
function fpGoCheck             (LongInt,Comp)                : Boolean; external 'G_Fin.dll';
function fpDoneFPCheckService                                : Boolean; external 'G_Fin.dll';
//------------------------------------------------------------------------------
// FpVipAn.pas
// Процедуры работы с HashAn
function HAnInit                                             : Boolean; external 'G_Fin.dll';
function HAnDone                                             : Boolean; external 'G_Fin.dll';
function HAnFree                                             : Boolean; external 'G_Fin.dll';
function HAnReInit             (Boolean)                     : Boolean; external 'G_Fin.dll';
function HAnRetrieveSloj                                     : Boolean; external 'G_Fin.dll';
function HAnIsCashMode                                       : Boolean; external 'G_Fin.dll';
function HAnSetCashMode        (Boolean)                     : Boolean; external 'G_Fin.dll';
function HAnGetHash            (Comp,LongInt,Boolean)        : Comp;    external 'G_Fin.dll';
function HAnGetSloj            (Comp)                        : Comp;    external 'G_Fin.dll';
function HAnIsKauInSloj        (Comp,Word)                   : Comp;    external 'G_Fin.dll';
function HAnGetHashName        (Comp)                        : String;  external 'G_Fin.dll';
function HAnGetAnMean          (Comp,Integer)                : Comp;    external 'G_Fin.dll';
function HAnMakeListSlaveHash  (Comp,Comp,LongInt,LongInt)   : Boolean; external 'G_Fin.dll';
function HAnMakeListSynchHash  (Comp,Comp,LongInt,LongInt)   : Boolean; external 'G_Fin.dll';

// Процедуры работы с контейнером аналитик
function  ContAnInit                                         : LongInt; external 'G_Fin.dll';
function  ContAnInited         (LongInt)                     : Boolean; external 'G_Fin.dll';
function  ContAnDone           (LongInt)                     : Boolean; external 'G_Fin.dll';
function  ContAnClear          (LongInt)                     : Boolean; external 'G_Fin.dll';
function  ContAnKolAn          (LongInt)                     : Integer; external 'G_Fin.dll';
function  ContAnDel            (LongInt,Integer)             : Boolean; external 'G_Fin.dll';
function  ContAnAddDef                                       : Boolean; external 'G_Fin.dll';
function  ContAnAdd            (LongInt,Word,Comp)           : Boolean; external 'G_Fin.dll';
function  ContAnAddR           (LongInt,Word,Comp,Comp)      : Boolean; external 'G_Fin.dll';
function  ContAnSetKod         (LongInt,Integer,Word)        : Boolean; external 'G_Fin.dll';
function  ContAnSetAn          (LongInt,Integer,Comp)        : Boolean; external 'G_Fin.dll';
function  ContAnSetRole        (LongInt,Integer,Comp)        : Boolean; external 'G_Fin.dll';
function  ContAnSetAttr        (LongInt,Integer,Word)        : Boolean; external 'G_Fin.dll';
function  ContAnSet            (LongInt,Integer,Word,Comp)   : Boolean; external 'G_Fin.dll';
function  ContAnSetR           (LongInt,Integer,Word,Comp,Comp)
                                                             : Boolean; external 'G_Fin.dll';
function  ContAnGetKod         (LongInt,Integer)             : Word;    external 'G_Fin.dll';
function  ContAnGetAn          (LongInt,Integer)             : Comp;    external 'G_Fin.dll';
function  ContAnGetRole        (LongInt,Integer)             : Comp;    external 'G_Fin.dll';
function  ContAnGetAttr        (LongInt,Integer)             : Word;    external 'G_Fin.dll';
function  ContAnGet            (LongInt,Integer,var Word,var Comp)
                                                             : Boolean; external 'G_Fin.dll';
function  ContAnGetIndKod      (LongInt,Word)                : Integer; external 'G_Fin.dll';
function  ContAnGetIndKodAn    (LongInt,Word,Comp)           : Integer; external 'G_Fin.dll';
function  ContAnGetIndKodAnRole(LongInt,Word,Comp,Comp)      : Integer; external 'G_Fin.dll';
function  ContAnGetIndKodRole  (LongInt,Word,Comp)           : Integer; external 'G_Fin.dll';
function  ContAnDelKod         (LongInt,Word)                : Boolean; external 'G_Fin.dll';
function  ContAnInvert         (LongInt)                     : Boolean; external 'G_Fin.dll';
function  ContAnEqual          (LongInt,LongInt)             : Boolean; external 'G_Fin.dll';
function  ContAnAddContAn      (LongInt,LongInt)             : Boolean; external 'G_Fin.dll';
function  ContAnCopy           (LongInt,LongInt)             : Boolean; external 'G_Fin.dll';
function  ContAnPrint          (LongInt,Boolean)             : String;  external 'G_Fin.dll';
function  ContAnPrintR         (LongInt,Boolean)             : String;  external 'G_Fin.dll';
function  ContAnOder           (LongInt,Comp)                : Boolean; external 'G_Fin.dll';
function  ContAnOderR          (LongInt,Comp)                : Boolean; external 'G_Fin.dll';
function  ContAnMakeByHash     (LongInt,Comp)                : Boolean; external 'G_Fin.dll';
function  ContAnMakeBySloj     (LongInt,Comp)                : Boolean; external 'G_Fin.dll';
// Процедуры работы с FpRound
function  FpRoundInit                                        : LongInt; external 'G_Fin.dll';
function  FpRoundDone          (LongInt)                     : Boolean; external 'G_Fin.dll';
function  FpRoundSet           (LongInt,Word,Double,Double)  : Boolean; external 'G_Fin.dll';
function  FpRound              (LongInt,Double,Comp,Comp)    : Double;  external 'G_Fin.dll';
//------------------------------------------------------------------------------
// Fp_Per.pas
// Процедуры работы с Периодом планирования
function  FpPPInit                                           : Boolean; external 'G_Fin.dll';
function  FpPPDone                                           : Boolean; external 'G_Fin.dll';
function  FpPPGet              (Comp,Date)                   : Comp;    external 'G_Fin.dll';
function  FpPeriodServisCheck  (Word,Double,Comp,Date,Date)  : Word;    external 'G_Fin.dll';
//------------------------------------------------------------------------------
// FpCube.pas
// Процедуры работы с Кубом
#include FpCube_EF.Inc
//------------------------------------------------------------------------------
// Внешние функции : Массив статистических параметров
#include FpDynArrStatFun_EF.Inc
//------------------------------------------------------------------------------
// Функции расчета статистических величин
#include FpStatisticAlg_EF.Inc
