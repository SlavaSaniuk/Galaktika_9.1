//------------------------------------------------------------------------------
//                                                      (c) Š®à¯®à æ¨ï ƒ€‹€Š’ˆŠ€
//------------------------------------------------------------------------------
// ƒ « ªâ¨ª  - Ÿ¤à®
// ‚­¥è­¨¥ äã­ªæ¨¨ ¨§ G_Tree.dll
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// AnUchTr.pas
function  AnInitTreeBuilder  (Integer,Word,Byte)         : LongInt; external 'G_Tree.dll';
procedure AnUploadTemp       (Longint,Word)                       ; external 'G_Tree.dll';
procedure AnUploadTemp_New   (Longint,Word,var AnyType)           ; external 'G_Tree.dll';
//------------------------------------------------------------------------------
// RepTree.pas
function  InitTreeBuilderEx  (Integer,Word,Byte)         : LongInt; external 'G_Tree.dll';
function  InitTreeBuilder    (Integer)                   : LongInt; external 'G_Tree.dll';
//------------------------------------------------------------------------------
// TreeRep.pas
procedure DoneTreeBuilder    (Longint)                            ; external 'G_Tree.dll';
function  SetReportStyles    (LongInt,LongInt,String)    : boolean; external 'G_Tree.dll';
function  TuneLevel          (Longint,Byte,Word,LongInt,
                              String,Word,LongInt,Word)  : boolean; external 'G_Tree.dll';
function  TuneSum            (LongInt,Byte,Byte,LongInt) : boolean; external 'G_Tree.dll';
function  BuildTunedTree     (LongInt,Integer)           : boolean; external 'G_Tree.dll';
Procedure SetTempIndex       (LongInt,Byte)                       ; external 'G_Tree.dll';
function  AddSorts           (LongInt,String)            : longint; external 'G_Tree.dll';
procedure MakeSortsInTempIer (Longint)                            ; external 'G_Tree.dll';
procedure TuneStructName     (Longint,Byte,Word);                   external 'G_Tree.dll';
function TuneKAULevel        (Longint,Byte,Word)         : word;    external 'G_Tree.dll';
procedure TuneRuleSort       (Longint,Byte,Word);                   external 'G_Tree.dll';
//------------------------------------------------------------------------------
