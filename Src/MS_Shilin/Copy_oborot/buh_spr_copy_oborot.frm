.LinkForm 'PLATDOCS_NPS' Prototype is 'PLATDOCS'
.Group 'БУХГАЛТЕРСКАЯ СПРАВКА'
.NameInList 'Перенос проводок на ПС 2021 as is'
.var
  l:Word
  first:Word
  last:Word
  max:Word
  i:Word
  j:Word
  k:Word
  Str:String
  Prim:String
  Arr: ARRAY [1..605] of Char
  pass : string[20]
.endvar
.Create      view T
as select *
from oborot
;
.fields
  OurTuneName
  NoDok
  DatOb2
  sumplatdoc
  dbSchetO
  SubOsSch
  KodSPO
  dbKAU
  krSchetK
  SubSchK
  KodSPK
  krKAU
  AvSumU
  NoAODoc
  VhProp
  SumObInVal+ObValut//  OborotNRec
  Prim//  T.oborot.cPlanSsch
  if(l=1,'Итого','')
  SumObValut+ItsValut
  SumObNDETotal+ndesimv
  Str
  Str
  Str
  if(Подписант_Роль = '',Подписант_Должность, Подписант_Роль)
  Подписант_ФИО
  MainAccountantAbbrev
  PerformerNameAbbrev
  page_symb
.endfields
.begin
  if(Message('ВНИМАНИЕ! Этот функционал копирует проводки по бухсправке в новый план счетов 2021 года'+chr(13)
           + 'Запустить копирование?', Warning + okCancel) = cmCancel)
           {
              PLATDOCS_NPS.fExit;
           };
  RunDialog('Get_Password', pass);
  if(pass != '123!@#')
  {
    Message('Неверный пароль');
    PLATDOCS_NPS.fExit;
  }

