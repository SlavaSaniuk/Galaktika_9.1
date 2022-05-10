.LinkForm 'SKORDER_003' Prototype is 'SKORDER'
.Group 'Складской ордер'
.NameInList 'МС СКЛАДСКОЙ ОРДЕР'
.var
  sender:String
  recipient:String
.endvar
.Create  view localSklOrder
from
  SklOrder
;
.fields
  //CommonFormHeader
  OrdName
  nOrder
  dOrder
  Osnov
  Sklad
  'в '+RublSimv
  'в '+RublSimv
  NNomer
  MC
  ED
  Kol
  Price
  Summ
  Itogo
  //sender
  recipient
.endfields
 И
.{

                            @@@@@@@@@ ОРДЕР №  ^
                               от ^
.if SKLORDER01
   Основание  : ^
.if SKLORDER02
.else
.end
.else
.end
   Склад      : @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

 Р──────────────┬─────────────────────────────┬─────────┬──────────────────┬───────────────┬─────────────────
Номенклатурный│    Материальные  ценности   │ Единица │    Количество    │     Цена      │    Стоимость
    номер     │                             │измерения│                  │ @~@@@@@@@@@@@ │  @~@@@@@@@@@@@
──────────────┴─────────────────────────────┴─────────┴──────────────────┴───────────────┴─────────────────
.{
.{
&&&&&&&&&&&&&& @@@@@@@@@@@@@@@@@@@@@@@@@@@@@ @@@@@@@@@ &'&&&&&&&&&&&&&&&& &&&&&&&&&&&&&&& &'&&&&&&&&&&&&&&&
.}
.}
───────────────────────────────────────────────────────────────────────────────────────────────────────────
 Б   Итого :                                                                                &&&&&&&&&&&&&&&&& Б
.}
.begin
  sender    := '_____________________';
  recipient := '_____________________';
  localSklOrder.GetFirst SklOrder where ((SklOrderRec == SklOrder.nRec));
  if (localSklOrder.SklOrder.vidOrder = 0) // приходный
  {
    if (Mol = '')
    then sender := '_____________________'
    else sender := Mol;
  }
  if (localSklOrder.SklOrder.vidOrder = 1) // расходный
  {
    if (Mol = '')
    then recipient := '_____________________'
    else recipient := Mol;
  }
end.

                Списал :^ Ш

               Проводка:
.endform
