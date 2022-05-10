.LinkForm 'TINYPAR_003MS' Prototype is 'TinyPar'
.Group '„€ƒŒ…’€‹‹›'
.NameInList '‘ á®¤¥à¦ ­¨¥¬ ¤à £¬¥â ««®¢ Œ‘'
.p 60
.[H SKIP
ÿ˜  ‹¨áâ@np@
ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ
  ¨¬¥­®¢ ­¨¥ Œ–/¤à £¬¥â. ³  ®¬¥­ª. ­®¬¥à   ³…¤.ãç.³  ‚•„Ÿ™ˆ‰ ‘’€’Š  ³       ˆ•„       ³       €‘•„       ³ˆ‘•„Ÿ™ˆ‰ ‘’€’Š
ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ
          (1)             ³       (2)        ³  (3) ³        (4)         ³         (5)        ³         (6)        ³         (7)
ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÿ˜
.]H
.var
  molKolB:Double
  molKolA:Double
  molKolS:Double
  molKolE:Double
  SklKol:Double
  AllKol:Double
.endvar
.Create view VDrag
from  KatDrag(readonly), NalDrag(readonly), KatEd(readonly), TmpSaldo2, synonym NalDrag NalDrag2
where
(( word(3)          == NalDrag.TiDk   and
   ¬æ_à¥ª           == NalDrag.cKatOS and
   NalDrag.cKatDrag == KatDrag.nRec   and
   KatDrag.cKatEd   == KatEd.nRec
))
;
.Create view MOLDrag
from  KatDrag(readonly),  KatEd(readonly)
where
(( ¬®«_à¥ª          == TmpSaldo2.cMOL (noindex) and
   -1               == TmpSaldo2.cPodr(noindex) and
   TmpSaldo2.cMC    == KatDrag.nRec   and
   KatDrag.cKatEd   == KatEd.nRec
))
;
.Create view PodrDrag
from  KatDrag(readonly),  KatEd(readonly)
where
(( áª« ¤_à¥ª        == TmpSaldo2.cPodr(noindex) and
   -1               == TmpSaldo2.cMOL (noindex) and
   TmpSaldo2.cMC    == KatDrag.nRec    and
   KatDrag.cKatEd   == KatEd.nRec
))
;
.Create view AllDrag
from  KatDrag(readonly),  KatEd(readonly)
where
(( -2               == TmpSaldo2.cPodr(noIndex) and
   TmpSaldo2.cMC    == KatDrag.nRec             and
   KatDrag.cKatEd   == KatEd.nRec
))
;
.function IF01(_d:double):double;
begin
  if01 := if ( abs(_d) < GetPresision_forKol, 1, _d) ;
end.
.function INSERTTMP2_DM(cDM_, cPodr_, cMOL_:comp):boolean;
begin
InsertTmp2_DM := true;
 
if VDrag.GetFirst TmpSaldo2 where ((cDM_   == TmpSaldo2.cMC   and
                                    cPodr_ == TmpSaldo2.cPodr and
                                    cMOL_  == TmpSaldo2.cMOL ))<>tsOk
  { VDrag.TmpSaldo2.cMC  := cDM_;
    VDrag.TmpSaldo2.cMOL := cMOL_;
    VDrag.TmpSaldo2.cPodr:= cPodr_;
    VDrag.TmpSaldo2.kol := tbk * VDrag.NalDrag.Kol;  VDrag.TmpSaldo2.kolP:= tak * VDrag.NalDrag.Kol;
    VDrag.TmpSaldo2.kolR:= tsk * VDrag.NalDrag.Kol;  VDrag.TmpSaldo2.sumP:= tek * VDrag.NalDrag.Kol;
    VDrag.insert current TmpSaldo2;
  }
