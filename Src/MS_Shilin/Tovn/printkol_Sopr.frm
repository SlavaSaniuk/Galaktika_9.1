#doc
Накладные на продажу
Количество МЦ по документу
#end
#ifdef _TOVN_DEI
.linkform 'PrintKol_Sopr_dei' prototype is tovn_dei
#else
.linkform 'PrintKol_Sopr' prototype is tovn
#end
.NameInList 'Количество МЦ по документу'
.group 'Накладные на продажу'
.group 'Акт реализации материалов'
.group 'Приходные накладные'
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

#ifdef _TOVN_DEI
.if tovn01_dei
#else
.if tovn01
#end
Основание №  ^ от ^
.end
#ifdef _TOVN_DEI
.if tovn02_dei
#else
.if tovn02
#end
.end
.{
.begin
 sumkolf:=sumkolf+Колф;
 end.
#ifdef _TOVN_DEI
.{ CHECKENTER TOVN_DEI
.}
#end
.}
#ifdef _TOVN_DEI
.{ CHECKENTER TOVNUSL_DEI
#else
.{ CHECKENTER TOVNUSL
#end
.}
Всего МЦ по документу: ^
.{
#ifdef _TOVN_DEI
.{ CHECKENTER TOVN_DEI2
.}
#end
.}
.}
.endform
