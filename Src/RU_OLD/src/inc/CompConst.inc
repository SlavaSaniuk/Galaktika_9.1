/*
 ╔═══════════════════════════════════════════════════════════════════════════╗
 ║                     (c) 1994,2001 корпорация ГАЛАКТИКА                    ║
 ║ Проект        : ГАЛАКТИКА                                                 ║
 ║ Система       : Производственный контур                                   ║
 ║ Версия        : 7.xx                                                      ║
 ║ Назначение    : константы компонент                                       ║
 ║ Ответственный : Короткин Юрий (cacJr)                                     ║
 ╚═══════════════════════════════════════════════════════════════════════════╝
*/
// макроопределение для добавления имени компоненты к имени интерфейса,
// переданного через переменную в методы Load/GetVIPRef
// использовать в следующем случае:
// было         - LoadVIPRef(ifcVar, ifcName);
// должно стать - LoadVIPRef(ifcVar, #AddComp(CompName)ifcName);
// в качестве CompName можно использовать объявленные ниже константы
// разовьём идею дальше, далее лицензирование
#ifdef ComponentVersion
#define AddComp(sComp) #sComp + '::' +
#define Licensed(FREE) Licensed (#FREE)
#else
#define AddComp(sComp) '' +
#define Licensed(FREE)
#end

// константы компонент
TPPComp       = 'M_TPP';
GPComp        = 'M_GetPotr';
MNPComp       = 'M_MnPlan';
QLTComp       = 'M_Quality';
UMPComp       = 'M_UP';
DVSComp       = 'M_DVS';
EIXMLComp     = 'M_EIXML';
MScriptsComp  = 'M_Scripts';
MSklPlanComp  = 'M_SklPlan';
STAFFComp     = 'z_Staff';
TRNComp       = 'M_Transp';
PRICEComp     = 'L_Prices';
REPOPERComp   = 'L_RepOper';
SKLADComp     = 'L_Sklad';
TREETUNEComp  = 'C_TreeTune';

// Для корректного указания индекса для массивов в структуре
// на 3-м и на 5-м Атлантисах
#ifdef ATL51
#define _$(sInd) [#sInd]
#else
#define _$(sInd) $#sInd
#endif
