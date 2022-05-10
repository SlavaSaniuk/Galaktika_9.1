/*
 ษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป
 บ                     (c) 1994,2002 ชฎเฏฎเ ๆจ๏ €€’€                    บ
 บ ‘จแโฅฌ        : €€’€                                                 บ
 บ เฎฅชโ        : ”จญ ญแฎข๋ฉ ชฎญโใเ                                         บ
 บ ฅเแจ๏        : 5.84                                                      บ
 บ  งญ ็ฅญจฅ    : ญฅ่ญจฅ ฏเฎๆฅคใเ๋ จ ไใญชๆจจ เ กฎโ๋ แ FpCube               บ
 บ โขฅโแโขฅญญ๋ฉ : ฎงคญฅข €ซฅชแ ญคเ                                         บ
 ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ
*/

!------------------------------------------------------------------------------
! SMA                                                                          
!------------------------------------------------------------------------------
Function    FpCubeSMAInit(Integer, Integer)                               : LongInt; external 'G_Fin.dll';
Function    FpCubeSMADone(LongInt)                                        : boolean; external 'G_Fin.dll';
Function    FpCubeSMAAdd(LongInt, Word, Comp)                             : boolean; external 'G_Fin.dll';
Function    FpCubeSMAGet(LongInt, Integer, Var Word, Var Comp)            : boolean; external 'G_Fin.dll';

!------------------------------------------------------------------------------
! MEMORY SERVIS                                                                
!------------------------------------------------------------------------------
Function    FpGetAvailPhysMemory                                          : LongInt; external 'G_Fin.dll';
Procedure   FpLogMemory(String)                                                    ; external 'G_Fin.dll';

!------------------------------------------------------------------------------
! CUBE
!------------------------------------------------------------------------------
Function    FpCubeInit(LongInt, LongInt, Word)                            : LongInt; external 'G_Fin.dll';
Function    FpCubeDone(LongInt)                                           : boolean; external 'G_Fin.dll';
Function    FpCubeLogInfo(LongInt)                                        : boolean; external 'G_Fin.dll';
Function    FpCubeSetAn(LongInt, Longint)                                 : boolean; external 'G_Fin.dll';

!------------------------------------------------------------------------------
! DIMS
!------------------------------------------------------------------------------
function    FpCubeSetDimTopRule(LongInt, Word, Comp, Word)                : boolean; external 'G_Fin.dll';
Function    FpCubeAddDim(LongInt, Word, Comp, Comp)                       : boolean; external 'G_Fin.dll';
Function    FpCubeDimExist(LongInt, Word, Comp)                           : boolean; external 'G_Fin.dll';
Function    FpCubeDimGetNode(LongInt, Word, Comp)                         : comp;    external 'G_Fin.dll';
Function    FpCubeDimCheckNode(LongInt)                                   : boolean; external 'G_Fin.dll';
Function    FpCubeDelAllDim(LongInt)                                      : boolean; external 'G_Fin.dll';

Function    FpCubeDimGetCount(LongInt, Word)                              : LongInt; external 'G_Fin.dll';
Function    FpCubeDimGetByInd(LongInt, Word, LongInt, Var Comp, Var Comp) : boolean; external 'G_Fin.dll';

!------------------------------------------------------------------------------
! FLTS
!------------------------------------------------------------------------------
Function    FpCubeFltActive(LongInt, Boolean)                             : boolean; external 'G_Fin.dll';
Function    FpCubeFltClear(LongInt)                                       : boolean; external 'G_Fin.dll';
Function    FpCubeFltAdd(LongInt, Word, Comp)                             : boolean; external 'G_Fin.dll';

!------------------------------------------------------------------------------
! CELL
!------------------------------------------------------------------------------
Function    FpCubeGetCellFlag(LongInt, Longint)                           : word;    external 'G_Fin.dll';
Function    FpCubeSetCellFlag(LongInt, Longint, Word)                     : boolean; external 'G_Fin.dll';
                                                                         
Function    FpCubeAddLeafAnValue(LongInt, Longint, Longint, double)       : boolean; external 'G_Fin.dll';
Function    FpCubeAddValue(LongInt, Longint, Longint, double)             : boolean; external 'G_Fin.dll';
Function    FpCubeGetValue(LongInt, Longint, Longint)                     : double;  external 'G_Fin.dll';
Function    FpCubeGetMeasure    (LongInt, LongInt, LongInt)               : boolean; external 'G_Fin.dll';

Function    FpCubeGetXYValue(LongInt, LongInt, LongInt, Longint)          : double;  external 'G_Fin.dll';
Function    FpCubeAddXYValue(LongInt, LongInt, LongInt, Longint, double)  : boolean; external 'G_Fin.dll';
Function    FpCubeSetXYValue(LongInt, LongInt, LongInt, Longint, double)  : boolean; external 'G_Fin.dll';

Function    FpCubeGetXYMeasure(LongInt, LongInt, LongInt, LongInt)        : boolean; external 'G_Fin.dll';
                                                                          
Function    FpCubeDelAllCells(LongInt)                                    : boolean; external 'G_Fin.dll';
Function    FpCubeClearAgr(LongInt)                                       : boolean; external 'G_Fin.dll';
Function    FpCubeClearCellsValue(LongInt, Longint, LongInt)              : boolean; external 'G_Fin.dll';
Function    FpCubeSetCellsToAgr  (LongInt, Longint)                       : boolean; external 'G_Fin.dll';
Function    FpCubeReProcess(LongInt)                                      : boolean; external 'G_Fin.dll';

Function    FpCubeGetXYCellSMA(LongInt, LongInt, Longint, Longint)        : boolean;  external 'G_Fin.dll';
                                               

!------------------------------------------------------------------------------
! MEASURE
!------------------------------------------------------------------------------
Function    FpCubeMeasureInit(LongInt)                                    : LongInt; external 'G_Fin.dll';
Function    FpCubeMeasureDone(LongInt)                                    : boolean; external 'G_Fin.dll';
                                                                         
Function    FpCubeMeasureCount(LongInt)                                   : LongInt; external 'G_Fin.dll';
Function    FpCubeMeasureGetValue(LongInt, LongInt)                       : double;  external 'G_Fin.dll';
Function    FpCubeMeasureSetValue(LongInt, LongInt, double)               : boolean; external 'G_Fin.dll';

!------------------------------------------------------------------------------
! RECORDSET
!------------------------------------------------------------------------------
Function    FpCubeRSInitLeafs(LongInt, LongInt)                           : LongInt; external 'G_Fin.dll';
Function    FpCubeRSDone(LongInt, LongInt)                                : boolean; external 'G_Fin.dll';
Function    FpCubeRSGetFirst(LongInt, LongInt)                            : boolean; external 'G_Fin.dll';
Function    FpCubeRSGetNext(LongInt, LongInt)                             : boolean; external 'G_Fin.dll';
Function    FpCubeRSGetSMA(LongInt, LongInt, Longint)                     : boolean; external 'G_Fin.dll';
Function    FpCubeRSGetFlag(LongInt, LongInt, Var word)                   : boolean; external 'G_Fin.dll';
Function    FpCubeRSSetFlag(LongInt, LongInt, word)                       : boolean; external 'G_Fin.dll';
