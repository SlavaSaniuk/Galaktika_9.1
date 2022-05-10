.LinkForm 'REESBVIP_av_IBAN' Prototype is 'REESBVIP'
.Group 'Реестры по перечислению в сбербанк'
.NameInList 'MC Перечисления аванса(версия WEB) IBAN'
.p 60
.var
  Npp_R:Integer
  D1   : double;
  D2   : date;     
  D3   : double;     
  D4   : double;          
  D5   : double;      
  D0   : string[28];      
  D6   : string[45];
  D7   : string[100];
  D8   : double;
  D9   : date;     
  D10  : string[1];
  i    : longint;
  NameF: string;
.endvar
.fields
  D1
  Replace(DateToStr(D2,'DD/MM/YYYY'),'/','.')
  D3
  D4
  D5
  D0
  D6
  D7
  D8
  Replace(DateToStr(D9,'DD/MM/YYYY'),'/','.')
  D10
  Trim(Nom_lsh)
  Sum_per
  Trim(FIO)
  Npp_R
  ItogSum_Reestr1
  'true':'s'
.endfields
.begin
  Npp_R := 0;
  D1 := 1;
  D2 := Cur_Date;
  D3 := 529;
  D4 := 529;
  D5 := 529;
  D0 := 'BY09AKBB30123654600125500000';
  D6 := 'Швайкова Ю.Н.';
  D7 := 'Перечисление аванса рабочих и служащих';
  D8 := 000;
  D9 := Cur_Date;
  D10:= 'K';
  i  := OpenFileHandle(1000000000);
  NameF := 'D:\Bank\Spis.txt';
  File_OpenFile(NameF,stCreate,i);
  message('Выгрузить списки на зачисление?',YesNo+Confirmation);
  Rundialog('Bank',D1,D2,D3,D4,D5,D0,D6,D7,D8,D9,D10);
end.
.begin
File_Writeln('<HEADER>',i);
File_Writeln('<NSP>'+Trim(DoubleToStr(D1,'666')),i);
File_Writeln('<DSP>'+Replace(DateToStr(D2,'DD/MM/YYYY'),'/','.'),i);
File_Writeln('<NFIL>'+Trim(DoubleToStr(D3,'666')),i);
File_Writeln('<NCBU>'+Trim(DoubleToStr(D4,'666')),i);
File_Writeln('<NOTD>'+Trim(DoubleToStr(D5,'666')),i);
File_Writeln('<ACC>'+D0,i);
File_Writeln('<CURRENCY>',i);
File_Writeln('<FISP>'+Trim(D6),i);
File_Writeln('<NZP>'+Trim(D7),i);
File_Writeln('<NPP>'+Trim(DoubleToStr(D8,'6666')),i);
File_Writeln('<DPP>'+Replace(DateToStr(D9,'DD/MM/YYYY'),'/','.'),i);
File_Writeln('<VSP>'+Trim(D10),i);
File_Writeln('<DELIMITER>',i);
end.
<HEADER>
<NSP>^
<DSP>^
<NFIL>^
<NCBU>^
<NOTD>^
<ACC>^
<CURRENCY> 
<FISP>^
<NZP>^
<NPP>^
<DPP>^
<VSP>^
<DELIMITER>
.{
.{
.{
.begin
 Npp_R:=Npp_R+1 
end.
@@@@@@@@@@@@@@@@@@@@@@@@@@@@ &&&&&&.&& @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
.begin
File_Writeln(Trim(Nom_lsh)+' '+Trim(DoubleToStr(Sum_per,'666666666.88'))+' '+Trim(FIO),i);
end.
.}
<EOD>
<TOTAL_P>^
.begin
File_Writeln('<EOD>',i);
File_Writeln('<TOTAL_P>'+Trim(DoubleToStr(Npp_R,'66666')),i);
end.
.[F OVERWRITE
.]F
.}
<TOTAL_S>^
.begin
File_Writeln('<TOTAL_S>'+ItogSum_Reestr1,i);
end.
.if BRPAGE
^
.else
.end
.}
.begin
     File_Close(i);
     message('Список на перечисления выгружен');
     message('Файл для банка D:\WEB\Spis.txt');
end.
.endform
