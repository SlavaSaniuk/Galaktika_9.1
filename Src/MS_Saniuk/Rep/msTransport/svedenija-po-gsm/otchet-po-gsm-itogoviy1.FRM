//------------------------------------------------------------------------------
//                                                                  (c) ��� ����
// ���⥬� T2 ERP - ����࠭ᯮ��
// ��孨�� - ��ᯫ��樮��� ������⥫� ��� ���
//------------------------------------------------------------------------------
#include FeeSigners.frn
.linkform 'ms-otchet_po_gsm-itogoviy' prototype is 'TexG_Rep'
.NameInList '(��) ���� �� ��� (�⮣���)'
.Group '��������� �孨��-��ᯫ��樮���� ������⥫�� ��� ���'
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
