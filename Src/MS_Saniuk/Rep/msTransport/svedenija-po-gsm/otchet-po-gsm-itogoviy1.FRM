//------------------------------------------------------------------------------
//                                                                  (c) Топ Софт
// Система T2 ERP - Автотранспорт
// Технико - эксплуатационные показатели для ГСМ
//------------------------------------------------------------------------------
#include FeeSigners.frn
.linkform 'ms-otchet_po_gsm-itogoviy' prototype is 'TexG_Rep'
.NameInList '(МС) Отчет по ГСМ (Итоговый)'
.Group 'Ведомость технико-эксплуатационных показателей для ГСМ'
.{
.}

.{ CheckEnter GroupAnalGSM
.fields
.endfields
.{ CheckEnter Shapka
.}

.{ CheckEnter DocAnalGSM
DocAnalGSM
.}

.{ CheckEnter TotalAnalGSM
TotalAnalGSM
.}

.}
#FeeSignersBody(texg_rep)
.endform
