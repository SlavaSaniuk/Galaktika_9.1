.LinkForm 'MS  REESBVIP_02' Prototype is 'REESBVIP'
.Group 'ê••·‚‡Î ØÆ Ø•‡•Á®·´•≠®Ó ¢ ·°•‡°†≠™'
.NameInList 'MS  ‡••·‚‡ ≠† ™†‡‚-·Á•‚'
.p 60
.var
  KolList:Integer
  SumList1:Double
  St1:String
  OtGod:Word
  OtDay:String
  OtMon:String
  ItogSumma1:Double
  ItSt1:String
  ItSumSt1:String
  SummaStr1:String
  SummaStr2:String
  SummaStr3:String
  cur_per:String
  delimit:String
.endvar
.fields
  DatForm
  DatForm
  Ç®§ÎéØ´†‚
  Rab_Bknm
  Rab_Name
  XarName
  Mes
  God
  Npp
  Nom_lsh
  FIO
  cur_per
  KolList
  St1
  SummaStr2
  SummaStr3
  ê„™_Ø‡•§
  É´_°„Â£
  KolList
  ItSumSt1
  SummaStr2
  SummaStr3
  'true':'s'
.endfields
.begin
  KolList   := 0
        SumList1  := 0
        ItogSumma1:= 0
    case wGetTune('Fin.Simvol') of
      0: delimit := '.';
      2: delimit := '-';
      else
        delimit  := '=';
    end;
end.
.{
à¨Ô ‰†©´†: zarpl.txt   ê†ß¨•‡:       Ñ†‚†: @@@@@@@@@@  Ç‡•¨Ô:
 Ñ†‚†: @@@@@@@@@@
              ë è à ë é ä    N _____ Æ‚ "____"________________  £Æ§†
è‡®´Æ¶•≠®• ™ Ø´†‚•¶≠Æ¨„ ØÆ‡„Á•≠®Ó N _____ Æ‚ "____"________________ £Æ§†
.{
.[H OVERWRITE
.begin
 KolList:=KolList+1
end.
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
Ø•‡•Á®·´•≠®© ¢ @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
ØÆ´„Á†‚•´Ï @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
‡†°ÆÁ®¨ ® ·´„¶†È®¨  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                           ß† ^ ¨•·ÔÊ &&&& £.
ƒƒƒ¬ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¬ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¬ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ
 N ≥     çÆ¨•‡      ≥             î†¨®´®Ô à.é.           ≥ë„¨¨† §´Ô ß†Á®·´.
Ø/Ø≥ ´®Ê•¢Æ£Æ ·Á•‚† ≥                                    ≥≠† ´®Ê.·Á•‚(‡„°)
ƒƒƒ≈ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ≈ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ≈ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ
.]H
.{
.begin
 SumList1  := SumList1+Double(Sum_Per)
       ItogSumma1:= ItogSumma1+Double(Sum_Per)
      if RoundSum=1
        cur_per:= DoubleToStr(Double(sum_per),'666''666''666''666''667')+ delimit
     else
        cur_per:= GetStrSummaExt(true, true, Double(Sum_Per));
end.
&&&≥@@@@@@@@@@@@@@@@≥@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@≥&&&&&&&&&&&&&&&&&
.}
.[F OVERWRITE
.begin
if RoundSum=1
begin
  SumList1 := Round(SumList1);
  St1 := DoubleToStr(SumList1,'666''666''666''666''667')+ delimit
end
else
  St1 := GetStrSummaExt(true, true, SumList1);
end.
ƒƒƒ¡ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¡ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¡ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ
 à‚Æ£Æ ØÆ ´®·‚„ &&&:                                 &#'&&&&&&&&&&&&&&&&&&&
.begin
  //·„¨¨† Ø‡ÆØ®·ÏÓ ØÆ ´®·‚„
  SummaStr2:= '';
  SummaStr3:= '';
  SummaStr1:= DoubleToString(0,SumList1);
  if length(SummaStr1) > 83
   {
    SummaStr2:= GetPartStr(SummaStr1,83);
    if Trim(SummaStr2)=''
     SummaStr2:=substr(SummaStr1,1,83);
     SummaStr3:= substr(SummaStr1,length(SummaStr2)+1,83);
   }
  else
   {
     SummaStr2:= SummaStr1;
     SummaStr3:= '';
   }
end.
 @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
 @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                            (·„¨¨† ØÆ ´®·‚„ Ø‡ÆØ®·ÏÓ)
   ê„™. Ø‡•§Ø‡®Ô‚®Ô ^
                                                      _______________
                                                         (ØÆ§Ø®·Ï)
   É´. °„Â£†´‚•‡    ^
                                                      _______________
                                                         (ØÆ§Ø®·Ï)
.begin
 SumList1:=0
end.
.]F
.}
.begin
if RoundSum=1
begin
  ItogSum_Reestr1 := Round(ItogSum_Reestr1);
  ItSumSt1 := DoubleToStr(ItogSum_Reestr1,'666''666''666''666''667')+ delimit
end
else
  ItSumSt1 := GetStrSummaExt(true, true, ItogSum_Reestr1);
end.
 äÆ´-¢Æ ´®·‚Æ¢ &&&        ÇëÖÉé ä èÖêÖóàëãÖçàû       &'&&&&&&&&&&&&&&&&&&&&
.begin
  //·„¨¨† Ø‡ÆØ®·ÏÓ ™ Ø•‡•Á®·´•≠®Ó
  SummaStr2:= '';
  SummaStr3:= '';
  SummaStr1:= DoubleToString(0,ItogSum_Reestr1);
  if length(SummaStr1) > 83
   {
    SummaStr2:= GetPartStr(SummaStr1,83);
    if Trim(SummaStr2)=''
     SummaStr2:=substr(SummaStr1,1,83);
     SummaStr3:= substr(SummaStr1,length(SummaStr2)+1,83);
   }
  else
   {
     SummaStr2:= SummaStr1;
     SummaStr3:= '';
   }
end.
 @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
 @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                               (·„¨¨† Ø‡ÆØ®·ÏÓ)
.begin
  KolList:= 0
end.

.if BRPAGE
^
.else
.end
.}

.endform
