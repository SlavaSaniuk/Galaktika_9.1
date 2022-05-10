// SetFontStyle
// Cell font style
  xlBold      = 1;
  xlItalic    = 2;
  xlUnderline = 4;

// AlignCells, AlignCellsEx
// Cell value alignment
  xlCenter  = -4108;
  xlLeft    = -4131;
  xlRight   = -4152;
  xlTop     = -4160;
  xlBottom  = -4107;
  xlFill    =  5;
  xlGeneral =  1;

// FrameCells
// Cell border styles
  xlBorderL   = 1;
  xlBorderR   = 2;
  xlBorderT   = 4;
  xlBorderB   = 8;
  xlInsideH   = 16;
  xlInsideV   = 32;
  xlDiagonalD = 64;
  xlDiagonalU = 128;

// нужные битики устанавливаются в порядке следования констант
  xlEdgeLeft         = 7;
  xlEdgeRight        = 10;
  xlEdgeTop          = 8;
  xlEdgeBottom       = 9;
  xlInsideHorizontal = 12;
  xlInsideVertical   = 11;
  xlDiagonalDown     = 5;
  xlDiagonalUp       = 6;

// FrameCells
// line styles
  xlContinuous    =  1;
  xlDash          = -4115;
  xlDashDot       =  4;
  xlDashDotDot    =  5;
  xlDot           = -4118;
  xlDouble        = -4119;
  xlSlantDashDot  =  13;
  xlLineStyleNone = -4142;

// borders weight
  xlHairline = 1;
  xlThin     = 2;
  xlMedium   = -4138;
  xlThick    = 4;

// Cell insert shift
// куда вставляем область
  xlShiftToRight  = -4161;
  xlShiftDown     = -4121;

// Cell delete shift
// как удалять область
  xlShiftToLeft   = -4159;
  xlShiftUp       = -4162;

// Types of sheets
  xlWorkSheet            = -4167;
  xlChart                = -4109;
  xlExcel4MacroSheet     = 3;
  xlExcel4IntlMacroSheet = 4;

// В библиотеке превышение этих констант нигде не проверяется
  MaxExcelRow = 65536;
  MaxExcelCol = 256;

// Orientation:
  xlPortrait=                          1;
  xlLandscape=                         2;
// PaperSize:
// Учитывайте, что принтеры обычно не поддерживают весь список типов !!!
  xlPaper11x17=                       17;
  xlPaperA4=                           9;
  xlPaperA5=                          11;
  xlPaperB5=                          13;
  xlPaperDsheet=                      25;
  xlPaperEnvelope11=                  21;
  xlPaperEnvelope14=                  23;
  xlPaperEnvelopeB4=                  33;
  xlPaperEnvelopeB6=                  35;
  xlPaperEnvelopeC4=                  30;
  xlPaperEnvelopeC6=                  31;
  xlPaperEnvelopeDL=                  27;
  xlPaperEnvelopeMonarch=             37;
  xlPaperEsheet=                      26;
  xlPaperFanfoldLegalGerman=          41;
  xlPaperFanfoldUS=                   39;
  xlPaperLedger=                       4;
  xlPaperLetter=                       1;
  xlPaperNote=                        18;
  xlPaperStatement=                    6;
  xlPaperUser=                       256;
  xlPaper10x14=                       16;
  xlPaperA3=                           8;
  xlPaperA4Small=                     10;
  xlPaperB4=                          12;
  xlPaperCsheet=                      24;
  xlPaperEnvelope10=                  20;
  xlPaperEnvelope12=                  22;
  xlPaperEnvelope9=                   19;
  xlPaperEnvelopeB5=                  34;
  xlPaperEnvelopeC3=                  29;
  xlPaperEnvelopeC5=                  28;
  xlPaperEnvelopeC65=                 32;
  xlPaperEnvelopeItaly=               36;
  xlPaperEnvelopePersonal=            38;
  xlPaperExecutive=                    7;
  xlPaperFanfoldStdGerman=            40;
  xlPaperFolio=                       14;
  xlPaperLegal=                        5;
  xlPaperLetterSmall=                  2;
  xlPaperQuarto=                      15;
  xlPaperTabloid=                      3;
