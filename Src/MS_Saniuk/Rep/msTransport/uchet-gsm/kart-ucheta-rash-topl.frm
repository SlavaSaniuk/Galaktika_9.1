#include FeeSigners.frn
.linkform 'ms_transport_kart-ucheta-rash-topl_frm' prototype is 'TexG_Rep'
.NameInList '(��) ����窠 ��� ��室� ⮯����'
.Group '����窠  ���  ��室�  ⮯����'
.Var
  NaimPredVar : String
  BegDateVar : string EndDateVar : String
  OstBegin, OstBegin1, OstBegin2, OstBegin3,
  OstBeginAll, OstBeginLv1, OstBeginLv2  : double
  Ostend, OstendAll, OstEndLv1 , OstEndLv2 ,Ostend1, Ostend2, Ostend3  : double
  NmLev, NmBack1, NmBack2, NmBack3,
  PrizSpec : word
  LastNumbak : word
  isFirstPL : Boolean
  startProb, endProb, sNpp, AnalGroupPrint, AnalGroupPrint_old, Gsm_ProbegallItg_my, Gsm_ProbegTotal_my : string
  npp, level : integer
  ezdok, ezdok_all, days, days_all, probeg : double
  ezdok_total :  ARRAY [1..6] of double
  days_total :  ARRAY [1..6] of double
.EndVar
.create view T
  as select *
  From Putlst, Toplivo toplivo_benz
  Where ((
  NrecPl == putlst.nrec
  And '������ࠧ���' == Vidgsm.name
  And vidgsm.nrec == toplivo.cvidgsm
  And 0 == normgsm.whatis
  And toplivo.nrec /== normgsm.ctoplivo
  and Putlst.cTransp == normgsm.ctransp
  and '������ ��-92' == toplivo_benz.name
  and 0 == putgsm.tipinfo
  and NrecPL == putgsm.cPutLST
  and toplivo_benz.nrec == putgsm.ctoplivo));
.create view T95
  as select * from PutLst, Toplivo, PutGsm
  where ((
	NrecPl == PutLst.nrec
	and '������ ��-95' == Toplivo.name
  and 0 == PutGsm.tipinfo
  and PutLst.nrec == PutGsm.cputlst
  and Toplivo.nrec == PutGsm.ctoplivo
));
#FeeSignersLinkVar
.fields
  Filter
.endfields
.{
^
.}
.Begin
 isFirstPL :=true;
 npp := 0;
 Gsm_ProbegallItg_my := '0';
 Gsm_ProbegTotal_my := '0';
 OstendAll       := 0
 OstBeginAll     := 0
 OstEndLv1       := 0
 OstBeginLv1     := 0
 OstEndLv2       := 0
 OstBeginLv2     := 0
End.
.fields
  NaimPred  BegDate EndDate
.endfields
^
���������
��� ��室� ⮯���� �࠭ᯮ��묨 �।�⢠��
�� ��ਮ� � ^ �� ^
.Begin
  NaimPredVar := NaimPred
  BegDateVar := BegDate
  EndDateVar := EndDate
  Npp := 0;
