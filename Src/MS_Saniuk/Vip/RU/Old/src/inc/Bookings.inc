// const restriction
  bcOrg    =  1;
  bcPer    =  2;
  bcPrior  =  4;
  bcTime   =  8;
  // bcDoc    =  4; надеюсь, что ещё не привыкли

  // direction
  diInternal = 0;
  diExternal = 1;
  diCurrent  = 65535; // -1

  stIndependent = 0;
  stClamed      = 1;
  stIndent      = 2;
  stClosed      = 3;
  stBroken      = 4;

  // available value to field Terminal
  teSingle      = 0;
  teCompound    = 1;
  teInPlan      = 2;

  // Фильтры
  fiState       =    1;
  fiDirection   =    2;
  fiOrderDir    =    4;
  fiOrder       =    8;
  fiExecuterDir =   16;
  fiExecuter    =   32;
  fiType        =   64;
  fiPriority    =  128;
  fiCreate      =  256;
  fiPlan        =  512;
	fiDescr       = 1024;

  fiClState     =   1;
  fiClType      =   2;
  fiClResouce   =   4;
  fiClGroup     =   8;
  fiClCreate    =  16;
  fiClPlan      =  32;

  fiACode1      =   1;
  fiAValue1     =   2;
  fiACode2      =   4;
  fiAValue2     =   8;
  fiACode3      =  16;
  fiAValue3     =  32;
  fiACode4      =  64;
  fiAValue4     = 128;
  fiACode5      = 256;
  fiAValue5     = 512;



  // Настройки
  tuLog       =  1;
  tuLog_      =  2;
  tuInc       =  4;
  tuTax       =  8;
  tuNum       = 16;

  // Константы формирования
  peOk        = 0;
  peGlobal    = 1;
  peType      = 2;
  peIndent    = 3;

  // Тип спецификации
  clName      =  0;
  clMc        =  1;
  clUsl       =  2;

  // Необходимые поля для типа
  ftNumber    =   1;
  ftPrMc      =   2;
  ftName      =   4;
  ftBarCode   =   8;
  ftConstr    =  16;
  ftTex       =  32;
  ftOtpEd     =  64;
  ftKol       = 128;
  ftPrice     = 256;
  ftSumma     = 512;

// end;