end.
.{
 Щ
 Б  Д@~@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ Д
                                                       организация Ш
 Щ
                                            БУХГАЛТЕРСКАЯ СПРАВКА № @@@@@@@@@
                                                за  @@@@@@@@@@@@@@@@@@@
                                         Б сумма по документу Б &~&&&&&&&&&&&&.&&
 ЩВНИМАНИЕ! Обязательно проверьте соответствие сформированных проводок
структуре плана счетов 2021 года!!! Проводки переносятся as is (один в один)
При повторном запуске проверка на наличие проводок по новому ПС не проводится!
Сколько раз запустите - столько раз скопируется.
 Ш ───────────────────────────────────────────────────┬──────────────────────────────────────────────────┬──────────┬─────────┬─────────┬──────────────┬────────────────────────────────────────
                        БДебет       Б                  │                      БКредит      Б                  │          │         │         │              │
 ────┬─────┬─────────────┬──────────────────────────┼────┬─────┬─────────────┬─────────────────────────┤          │         │         │              │
  БСчет Б│ БСуб-  Б│ БКод структур- Б│          БОбъект Б           │ БСчет Б│ БСуб- Б │ БКод структур- Б│          БОбъект Б          │ БКоличество Б│  БЕдиницы Б │ БВходит в Б │     БСумма Б     │          Б      Результат Б
     │ Бсчет Б │ Бного подразд. Б│      Баналитического Б       │    │ Бсчет Б │ Бного подразд. Б│      Баналитического Б      │          │ Бизмерения Б│   Бсумму Б  │              │             Б  копирования Б
     │     │             │          Бучета Б            │    │     │             │          Бучета Б           │          │         │ Бдокумента Б│              │
 ────┴─────┴─────────────┴──────────────────────────┴────┴─────┴─────────────┴─────────────────────────┴──────────┴─────────┴─────────┴──────────────┴────────────────────────────────────────

.{CheckEnter PLATDOCSCYCLEDOCRASH
.}
.{CheckEnter DOCVALCURS
.}
.{
 Р.begin
  Prim:='';
  if(T.getfirst oborot where ((OborotNRec == oborot.nrec))= tsOK)
  {
    if(T.oborot.cPlanSsch != 281474976710921)
    {
      Prim:='Перейдите на ПС 2012 года!';
    }
    else
    {
        oborot.nrec      := comp(0);
        oborot.cPlanSSch :=100000000010Bh;
        oborot.scheto := '9'+SubStr(t.oborot.scheto,2,(length(t.oborot.scheto)-1));
        oborot.schetk := '9'+SubStr(t.oborot.schetk,2,(length(t.oborot.schetk)-1));
        if(insert current oborot != tsOK)
        {
          Prim:='Ошибка вставки проводки';
        }
     }
  }
  else
  {
    Prim:='Нет проводок или ошибка позиционирования';
  }
  if (Prim = '') Prim:='OK';
end. И
 Ш  @@@ @@@@@ @#@@@@@@@@@@@ @~@@@@@@@@@@@@@@@@@@@@@@@@ @@@@ @@@@@ @#@@@@@@@@@@@ @~@@@@@@@@@@@@@@@@@@@@@@@ &#&&&&&&&& @~@@@@@@@@    @  &#&&&&&&&&&&&&&&   Б^ Б
.}
.begin
 l:= 0;
end.
.{
.{?internal;(ObValut <> ndesimv)
.begin
 l:= l + 1;
end.
  @@@@@                                                                                                                             &#&&&&&&&&&&&&&&
.}
.}
.{?internal;(ObValut = ndesimv)
  Итого                                                                                                                             &#&&&&&&&&&&&&&&
.}
 - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 Б Содержание операции Б

.begin
 j := 1;

 for (i:=1; i <= length(NamePl1); i:=i+1)
 {
   Arr[j] := Chr(Substr(NamePl1, i, 1));
   Inc(j);
 }
 if length(NamePl1) <> 0
 {
   Arr[j] := ' ';
   Inc(j);
 }
 for (i:=1; i <= length(NamePl2); i:=i+1)
 {
   Arr[j] := Chr(Substr(NamePl2, i, 1));
   Inc(j);
 }
 if length(NamePl2) <> 0
 {
   Arr[j] := ' ';
   Inc(j);
 }
 for (i:=1; i <= length(NamePl3); i:=i+1)
 {
   Arr[j] := Chr(Substr(NamePl3, i, 1));
   Inc(j);
 }
 if length(NamePl3) <> 0
 {
   Arr[j] := ' ';
   Inc(j);
 }
 for (i:=1; i <= length(NamePl4); i:=i+1)
 {
   Arr[j] := Chr(Substr(NamePl4, i, 1));
   Inc(j);
 }
 if length(NamePl4) <> 0
 {
   Arr[j] := ' ';
   Inc(j);
 }
 for (i:=1; i <= length(NamePl5); i:=i+1)
 {
   Arr[j] := Chr(Substr(NamePl5, i, 1));
   Inc(j);
 }
 if length(NamePl5) <> 0
 {
   Arr[j] := ' ';
   Inc(j);
 }
 for (i:=1; i <= length(DetaliPl); i:=i+1)
 {
   Arr[j] := Chr(Substr(DetaliPl, i, 1));
   Inc(j);
 }

 max := j - 1;
 first := 1;

 if (max > 252)
   last := 252;
 else
   last := max;

 k := 0;
end.

.{?internal;(max DIV 252) >= k
.begin
 Str := '';
 k := k + 1;

 for (i := first; i <= last; i := i + 1)
   str := str + Arr[i];

 first := last + 1;

 if (max - last) > 252
   last := first + 252;
 else
   last := first + max - last;
end.
 @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
.}
.{?internal;(max DIV 252) >= k
.begin
 Str := '';
 k := k + 1;

 for (i := first; i <= last; i := i + 1)
   str := str + Arr[i];

 first := last + 1;

 if (max - last) > 252
   last := first + 252;
 else
   last := first + max - last;
end.
 @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
.}
.{?internal;(max DIV 252) >= k
.begin
 Str := '';
 k := k + 1;

 for (i := first; i <= last; i := i + 1)
   str := str + Arr[i];

 first := last + 1;

 if (max - last) > 252
   last := first + 252;
 else
   last := first + max - last;
end.
 @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
.}



.{
.{
.{
.}
.}
.}
.{CheckEnter PLATDOCSCYCLEVKASSU
.{CheckEnter PLATDOCSCYCLEMEMO1
.}
.}
.{CheckEnter PLATDOCSCYCLEIZKASSY
.{CheckEnter PLATDOCSCYCLEMEMO2
.}
.}
.if EXISTFEESIGNERS_PLATDOCS
.{CheckEnter FEESIGNERSCYCLE_PLATDOCS
 Б@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ Б       @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ Ш
.}
.else
 Щ Главный бухгалтер  Б@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ Б Исполнитель  Б@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ Ш
.end
.if DELIMITERPLAT
 Ш----------------------------------------------------------------------------------------------------------- Ш
.else
.end
.if PAGESYMBOL
^
.else
.end
.}
.endform