End.
� �/�	�஢��� ��㯯�஢��	�����	���	��砫�� ᯨ������	�஡��
��.	������ ᯨ������	���⮪
⮯����
�� �륧�� �.	����祭�
�.	�����饭�
�.	���⮪
⮯����
�� �����.
�.	������
䠪��᪨�
.{ CheckEnter GroupAnalGSM
.fields
  AnalGroupPrint
.endfields
.begin
  If(instr('.1.', AnalGroup) != 0)
  {
    AnalGroupPrint := substr(AnalGroup,4, length(AnalGroup)-3);
  }
End.
.{?Internal; (instr('.1.', AnalGroup) != 0) and (AnalGroupPrint != AnalGroupPrint_old);
^
.begin
  AnalGroupPrint_old := AnalGroupPrint;
End.
.}
.{ CheckEnter Shapka
.}
.Begin
 PrizSpec     := 0
 Ostend       := 0
 Ostend1      := 0
 Ostend2      := 0
 Ostend3      := 0
 OstBegin     := 0
 OstBegin1    := 0
 OstBegin2    := 0
 OstBegin3    := 0
 LastNumBak   := 99
 NmBack1  := 0
 NmBack2  := 0
 NmBack3  := 0
 isFirstPL := true;
 probeg := 0;
End.
.{ CheckEnter DocAnalGSM
.fields
.endfields
.Begin
  If Specob = 0 and LastNumbak <> Numbak
   {
     if (Numbak = 0 and NmBack1 =0)
      {
       OstBegin1 := double(OstOut)
       NmBack1 := 1
      }
     if (Numbak = 1 and NmBack2 =0)
      {
       OstBegin2 := double(OstOut)
       NmBack2 := 1
      }
     if (Numbak = 2 and NmBack3 =0)
      {
       OstBegin3 := double(OstOut)
       NmBack3 := 1
      }

      LastNumbak := Numbak
   }
  If SpecOb = 0
   Case Numbak of
    0:
    Ostend1 := double(Ostin)
    1:
    Ostend2 := double(Ostin)
    2:
    Ostend3 := double(Ostin)
   End;
   If (T.getfirst putlst = tsOK) { };
   If (isFirstPL)
   {
     startProb := T.putlst.SPEEDEXI;
     endProb := T.putlst.SPEEDRET;
     isFirstPL := false;
   }
   Else
   {
     endProb := T.putlst.SPEEDRET;
   }
  Ezdok := ezdok+ T.putlst.kolez;
  Days := days + round(T.putlst.timeall/8);

  // ================ �᫨ 92 ��� ��� ====================
  if ((inStr('92', AnalGroupPrint_old) != 0) or (inStr('��ઠ ���: ���', AnalGroupPrint_old) != 0)) {
     If ((T.getfirst toplivo_benz = tsOK) and (T.getfirst putgsm = tsOK))
       Probeg:=probeg + t.putgsm.probegAll;
  } // ============== �����: 92 ��� ��� ==================

  // ================ �᫨ 95 ====================
  if ((inStr('��-95', AnalGroupPrint_old) != 0)) {
    if(T95.getfirst PutLst where ((Comp(T.PutLst.nrec) == Putlst.nrec)) = tsOk) {
      if((T95.getfirst Toplivo = tsOK) and (T95.getfirst PutGsm = tsOK)){
        probeg:=probeg + T95.PutGsm.probegAll;
  }}} // ============== �����: 95 ================

  Level:=1;
End.
.}
.{ CheckEnter TotalAnalGSM
.Begin
  IF NumLevelItg = NumLvl - 1 then
  {
   Ostend    := Ostend1 + Ostend2 + Ostend3
   OstEndLv1  := OstEndLv1+ Ostend1 + Ostend2 + Ostend3
   OstEndLv2  := OstEndLv2+ Ostend1 + Ostend2 + Ostend3
   OstendAll := OstendAll+ Ostend1 + Ostend2 + Ostend3
   OstBegin    := OstBegin1 + OstBegin2 + OstBegin3
   OstBeginLv1  := OstBeginLv1+ OstBegin1 + OstBegin2 + OstBegin3
   OstBeginLv2  := OstBeginLv2+ OstBegin1 + OstBegin2 + OstBegin3
   OstBeginAll := OstBeginAll+ OstBegin1 + OstBegin2 + OstBegin3
}
If (inStr('�࠭ᯮ�⭮� �।�⢮', AnalItg) != 0)
{
  Npp++;
  sNpp := npp;
}
Else
{
  Npp := 0;
  startProb := '';
  endProb := '';
  isFirstPL := true;
  sNpp := '';
  ezdok:=0;
  days:=0;
  probeg:=0;
}
End.
.{?internal; (inStr('�࠭ᯮ�⭮� �।�⢮', AnalItg) != 0)
.fields
  sNpp
  Marka + ' ' + GosNom
  If (Ezdok = 0, '-', DoubleToStr(ezdok, doubleToStrWoDec))
  If (days = 0, '-', DoubleToStr(days, doubleToStrWoDec))
  If (startProb = '0', '-', startProb)
  If((double(endProb)-double(startProb)) = 0, if(probeg = 0,'-', string(probeg)) , string(double(endProb)-double(startProb)))//Gsm_ProbegallItg
  if (endProb = '0', '-' , endProb)
  trim(IF (NumLevelItg = 0, string(OstBeginAll,9,2), If (NumLevelItg = 1,string(OstBeginLv1,9,2), If (NumLevelItg = 2,string(OstBeginLv2,9,2),     string(OstBegin,9,2)))))
  Trim(PoluchItg) Trim(VozvrItg)
  trim(IF (NumLevelItg = 0, string(OstEndAll,9,2), If (NumLevelItg = 1,string(OstEndLv1,9,2), If (NumLevelItg = 2,string(OstEndLv2,9,2), string(OstEnd,9,2)))))
  trim(RasFaktItg) //EkonomItg NOEkonomItg
.endfields
.begin

  If (inStr('��ઠ ���: ���', AnalGroupPrint_old) = 0 and (t.getfirst putlst = tsOK and t.getfirst vidgsm = tsOK and t.getfirst toplivo = tsOK and t.getfirst normgsm = tsOK))  {
    startProb := '0';
    endProb := '0';
    ezdok:=0;
    days:=0;
  }
// ���ࠥ� �஡�� �� �������
If (inStr('��ઠ ���: ���', AnalGroupPrint_old) != 0){
endProb := string(double(endProb)-probeg);
}
End.
^	^	^	^	^	^	^	^	^	^	^	^
.Begin
 IF NumLevelItg = 1
 {
  OstEndLv1     := 0
  OstBeginLv1   := 0
 }
IF NumLevelItg = 2
 {
  OstEndLv2     := 0
  OstBeginLv2   := 0
 }
Gsm_ProbegallItg_my:=string(double(Gsm_ProbegallItg_my)+double(If((double(endProb)-double(startProb)) = 0, if(probeg = 0,'0', string(probeg)) , string(double(endProb)-double(startProb)))));
//Gsm_ProbegallItg_my:=If((double(endProb)-double(startProb)) = 0, if(probeg = 0,'-', string(double(Gsm_ProbegallItg_my)+probeg)) , string(double(Gsm_ProbegallItg_my)+double(endProb)-double(startProb)));
Ezdok_all:=ezdok_all+ezdok;
Ezdok:=0;
Days_all:=days_all+days;
Days:=0;
End.
.}
.{?internal; (inStr('�࠭ᯮ�⭮� �।�⢮', AnalItg) = 0)
.fields
    sNpp
  AnalItg
  Ezdok_all
  Days_all
  //TimeSpecItg
//  startProb
  Gsm_ProbegallItg_my
//  endProb
//  TonnKmItg
  IF (NumLevelItg = 0, string(OstBeginAll,9,2), If (NumLevelItg = 1,string(OstBeginLv1,9,2), If (NumLevelItg = 2,string(OstBeginLv2,9,2),     string(OstBegin,9,2))))
  PoluchItg VozvrItg
  IF (NumLevelItg = 0, string(OstEndAll,9,2), If (NumLevelItg = 1,string(OstEndLv1,9,2), If (NumLevelItg = 2,string(OstEndLv2,9,2), string(OstEnd,9,2))))
//  RasNormItg
RasFaktItg //EkonomItg NOEkonomItg
.endfields
.begin
//Message('Level='+string(level));
//Message('ezdok_total[level]=' + string(ezdok_total[level]));
If (ezdok_all = 0 and days_all = 0 and level > 0)
{
  Ezdok_all:=ezdok_total[level];
  Days_all:=days_total[level];
}
If (inStr('����� �� ������', AnalItg) = 0)
{
  Gsm_ProbegTotal_my:=string(double(Gsm_ProbegTotal_my) + double(Gsm_ProbegallItg_my));
}
Else
{
  Gsm_ProbegallItg_my := Gsm_ProbegTotal_my;
}
end.
^	^	^	^		^		^	^	^	^	^
.Begin
 IF NumLevelItg = 1
 {
  OstEndLv1     := 0
  OstBeginLv1   := 0
 }
IF NumLevelItg = 2
 {
  OstEndLv2     := 0
  OstBeginLv2   := 0
 }
Gsm_ProbegallItg_my:='0';
Ezdok_total[level]:=0;
days_total[level]:=0;
Level++;
Ezdok_total[level]:= Ezdok_total[level] + Ezdok_all;
Ezdok_all:=0;
Ezdok:=0;
days_total[level]:= days_total[level] + days_all;
Days_all:=0;
Days:=0;
End.
.}
.}
.}
#FeeSignersLinkInit(Texg_rep)

.{?internal; (cSigner<>0)
.{While (�����_�����ᠭ� < ������⢮_�����ᠭ⮢)
.begin
  �����_�����ᠭ� := �����_�����ᠭ� + 1;
end.
.fields
   ���ᨢ_�����ᠭ�_����      [�����_�����ᠭ�]
   ���ᨢ_�����ᠭ�_���       [�����_�����ᠭ�]
  ���ᨢ_�����ᠭ�_��������� [�����_�����ᠭ�]
 .endfields

^				^		^
		(�������)		(����஢�� ������)		(���������)

.}
.}
.endform
