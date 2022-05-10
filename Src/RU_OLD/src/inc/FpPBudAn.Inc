//------------------------------------------------------------------------------
//                                                      (c) корпорация Галактика
// Галактика 5.80 - модуль "Управление бюджетом" 
// Типы данных VIP/PAS : "Аналитика бюджетирования"
//------------------------------------------------------------------------------

Type TPasBudAnFld = record
  wAn              : Word;
  IsHierAn         : boolean;
  IsVirtualAgrMode : boolean;
  IsAutoSynch      : boolean;
  IsAnBud          : boolean;
end;

Type TPasBudAnMeanFld = record
  wAn              : Word;
  cAn              : comp;
  Name             : String;
  cNode            : comp;
  Code             : String;
  Abbr             : String;
  cAgr             : comp;
  IsLeaf           : boolean;
  IsVirtualAgr     : boolean;
  cBaseAgrMean     : comp;
  IsAgrOwnData     : boolean;
  cOwnerAgrMean    : comp;
  UO               : word;
  AddAttr          : word;
end;
