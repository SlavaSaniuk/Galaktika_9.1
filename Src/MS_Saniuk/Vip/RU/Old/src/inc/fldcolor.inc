//
// Константы fldcolor.inc
//
// Они определяют порядковый номер элемента в дополнительной палитре
// Элементы дополнительной палитры описаны в RC\color.cfg
// Назначение : Названия элементов дополнительной палитры
//   PaletteNames:="этот цвет используется для..."
//   PaletteNames="а вот этот цвет для..."
//   и т.д.
// Назначение : Значения элементов дополнительной палитры
//   PaletteColors:=Black
//   PaletteColors=Maroon
//   и т.д.
// Константы в fldcolor.inc должны соответствовать порядку
// элементов доп. палитры описанных выше, нумерация их начинается с единицы (1)
// Константы с цифрами в конце имени зарезервированы, их можно переименовать
// и использовать по своему усмотрению

!системные цвета - должны начинаться с 1 и идти первыми
  ColorSysBlack    = 1;
  ColorSysMaroon   = 2;
  ColorSysGreen    = 3;
  ColorSysOlive    = 4;
  ColorSysNavy     = 5;
  ColorSysPurple   = 6;
  ColorSysTeal     = 7;
  ColorSysGray     = 8;
  ColorSysSilver   = 9;
  ColorSysRed      = 10;
  ColorSysLime     = 11;
  ColorSysYellow   = 12;
  ColorSysBlue     = 13;
  ColorSysFuchsia  = 14;
  ColorSysAqua     = 15;
  ColorSysWhite    = 16;

!общие
  ColorNeed         =  17;
  ColorError        =  18;
  ColorMark         =  19;
  ColorGray         =  20;
  ColorErrorRec     =  21;
  ColorSys06        =  22;
  ColorSys07        =  23;
  ColorSys08        =  24;
  ColorSys09        =  25;
  ColorSys10        =  26;

!основные
  ColorOSNotAmort   = 27;
  ColorOSIzn        = 28;
  ColorOSVyb        = 29;
  ColorOSOtkat      = 30;
  ColorOS05         = 31;

!векселя и кредиты
  ColorAppNPerf     = 32;
  ColorAppExpired   = 33;
  ColorSpAppNPerf   = 34;
  ColorExpired      = 35;
  ColorApp05        = 36;

!фин.менеджмент
  ColorOFPValuta    = 37;
  ColorOFPRest      = 38;
  ColorOFPPrihod    = 39;
  ColorOFPOborot    = 40;
  ColorOFPDefPlan   = 41;
  ColorOFPPlan      = 42;
  ColorOFPName      = 43;
  ColorOFPTopLevel  = 44;
  ColBkOFPTopLevel  = 45;
  ColorOFPInertCl   = 46;
  ColorOFPDeficit   = 47;
  ColorOFPAktNotPerf= 48;
  ColorOFPAktPerf   = 49;
  ColorOFPAktToday  = 50;
  ColorOFPAktRisk   = 51;

!фин.планирование
  ColorFPCompare    = 52;
  ColorFPResultComp = 53;
  ColorFPCritical   = 54;
  ColorFPShow       = 55;
  ColorFPNeed       = 56;
  ColorFPFormula    = 57;

!акты взаимозачета
  ColorVZZakr       = 58;
  ColorVZProsrocheno= 59;
  ColorVZNorm       = 60;

!розничная торговля
  ColorSkip         = 61;

! Настройка
  ColorSysTune    = 62;
  ColorUserTune   = 63;

!Управление ремонтами
  ColorRemPlan    = 64;
  ColorRemNotPlan = 65;
  ColorRemNotRab  = 66;
  ColorRemToday   = 67;
  ColorRemNeispr  = 68;
  ColorRemPrevSr  = 69;
  ColorRemDefekt  = 70;
  ColorRemPeriod  = 71;
  ColorRemFilter  = 72;
  ColorRemSort    = 73;
  ColorRemVidGraf = 74;
!! Следующие 32 константы не перемещать,
!! они должны следовать строго друг за другом!!!
!Финансовый анализ - палитра 1 -
  ColorFA0101 = 75;
  ColorFA0102 = 76;
  ColorFA0103 = 77;
  ColorFA0104 = 78;
  ColorFA0105 = 79;
  ColorFA0106 = 80;
  ColorFA0107 = 81;
  ColorFA0108 = 82;
!Финансовый анализ - палитра 2
  ColorFA0201 = 83;
  ColorFA0202 = 84;
  ColorFA0203 = 85;
  ColorFA0204 = 86;
  ColorFA0205 = 87;
  ColorFA0206 = 88;
  ColorFA0207 = 89;
  ColorFA0208 = 90;
!Финансовый анализ - палитра 3
  ColorFA0301 = 91;
  ColorFA0302 = 92;
  ColorFA0303 = 93;
  ColorFA0304 = 94;
  ColorFA0305 = 95;
  ColorFA0306 = 96;
  ColorFA0307 = 97;
  ColorFA0308 = 98;
!Финансовый анализ - палитра 4
  ColorFA0401 = 99;
  ColorFA0402 = 100;
  ColorFA0403 = 101;
  ColorFA0404 = 102;
  ColorFA0405 = 103;
  ColorFA0406 = 104;
  ColorFA0407 = 105;
  ColorFA0408 = 106;
!Поставщики-получатели
  ColorBD0001 = 107;
  ColorBD0002 = 108;
  ColorBD0003 = 109;
!Плановое движение МЦ
  ColorPlanMoveRash   = 110;
!Планы капстроительства
  ColorUksGray       = 111;
  ColorUksCompare    = 112;
  ColorUksResultComp = 113;
  ColorUksCritical   = 114;
!Планирование производства
  ColorOPDemand       = 115;
  ColorOPChangeManual = 116;
  ColorOPChangeAuto   = 117;

! Кассовые и платежные документы
  ColorFroClosePer    = 118;
  ColorFroDescr       = 119;
  ColorFroStatus      = 120;

! Управление учебным поцессом
  ColorAutumnSemester = 121;
  ColorUUPModul1      = 122;
  ColorUUPModul2      = 123;
  ColorUUPModul3      = 124;
  ColorSpringSemester = 125;
  ColorUUPModul4      = 126;
  ColorUUPModul5      = 127;
  ColorUUPModul6      = 128;


!Непонятно откуда взялись (наверное из 6.0). И им нет соответствия в color.cfg
! Поэтому закоментарил. (Mike).
!  ColorOFPNow     = 11; // 3;
!  ColorOFPOld     =  6; // 8;
!  ColorOFPMark    =  2; //10;
!  ColorTopLevel   = 15;
!  BkColorTopLevel =  3;