#doc
Накладные на продажу
Количество МЦ по документу
#end
.linkform 'PrintKol_Sopr' prototype is tovn
.NameInList 'Количество МЦ по документу'
.group 'Накладные на продажу'
.var
 sumkolf:double
.endvar
.fields
 CommonFormHeader
 Поставщик
 Номер_с_дескриптором
 Дата 
 Основание ДатаОснования

 DoubleToStr( sumkolf, '\2p[|-]36`666`666`666`666`666.88' )
.endfields
.{
.begin
 sumkolf:=0;
 end.
 ^

Организация : @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

НАКЛАДНАЯ №  ^ от ^

.if tovn01
Основание №  ^ от ^
.end
.if tovn02
.end
.{
.begin
 sumkolf:=sumkolf+Колф;
 end.
.}
.{ CHECKENTER TOVNUSL
.}
Всего МЦ по документу: ^ 
.{
.}
.}
!.endform
