#include FeeSigners.frn
.linkform 'ms-otchet-po-gsm_itogoviy' prototype is 'TexG_Rep'
.NameInList '(��) ���� �� ��� (�⮣��� 2)'
.Group '��������� �孨��-��ᯫ��樮���� ������⥫�� ��� ���'
#FeeSignersLinkVar
.var
  nameKategory, nameKategoryPrev: String;
  nameFunction, nameFunctionPrev: String;
  probegByFunction, probegByKategory, probegTotal : Double;
.endvar
.create view T92 // ============================== �������: ��-92 ===========================================
  from PutLst, Toplivo, PutGsm, Transp, TipTex
  where (( NrecPl == PutLst.nrec
    and '������ ��-92' == Toplivo.name
    and 0 == PutGsm.tipinfo
    and PutLst.nrec == PutGsm.cputlst
    and Toplivo.nrec == PutGsm.ctoplivo
    and PutLst.cTransp == Transp.nrec
    and Transp.cTipTex == TipTex.nrec
)); // =====================================================================================================
.create view T95 // ============================= �������: ��-95 ===========================================
  from PutLst, Toplivo, PutGsm, Transp, TipTex
  where (( NrecPl == PutLst.nrec
    and '������ ��-95' == Toplivo.name
    and 0 == PutGsm.tipinfo
    and PutLst.nrec == PutGsm.cputlst
    and Toplivo.nrec == PutGsm.ctoplivo
    and PutLst.cTransp == Transp.nrec
    and Transp.cTipTex == TipTex.nrec
)); // =====================================================================================================
.create view TSug // ============================= �������: ��� ===========================================
  from PutLst, Toplivo, PutGsm, Transp, TipTex
  where (( NrecPl == PutLst.nrec
    and '���' == Toplivo.name
    and 0 == PutGsm.tipinfo
    and PutLst.nrec == PutGsm.cputlst
    and Toplivo.nrec == PutGsm.ctoplivo
    and PutLst.cTransp == Transp.nrec
    and Transp.cTipTex == TipTex.nrec
)); // =====================================================================================================
.begin
  probegTotal:=0;
end.
.fields
  Filter
.endfields
.{
^
.}
.fields
  NaimPred  BegDate EndDate
.endfields
^
���������
��� ��室� ⮯���� �࠭ᯮ��묨 �।�⢠��
�� ��ਮ� � ^ �� ^
|    �㭪樮���쭮� �����祭��    |  �஡��  |
|---------------------------------|----------|
.{ CheckEnter GroupAnalGSM //============= GroupAnalGSM
.{?internal; substr(AnalGroup,1,12)='.1.��ઠ ���' // ================================
.begin
  // ��⥣�ਨ ⮯����:
  nameKategory:=substr(AnalGroup,15, length(AnalGroup)-1);

  if(nameKategory <> nameKategoryPrev) {
    nameKategoryPrev:=nameKategory;
    nameFunctionPrev:='';
    probegByKategory:=0;
  }
end.
.fields
  'Maઠ ���: ' +nameKategory
.endfields
| @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ |
|--------------------------------------------------------------------------------------|
.} // ================================================================================
.{ CheckEnter Shapka
.}
.{ CheckEnter DocAnalGSM
.begin
  // �㭪樮���쭮� �����祭�� ��⮬�����:
  nameFunction:=substr(AnalGroup,32, length(AnalGroup)-1);
  if(nameFunction <> nameFunctionPrev and nameKategory = nameKategoryPrev) {
    nameFunctionPrev:=nameFunction;
    probegByFunction:=0;
  }

  // �஡�� ��⮬������:
  // �᫨ ⮯���� ��-92:
  if(nameKategory = '������ ��-92') {
    if(T92.getfirst PutLst where ((Comp(NrecPl) == PutLst.nrec)) = tsOk) {
      if((T92.getfirst Toplivo = tsOk) and (T92.getfirst PutGsm = tsOk)) {
        if(T92.PutGsm.probegAll > 0)
          probegByFunction := probegByFunction + T92.PutGsm.probegAll;
  }}};

  // �᫨ ⮯���� ��-95:
  if(nameKategory = '������ ��-95') {
    if(T95.getfirst PutLst where ((Comp(NrecPl) == PutLst.nrec)) = tsOk) {
      if((T95.getfirst Toplivo = tsOk) and (T95.getfirst PutGsm = tsOk)) {
        if(T95.PutGsm.probegAll > 0)
          probegByFunction := probegByFunction + T95.PutGsm.probegAll;
  }}};

  // �᫨ ⮯���� ���:
  if(nameKategory = '���') {
    if(TSug.getfirst PutLst where ((Comp(NrecPl) == PutLst.nrec)) = tsOk) {
      if((TSug.getfirst Toplivo = tsOk) and (TSug.getfirst PutGsm = tsOk)) {
        if(TSug.PutGsm.probegAll > 0)
          probegByFunction := probegByFunction + TSug.PutGsm.probegAll;
  }}};

end.
.}
.{ CheckEnter TotalAnalGSM
.{?internal; substr(AnalItg,1,40)='. �⮣� �� 2.�㭪樮���쭮� �����祭��: ' // = �⮣� �� �㭪. ������. ====
.begin
  probegByKategory:=probegByKategory +probegByFunction;
end.
.fields
  nameFunction
  DoubleToStr(probegByFunction, doubleToStrWoDec)
.endfields
| @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ | &&&&&& |
|---------------------------------|--------|
.} // ============================== ����� �뢮�� �⮣�� �� �㭪. ������ ====================================
.{?internal; substr(AnalItg,1,23)='.�⮣� �� 1.��ઠ ���: ' // ==== �뢮� �⮣�� �� ��⥣�ਨ ===============
.begin
  probegTotal:=probegTotal+probegByKategory;
end.
.fields
  '�⮣� ��: ' +nameKategory
  DoubleToStr(probegByKategory, doubleToStrWoDec)
.endfields
| @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ | &&&&&& |
|---------------------------------|--------|
.} // ============================== ����� �뢮�� �⮣�� �� ��⥣�ਨ =======================================
.}
.}
.fields
  DoubleToStr(probegTotal, doubleToStrWoDec)
.endfields
| �⮣� �� �����:                | &&&&&& |
|---------------------------------|--------|

#FeeSignersLinkInit(Texg_rep)
.endform
