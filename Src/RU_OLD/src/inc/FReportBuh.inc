//------------------------------------------------------------------------------
//                                                      (c) корпорация Галактика
// Галактика 7.12 - Бухгалтерский контур
// Связка с фастреопртом
//------------------------------------------------------------------------------

type TFReportWndParam = record
  IsAutoPeriod  : word;
  AutoBeginDate : date;
  AutoEndDate   : date;
  AutoBaseDate  : date;
  ForceCount    : byte;
  NumFmtMode    : word;
  NumFmtScope   : word;      // Масштаб значения
  NumFractPart  : word;      // Округлять дробную часть до NumFractPart знаков
  NumSeparator  : string[1]; // Символ-разделитель тысяч
  NumDecComa    : string[1]; // Символ-разделитель дробной части
  NumZeroSymbol : string[3]; // Вместо нулей печатать
  PrepareMode   : word;
  SavePath      : string;
  TestMode      : boolean;
end;