else
  { VDrag.TmpSaldo2.kol := VDrag.TmpSaldo2.kol  + tbk * VDrag.NalDrag.Kol;
    VDrag.TmpSaldo2.kolP:= VDrag.TmpSaldo2.kolP + tak * VDrag.NalDrag.Kol;
    VDrag.TmpSaldo2.kolR:= VDrag.TmpSaldo2.kolR + tsk * VDrag.NalDrag.Kol;
    VDrag.TmpSaldo2.sumP:= VDrag.TmpSaldo2.sumP + tek * VDrag.NalDrag.Kol;
    VDrag.update current TmpSaldo2;
  }
end.
.fields
  ¤ â _­ ç «ì­ ï
  ¤ â _ª®­¥ç­ ï
  sPodr
  sMOL
  sMC
  sParty
  áª« ¤_¨¬ï
  ¬®«_¨¬ï
  ¬æ_¨¬ï
  ¬æ_­®¬
  ¥¤_ãçâ_¨¬ï
  VDrag.KatDrag.Name
  VDrag.KatDrag.Kod
  VDrag.KatEd.Name
  DoubleToStr(tbk * VDrag.NalDrag.Kol, '[|-]3666`666`666`666.8889999999')
  DoubleToStr(tak * VDrag.NalDrag.Kol, '[|-]3666`666`666`666.8889999999')
  DoubleToStr(tsk * VDrag.NalDrag.Kol, '[|-]3666`666`666`666.8889999999')
  DoubleToStr(tek * VDrag.NalDrag.Kol, '[|-]3666`666`666`666.8889999999')
  MOLDrag.KatDrag.Name
  MOLDrag.KatDrag.Kod
  MOLDrag.KatEd.Name
  DoubleToStr(MOLDrag.TmpSaldo2.kol , '[|-]3666`666`666`666.8889999999')
  DoubleToStr(MOLDrag.TmpSaldo2.kolP, '[|-]3666`666`666`666.8889999999')
  DoubleToStr(MOLDrag.TmpSaldo2.kolR, '[|-]3666`666`666`666.8889999999')
  DoubleToStr(MOLDrag.TmpSaldo2.sumP, '[|-]3666`666`666`666.8889999999')
  PodrDrag.KatDrag.Name
  PodrDrag.KatDrag.Kod
  PodrDrag.KatEd.Name
  DoubleToStr(PodrDrag.TmpSaldo2.kol , '[|-]3666`666`666`666.8889999999')
  DoubleToStr(PodrDrag.TmpSaldo2.kolP, '[|-]3666`666`666`666.8889999999')
  DoubleToStr(PodrDrag.TmpSaldo2.kolR, '[|-]3666`666`666`666.8889999999')
  DoubleToStr(PodrDrag.TmpSaldo2.sumP, '[|-]3666`666`666`666.8889999999')
  ALLDrag.KatDrag.Name
  ALLDrag.KatDrag.Kod
  ALLDrag.KatEd.Name
  DoubleToStr(ALLDrag.TmpSaldo2.kol , '[|-]3666`666`666`666.8889999999')
  DoubleToStr(ALLDrag.TmpSaldo2.kolP, '[|-]3666`666`666`666.8889999999')
  DoubleToStr(ALLDrag.TmpSaldo2.kolR, '[|-]3666`666`666`666.8889999999')
  DoubleToStr(ALLDrag.TmpSaldo2.sumP, '[|-]3666`666`666`666.8889999999')
.endfields

ÿˆ
       †ãà­ « ãç¥â  ¤à £®æ¥­­ëå ¬¥â ««®¢ (ª ¬­¥©) ¢ Œ–
        (®¡®à®â­ ï ¢¥¤®¬®áâì á ^ ¯® ^)
ÿ˜
  ˆá¯®«ì§ã¥¬ë¥ ä¨«ìâàë :
  ‘ª« ¤  : ^
  Œ‹    : ^
  Œ–     : ^
   àâ¨ï : ^
