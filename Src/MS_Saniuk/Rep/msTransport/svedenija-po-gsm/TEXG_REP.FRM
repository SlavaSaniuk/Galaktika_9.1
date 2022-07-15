//------------------------------------------------------------------------------
//                                                                  (c) Топ Софт
// Система T2 ERP - Автотранспорт
// Технико - эксплуатационные показатели для ГСМ
//------------------------------------------------------------------------------
#include FeeSigners.frn
.set name='TexG_Rep'
.Group 'Карточка  учета  расхода  топлива'
.Group 'Ведомость технико-эксплуатационных показателей для ГСМ'
.hide
.fields
  Filter
  HoursInDay
  NaimPred BegDate  EndDate
  cNastuser : comp
  Nastr6 : word
  NameItg NameItgDop
  Str_Name1 Str_Name2 Str_Name3 Str_Name4 Str_Name5 Str_Name6
  AnalGroup NumLevel
  CodTbl :word  NrecTBl : comp
  NameToplivo KodToplivo Marka GosNom GarNom OtpEd

  DatePL NPL ExitDn ReturnDn
  NrecPl :comp SpeedExit SpeedRet MotoExit MotoRet
  AnalDet AnalDet_Dop
  NrecPutgsm :comp
  FIODrive TabN NrecVod
  ProbegAll Gsm_ProbegAll Put_ProbegAll
  Sum TonnKm
  OstOut Poluch Vozvr OstIn
  RasNorm RasFakt Ekonom NOEkonom EkonomSt   NOEkonomSt
  GosNomDoc GarNomDoc AvtoDay AvtoDayInRep TimeAll TimeRep MotoTime  RasFaktInKG NormInKG Price
  Stoim
  Pered StoimPered
  NameMaravt
  ProbegWrk  KolEz TimeSpec NormaLinNrm :double NormaSpObr:double NormaOneEz :double
  NormaKoffNgsm2:double NormaDopMas:double NormaSpWrk:double NormaUnLoad:double NormaWrkDrv:double NormaNlprobeg :double
  RasProbeg  Lst_Gruztn  Gsm_Gruztn  Lst_ProbegAll
  Lst_GruzTnKm  Gsm_TimeRep  Gsm_TimeAll Lst_Kolez  Lst_Probegwrk   KofNGsm :double
  Put_ProbegCng   Put_ProbegExt   Put_PrNoCity    Put_PrCity
  Put_Pr1   Put_Pr2   Put_Pr3   Put_PrMoun Put_TimeMove
  SpecOb :word Numbak :word
  NrecPutgsm_Receive :comp Date_Receive   Time_Receive
  Podr_Receive Putlst_Receive Transp_Receive Fio_Receive
  Nom_Doc

  NumLvl :word
  Koldet :double
  AnalItg NumLevelItg
  CodTblItg :word  NrecTBlItg : comp
  ProbegAllItg Gsm_ProbegAllItg Put_ProbegAllItg SumItg TonnKmItg
  OstOutItg PoluchItg VozvrItg OstInItg
  RasNormItg RasFaktItg EkonomItg NOEkonomItg EkonomStItg NOEkonomStItg
  AvtoDayItg AvtoDayInRepItg TimeAllItg TimeRepItg MotoTimeItg RasFaktInKGItg NormInKGItg PriceItg
  StoimItg PeredItg StoimPeredItg
  ProbegWrkItg  KolEzItg TimeSpecItg NormaLinNrmItg:double NormaSpObrItg:double NormaOneEzItg:double
  NormaKoffNgsm2Itg:double NormaDopMasItg:double NormaSpWrkItg:double NormaUnLoadItg:double NormaWrkDrvItg:double
  NormaNlprobegItg:double
  RasProbegItg
  Lst_GruztnItg  Gsm_GruztnItg  Lst_ProbegAllItg
  Lst_GruzTnKmItg   Gsm_TimeRepItg
  Gsm_TimeAllItg  Lst_KolezItg  Lst_ProbegwrkItg  KofNGsmItg :double
  Itg_ProbegCng   Itg_ProbegExt   Itg_PrNoCity    Itg_PrCity
  Itg_Pr1  Itg_Pr2  Itg_Pr3  Itg_PrMoun Itg_TimeMove
  LimitGsm_Itg
  cSigner : comp
 #FeeSignersFields
.endfields


.{
^
.}
^ ^
^ ^ ^ ^  ^  ^
^ ^ ^ ^ ^ ^
.{ CheckEnter GroupAnalGSM
GroupAnalGSM
^ ^
^ ^
.{ CheckEnter Shapka
^ ^ ^ ^ ^ ^
.}
.{ CheckEnter DocAnalGSM
DocAnalGSM
^ ^ ^
^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^
^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^
^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^
^ ^ ^ ^ ^ ^ ^ ^ ^
^ ^ ^ ^ ^ ^
.}
.{ CheckEnter TotalAnalGSM
TotalAnalGSM
^ ^ ^
^ ^
^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^
^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^
^ ^ ^ ^ ^ ^ ^ ^ ^  ^ ^ ^ ^ ^
.}
.}

Подножие

^
#FeeSignersBody(texg_rep)

ФинишПодножие

.endform