ÿˆ
  ‹¨áâ@np@
ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ
  ¨¬¥­®¢ ­¨¥ Œ–/¤à £¬¥â. ³  ®¬¥­ª. ­®¬¥à   ³…¤.ãç.³  ‚•„Ÿ™ˆ‰ ‘’€’Š  ³       ˆ•„       ³       €‘•„       ³ˆ‘•„Ÿ™ˆ‰ ‘’€’Š
ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ
          (1)             ³       (2)        ³  (3) ³        (4)         ³         (5)        ³         (6)        ³         (7)
ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÿ˜
.begin
delete all TmpSaldo2;
end.
.{CheckEnter TINYPARPODR
‘Š‹€„ ^
.{CheckEnter TINYPARMOL
Œ‹ ^
.{CheckEnter TINYPARMC
.begin
//if VDrag.getFirst NalDrag <>tsOk  { message(¬æ_à¥ª); TinyPar_003.fcontinue; }
end.
ÿ˜@@@@@@@@@@@@@@@@@@@@@@@@@@ @@@@@@@@@@@@@@@@@@ @@@@@@ÿ˜
.{CheckEnter TINYPARPARTY
.}
.{table 'VDrag.NalDrag'
.begin
   InsertTmp2_DM(VDrag.KatDrag.nRec, -1       , ¬®«_à¥ª); //áã¬¬¨àã¥¬ ¯® ¯® Œ‹
   InsertTmp2_DM(VDrag.KatDrag.nRec, áª« ¤_à¥ª, -1);      //áã¬¬¨àã¥¬ ¯® ¯®¤à.
   InsertTmp2_DM(VDrag.KatDrag.nRec, -2       ,  0);      //áã¬¬¨àã¥¬ ®¡é¨© ¨â®£
end.
ÿ˜ @@@@@@@@@@@@@@@@@@@@@@@@@ @@@@@@@@@@@@@@@@@@ @@@@@@ &&&&&&&&&&&.&&&&&&& &&&&&&&&&&&&&.&&&&&& &&&&&&&&&&&&.&&&&&&& &&&&&&&&&&&&&.&&&&&&ÿ˜
.}
.}
 ˆ’ƒ  Œ‹
.{table 'MOLDrag.TmpSaldo2'
ÿ™ @@@@@@@@@@@@@@@@@@@@@@@@@ @@@@@@@@@@@@@@@@@@ @@@@@@ &&&&&&&&&&&.&&&&&&& &&&&&&&&&&&&&.&&&&&& &&&&&&&&&&&&.&&&&&&& &&&&&&&&&&&&&.&&&&&&ÿ™
.}
.begin
delete TmpSaldo2 where (( ¬®«_à¥ª == TmpSaldo2.cMOL  (noindex) and
                               -1 == TmpSaldo2.cPodr (noindex) ));
end.
.}
ˆ’ƒ  ‘Š‹€„“
.{table 'PodrDrag.TmpSaldo2'
ÿ™ @@@@@@@@@@@@@@@@@@@@@@@@@ @@@@@@@@@@@@@@@@@@ @@@@@@ &&&&&&&&&&&.&&&&&&& &&&&&&&&&&&&&.&&&&&& &&&&&&&&&&&&.&&&&&&& &&&&&&&&&&&&&.&&&&&&ÿ™
.}
ÿ™ ---------------------------------------------------------------------------------------------------------------------------------------ÿ™
.begin
delete TmpSaldo2 where (( áª« ¤_à¥ª == TmpSaldo2.cPodr (noindex) and
                               -1   == TmpSaldo2.cMOL  (noindex) ));
end.
.}
ˆ’ƒ  ‚…„Œ‘’ˆ
.{table 'AllDrag.TmpSaldo2'
ÿ™ @@@@@@@@@@@@@@@@@@@@@@@@@ @@@@@@@@@@@@@@@@@@ @@@@@@ &&&&&&&&&&&.&&&&&&& &&&&&&&&&&&&&.&&&&&& &&&&&&&&&&&&.&&&&&&& &&&&&&&&&&&&&.&&&&&&ÿ™
.}

   ãª®¢®¤¨â¥«ì ¯à¥¤¯à¨ïâ¨ï

   ƒ« ¢­ë© ¡ãå£ «â¥à

   Œ..
.endform
