//************************************************************************************************************
//                                                                                    (c) корпорация Галактика
// Галактика 8.1 - Бухгалтерский контур
// Внешние процедуры и функции из G_TXO.dll
//************************************************************************************************************

//------------------------------------------------------------------------------------------------------------
// BsVisual.pas
function  Init_BSVisual(String, String, Boolean) : boolean;                              external 'G_TXO.DLL';
procedure Done_BSVisual;                                                                 external 'G_TXO.DLL';
procedure StartNew_BSVisual(String);                                                     external 'G_TXO.DLL';
procedure SetHeader_BSVisual(String);                                                    external 'G_TXO.DLL';
procedure SetTitle_BSVisual(String);                                                     external 'G_TXO.DLL';
function  Next_BSVisual : boolean;                                                       external 'G_TXO.DLL';
procedure Stop_BSVisual(String);                                                         external 'G_TXO.DLL';
//------------------------------------------------------------------------------------------------------------
//Tpp_Lexer.pas
function TxoLexer_Create: longint;                                                       external 'G_TXO.DLL';
procedure TxoLexer_SetText(hLexer: longint, Text: string);                               external 'G_TXO.DLL';
procedure TxoLexer_Next(hLexer: longint);                                                external 'G_TXO.DLL';
procedure TxoLexer_NextNoSpace(hLexer: longint);                                         external 'G_TXO.DLL';
procedure TxoLexer_NextNoJunk(hLexer: longint);                                          external 'G_TXO.DLL';
procedure TxoLexer_SetRunPos(hLexer: longint, RunPos: Integer);                          external 'G_TXO.DLL';
function TxoLexer_GetRunPos(hLexer: longint): Integer;                                   external 'G_TXO.DLL';
function TxoLexer_FormulaNoEmpty(hLexer: longint): boolean;                              external 'G_TXO.DLL';
function TxoLexer_TokenID(hLexer: longint): longint;                                     external 'G_TXO.DLL';
function TxoLexer_Token(hLexer: longint): string;                                        external 'G_TXO.DLL';
function TxoLexer_TokenPos(hLexer: longint): Integer;                                    external 'G_TXO.DLL';
function TxoLexer_TokenLen(hLexer: longint): Integer;                                    external 'G_TXO.DLL';
function TxoLexer_IsSpace(hLexer: longint): Boolean;                                     external 'G_TXO.DLL';
function TxoLexer_IsJunk(hLexer: longint): Boolean;                                      external 'G_TXO.DLL';
procedure TxoLexer_Free(hLexer: longint);                                                external 'G_TXO.DLL';
//------------------------------------------------------------------------------------------------------------
// Masks.pas
function  MatchesMask(String, String) : boolean;                                         external 'G_TXO.DLL';
function  IsSingleMask(String) : boolean;                                                external 'G_TXO.DLL';
// Создать объект работы с масками
function ManyMask_Create : longint;                                                      external 'G_TXO.DLL';
// Разобрать маску, результат true если маска разобралась без ошибок
function ManyMask_Parse(hMask : longint, Mask : string) : boolean;                       external 'G_TXO.DLL';
// Проверить удовлетворяет строка Name маске или нет
function ManyMask_Match(hMask : longint, Name : string) : boolean;                       external 'G_TXO.DLL';
// Очистить список параметров
procedure ManyMask_SqlParamClear(hMask : longint);                                       external 'G_TXO.DLL';
// Получить количество параметров
function ManyMask_SqlParamCount(hMask : longint) : integer;                              external 'G_TXO.DLL';
// Получить значение параметра по индексу для последующей связки с SQL запросом
function ManyMask_SqlParamValue(hMask : longint, ParamIndex: integer) : string;          external 'G_TXO.DLL';
//возвращает TRUE когда включающая часть маски содержит *
function ManyMask_IncPartHasStar(hMask: longint): boolean;                               external 'G_TXO.DLL';
function ManyMask_GetExcludeCount(hMask: longint): integer;                              external 'G_TXO.DLL';
//есть ли неприводимые к целому числу элементы маски
function ManyMask_HasNotNumeric(hMask: longint): boolean;                                external 'G_TXO.DLL';
// Освободить объект работы с масками
procedure ManyMask_Free(hMask : longint);                                                external 'G_TXO.DLL';
//есть ли в хорошей функции пустые значения
function ManyMask_HasEmpty(hMask : longint) : boolean;                                   external 'G_TXO.DLL';
// хорошая функция
function ManyMask_MaskToSqlJoin(hMask : longint, var hStr: longint, Mask: string, KauTable : string, KauCode : string) : boolean;   external 'G_TXO.DLL';
function ManyMask_FilterToSqlJoin(hMask : longint, var hStr : longint, hSiServ : longint, FilterIndex: longint, KauTable : string, KauCode : string) : boolean;   external 'G_TXO.DLL';
// хорошая функция без Union и с KOdGrUp для SpKau
function ManyMask_MaskToSqlJoin1(hMask : longint, var hStr: longint, Mask: string, KauTable : string, KauCode : string) : boolean;   external 'G_TXO.DLL';
// хорошая функция lkz внешних фильтров и аналитик  с KOdGrUp для SpKau
function ManyMask_FilterToSqlJoin1(hMask : longint, var hStr : longint, hSiServ : longint, FilterIndex: longint, KauTable : string, KauCode : string) : boolean;   external 'G_TXO.DLL';

//------------------------------------------------------------------------------------------------------------
// MySysUtils.pas
function  QbExtractRelativePath(String, String) : String;                                external 'G_TXO.DLL';
//------------------------------------------------------------------------------------------------------------
// Tpp_Reg.pas
// ToDo - пересмотреть эти функции
function  OkServTXO(Longint, Comp, Integer) : Boolean;                                   external 'G_TXO.DLL';
function  MakeTXODoc(Integer, Comp, Comp, Comp, Word, Byte) : Boolean;                   external 'G_TXO.DLL';
// Новые функции ТХО
function  InitServTXO(Word) : Boolean;                                                   external 'G_TXO.DLL';
procedure DoneServTXO;                                                                   external 'G_TXO.DLL';
function  TxoMakeSimple(comp, comp) : boolean;                                           external 'G_TXO.DLL';
procedure TxoResetServer;                                                                external 'G_TXO.DLL';
function  TxoMakeSpecial(comp, comp, comp) : boolean;                                    external 'G_TXO.DLL';
function  TxoMakeSpecialOnDate(comp, comp, comp, date) : boolean;                        external 'G_TXO.DLL';
function  Call_Protokol_Provodka(comp, comp, comp, boolean, boolean) : boolean;          external 'G_TXO.DLL';
function  TxoCorrectSpecial(comp, comp, comp, word) : boolean;                           external 'G_TXO.DLL';
procedure TxoSetCheckExclusionPatDefs;                                                   external 'G_TXO.DLL';
function  TxoCheckSpecial(comp, comp, comp) : boolean;                                   external 'G_TXO.DLL';
function  TxoDeleteSpecial(comp, comp) : boolean;                                        external 'G_TXO.DLL';
procedure TxoProcessProtokol;                                                            external 'G_TXO.DLL';
function  TxoProtokolLevel : Word;                                                       external 'G_TXO.DLL';
function  TxoProtokolType : Word;                                                        external 'G_TXO.DLL';
procedure TxoSetProtokolLevel(word);                                                     external 'G_TXO.DLL';
procedure TxoSetProtokolType(word);                                                      external 'G_TXO.DLL';
procedure TxoProtokolMsg(Word, String, String);                                          external 'G_TXO.DLL';
procedure TxoAddFormulaForCheck(String, String, String, String, String);                 external 'G_TXO.DLL';
procedure TxoAddCycleFilterForCheck(String);                                             external 'G_TXO.DLL';
function  TxoFormulaCheck : boolean;                                                     external 'G_TXO.DLL';
procedure TxoExtractKau(comp, boolean, longint);                                         external 'G_TXO.DLL';
procedure TxoExtractKauEx(comp);                                                         external 'G_TXO.DLL';
function  TxoGetExtractedKau(word, word) : comp;                                         external 'G_TXO.DLL';
function  TxoDocLinkMakeStart(comp, comp, comp) : boolean;                               external 'G_TXO.DLL';
function  TxoDocLinkMakeStep(word, comp) : boolean;                                      external 'G_TXO.DLL';
function  TxoDocLinkMakeFinish : boolean;                                                external 'G_TXO.DLL';
function  TxoDocLinkDelete(comp, comp, word, comp) : boolean;                            external 'G_TXO.DLL';
function  CheckNRecEX(Word,   Comp) : Boolean;                                           external 'G_TXO.DLL';
function  sTxoGetExtAttr(String, String, Comp) : String;                                 external 'G_TXO.DLL';
function  doTxoGetExtAttr(String, String, Comp) : Double;                                external 'G_TXO.DLL';
function  dTxoGetExtAttr(String, String, Comp) : Date;                                   external 'G_TXO.DLL';
function  tTxoGetExtAttr(String, String, Comp) : Time;                                   external 'G_TXO.DLL';
function  coTxoGetExtAttr(String, String, Comp) : Comp;                                  external 'G_TXO.DLL';
function  sTxoGetField(String, String, Comp) : String;                                   external 'G_TXO.DLL';
function  cTxoGetField(String, String, Comp) : Char;                                     external 'G_TXO.DLL';
function  bTxoGetField(String, String, Comp) : Byte;                                     external 'G_TXO.DLL';
function  wTxoGetField(String, String, Comp) : Word;                                     external 'G_TXO.DLL';
function  iTxoGetField(String, String, Comp) : Integer;                                  external 'G_TXO.DLL';
function  lTxoGetField(String, String, Comp) : LongInt;                                  external 'G_TXO.DLL';
function  dTxoGetField(String, String, Comp) : Date;                                     external 'G_TXO.DLL';
function  tTxoGetField(String, String, Comp) : Time;                                     external 'G_TXO.DLL';
function  dtTxoGetField(String, String, Comp) :_DateTime;                                external 'G_TXO.DLL';
function  boTxoGetField(String, String, Comp) : Boolean;                                 external 'G_TXO.DLL';
function  doTxoGetField(String, String, Comp) : Double;                                  external 'G_TXO.DLL';
function  coTxoGetField(String, String, Comp) : Comp;                                    external 'G_TXO.DLL';
function  TxoGetExClassCode1(string, word, comp) : String;                               external 'G_TXO.DLL';
function  TxoGetExClassName1(string, word, comp) : String;                               external 'G_TXO.DLL';
function  TxoGetExClassCode2(string, string, comp) : String;                             external 'G_TXO.DLL';
function  TxoGetExClassName2(string, string, comp) : String;                             external 'G_TXO.DLL';
// Функции для работы с сервером формул из VIP
function  FormExInit : boolean;                                                          external 'G_TXO.DLL';
procedure FormExDone;                                                                    external 'G_TXO.DLL';
procedure FormExClearFormula;                                                            external 'G_TXO.DLL';
procedure FormExSetPatAutoPeriod(date, date, date);                                      external 'G_TXO.DLL';
procedure FormExSetPatPeriod(date, date);                                                external 'G_TXO.DLL';
procedure FormExSetPatDateHoz(date);                                                     external 'G_TXO.DLL';
function  FormExAddKey(String, String, String, String, String) : boolean;                external 'G_TXO.DLL';
procedure FormExDelKey(String);                                                          external 'G_TXO.DLL';
function  FormExStartCount(word) : boolean;                                              external 'G_TXO.DLL';
function  FormExGetKeyValues(String, var AnyType, var AnyType, var AnyType) : boolean;   external 'G_TXO.DLL';
// Извлечь 3КАУ и подразделение по Счету из SoprHoz
function  FindKauKode(String, String, Boolean, Word, Comp) : Boolean;                    external 'G_TXO.DLL';
function  GivenKauTbl(Word) : Word;                                                      external 'G_TXO.DLL';
function  GivenKauKode(Word) : Comp;                                                     external 'G_TXO.DLL';
function  GivenKodSp : Comp;                                                             external 'G_TXO.DLL';
// Сервер ТХО - для закрытия счетов
function  CloseSchInit : boolean;                                                        external 'G_TXO.DLL';
procedure CloseSchDone;                                                                  external 'G_TXO.DLL';
function  CloseSchMake(comp, string, date, date) : boolean;                              external 'G_TXO.DLL';
procedure CloseSchResetServer;                                                           external 'G_TXO.DLL';
procedure CloseSchProcessProtokol;                                                       external 'G_TXO.DLL';
function  CloseSchProtokolLevel : Word;                                                  external 'G_TXO.DLL';
procedure CloseSchProtokolMsg(Word, String, String);                                     external 'G_TXO.DLL';
//------------------------------------------------------------------------------------------------------------
// QbMainGa.pas
function  QbNewFileName(String, String, String) : String;                                external 'G_TXO.DLL';
//------------------------------------------------------------------------------------------------------------
// Tpp_Api.pas
procedure TxoHeadClear(longint);                                                         external 'G_TXO.DLL';
procedure TxoHeadAddKau(longint, word, word, comp);                                      external 'G_TXO.DLL';
function  TxoHeadAddSchet(longint, word, string, string) :boolean;                       external 'G_TXO.DLL';
procedure TxoHeadAddDate(longint, word, date);                                           external 'G_TXO.DLL';
procedure TxoHeadSetResultStr(longint, string);                                          external 'G_TXO.DLL';
procedure TxoHeadSetResultDate(longint, date);                                           external 'G_TXO.DLL';
procedure TxoHeadSetResultWord(longint, word);                                           external 'G_TXO.DLL';
procedure TxoHeadSetResultDouble(longint, double);                                       external 'G_TXO.DLL';
procedure TxoBodyClear(longint);                                                         external 'G_TXO.DLL';
procedure TxoBodyAddKau(longint, word, word, comp);                                      external 'G_TXO.DLL';
function  TxoBodyAddSchet(longint, word, string, string) :boolean;                       external 'G_TXO.DLL';
procedure TxoBodyAddDate(longint, word, date);                                           external 'G_TXO.DLL';
procedure TxoBodySetSum(longint, double, double, double);                                external 'G_TXO.DLL';
procedure TxoBodySetSumVal(longint, double, comp);                                       external 'G_TXO.DLL';
procedure TxoBodySetSumKol(longint, double, comp);                                       external 'G_TXO.DLL';
procedure TxoBodyDisableFilter(longint);                                                 external 'G_TXO.DLL';
procedure TxoBodyInsert(longint);                                                        external 'G_TXO.DLL';
procedure TxoDebugMsg(longint, string, string);                                          external 'G_TXO.DLL';
function  TxoParamCount(longint) : word;                                                 external 'G_TXO.DLL';
function  TxoParamName(longint, word) : string;                                          external 'G_TXO.DLL';
function  TxoParamValue(longint, word) : string;                                         external 'G_TXO.DLL';
function  TxoExecPat(longint, string, var double, var double, var double) : boolean;     external 'G_TXO.DLL';
function  TxoGetInfoCloSch(longint, var AnyType) : boolean;                              external 'G_TXO.DLL';
function  TxoGetInfoDocLink(longint, var word, var comp) : boolean;                      external 'G_TXO.DLL';
procedure TxoAllowRecallStoreCycles(longint);                                            external 'G_TXO.DLL';
function  TxoSetKau(word, word, comp) : boolean;                                         external 'G_TXO.DLL';
function  TxoSetDate(word, date) : boolean;                                              external 'G_TXO.DLL';
function  TxoSetSchetNrec(word, comp) : boolean;                                         external 'G_TXO.DLL';
function  TxoSetSchet(word, string, string, boolean) : boolean;                          external 'G_TXO.DLL';
function  GetKauMcUsl(comp, comp, byte, comp) : comp;                                    external 'G_TXO.DLL';
function  TxoGetCursVal(string, date, word) : double;       				                     external 'G_TXO.DLL';
//------------------------------------------------------------------------------------------------------------
// Coun_Gal.pas
function  CountPatReport(String, String, Longint, Word, var String) : boolean;           external 'G_TXO.DLL';
function  CountPatReport_EX(String, String, String, Longint, Word, var String) : boolean;external 'G_TXO.DLL';
function  patRep_Create : longint;                                                       external 'G_TXO.DLL';
function  patRep_Free(longint) : boolean;                                                external 'G_TXO.DLL';
procedure patRep_Clear(longint);                                                         external 'G_TXO.DLL';
function  patRep_ParsePatFile(longint, string) : longint;                                external 'G_TXO.DLL';
function  patRep_WritePatFile(longint, string) : boolean;                                external 'G_TXO.DLL';
function  patRep_GetPatSiServ(longint) : longint;                                        external 'G_TXO.DLL';
function  patRep_CheckReport(longint, String, String, Boolean) : longint;                external 'G_TXO.DLL';
procedure patRep_SetSilentMode(longint, boolean);                                        external 'G_TXO.DLL';

procedure patRep_SetCheckLevel(longint, word);                                                  external 'G_TXO.DLL';
function  patRep_GetBreakedFlg(longint) : boolean;                                              external 'G_TXO.DLL';
procedure patRep_SetKonsalRep(longint, boolean);                                                external 'G_TXO.DLL';
function  patRep_CheckForm(longint, string) : boolean;                                          external 'G_TXO.DLL';
function  patRep_ParseMeta(longint,String):boolean;                                             external 'G_TXO.DLL';
function  patRep_ParseExpr(longint):boolean;                                                    external 'G_TXO.DLL';
function  patRep_Count(longint):boolean;                                                        external 'G_TXO.DLL';
function  patRep_GetFServ(longint) : longint;                                                   external 'G_TXO.DLL';
function  SiServ_ParseFormulaNew(longint, var ObjRef, string) : boolean;                        external 'G_TXO.DLL';
function  patRep_NormalizeKey(longint, string, longint) : String;                               external 'G_TXO.DLL';
function  patRep_ChildKeys(hPatRep : longint, Key : string, Marker: longint) : boolean;         external 'G_TXO.DLL';

function  patRep_GetKeyFieldFormatted(hPatRep : longint, ItemIdx : longint, wField : word, Num : boolean) : String; external 'G_TXO.DLL';
function SiServ_SetFilterExtName(longint, longint, string) : boolean;                           external 'G_TXO.DLL';
//------------------------------------------------------------------------------------------------------------
// Formulas.pas
function  GetFilterExtName(String) : String;                                             external 'G_TXO.DLL';
procedure FServ_ClearFormula(longint);                                                          external 'G_TXO.DLL';
procedure FServ_SetPatAutoPeriod(longint, date, date, date);                                    external 'G_TXO.DLL';
procedure FServ_SetPatPeriod(longint, date, date);                                              external 'G_TXO.DLL';
procedure FServ_SetPatDateHoz(longint, date);                                                   external 'G_TXO.DLL';
function  FServ_AddKey(longint, String, String, String, String, String) : boolean;              external 'G_TXO.DLL';
procedure FServ_DelKey(longint, String);                                                        external 'G_TXO.DLL';
function  FServ_StartCount(longint, word) : boolean;                                            external 'G_TXO.DLL';
function  FServ_GetKeyValues(longint, String, var AnyType, var AnyType, var AnyType) : boolean; external 'G_TXO.DLL';
function  FServ_GetKeyValuesPasStr(longint, String, var string, var string, var string):boolean;external 'G_TXO.DLL';
function  FServ_GetKeysCount(longint):longint;                                                  external 'G_TXO.DLL';
function  FServ_GetKeyField(longint, longint, word):String;                                     external 'G_TXO.DLL';
function  FServ_GetFomulaIndex(hFServ : longint, aKey : String) : longint;                      external 'G_TXO.DLL';
procedure FServ_SetAllSkip(hFServ : longint);                                                   external 'G_TXO.DLL';
function  FServ_StartCountNoSkip(hFServ : longint, aKey : string, aCheck : word) : boolean;     external 'G_TXO.DLL';
//------------------------------------------------------------------------------------------------------------
// FreportBuh.pas
function  frBuh_CheckSemaphore : boolean;                                                external 'G_TXO.DLL';
function  frBuh_Create : longint;                                                        external 'G_TXO.DLL';
function  frBuh_IsWindowActive(longint) : boolean;                                       external 'G_TXO.DLL';
function  frBuh_Load(longint, string, string ) : boolean;                                external 'G_TXO.DLL';
function  frBuh_Save(longint, string, string ) : boolean;                                external 'G_TXO.DLL';
procedure frBuh_RunFastReport(longint, word);                                            external 'G_TXO.DLL';
procedure frBuh_BindWindowClosed(longint);                                               external 'G_TXO.DLL';
procedure frBuh_SetPeriod(longint, date, date);                                          external 'G_TXO.DLL';
function  frBuh_PrepareReport(longint) : boolean;                                        external 'G_TXO.DLL';
function  frBuh_LoadPreparedReport(longint, string, string ) : boolean;                  external 'G_TXO.DLL';
function  frBuh_SavePreparedReport(longint, string, string ) : boolean;                  external 'G_TXO.DLL';
procedure frBuh_SetWorkingFolder(longint, string);                                       external 'G_TXO.DLL';
function  frBuh_GetMemoText(longint, string) : string;                                   external 'G_TXO.DLL';
procedure frBuh_ShowActiveView(longint, string, boolean);                                external 'G_TXO.DLL';
procedure frBuh_FormulaClear(longint);                                                   external 'G_TXO.DLL';
function  frBuh_FormulaAddKey(longint, string, string) : boolean;                        external 'G_TXO.DLL';
function  frBuh_FormulaStartCount(longint, word) : boolean;                              external 'G_TXO.DLL';
function  frBuh_FormulaGetKeyValueAsStr(longint, String, var string) : boolean;          external 'G_TXO.DLL';
function  frBuh_BuildFileImage(longint) : boolean;                                       external 'G_TXO.DLL';
procedure frBuh_RunPreviewFileImage(longint);                                            external 'G_TXO.DLL';
procedure frBuh_WriteToImnsFile(longint);                                                external 'G_TXO.DLL';
procedure frBuh_CallPDF417(longint, boolean);                                            external 'G_TXO.DLL';

function  frBuh_GetImnsInfo(longint, string) : string;                                   external 'G_TXO.DLL';
function  frBuh_CallScript(longint, word) : word;                                        external 'G_TXO.DLL';

function  frBuh_SplitFormula(longint, string) : longint;                                 external 'G_TXO.DLL';
function  frBuh_GetListItemId(longint, longint) : string;                                external 'G_TXO.DLL';
function  frBuh_IsValidItemId(longint, string) : boolean;                                external 'G_TXO.DLL';
procedure frBuh_SubstitutionClear(longint);                                              external 'G_TXO.DLL';
procedure frBuh_SubstitutionAdd(longint, string, string);                                external 'G_TXO.DLL';
function  frBuh_WndParamShow(longint) : boolean;                                         external 'G_TXO.DLL';
function  frBuh_WndParamNeedSave(longint) : boolean;                                     external 'G_TXO.DLL';
function  frBuh_WndParamSaveFolder(longint) : string;                                    external 'G_TXO.DLL';
function  frBuh_GetNumFmtScope(longint) : word;                                          external 'G_TXO.DLL';
procedure frBuh_SetDskPrefix(string);                                                    external 'G_TXO.DLL';
function  frBuh_GetDskPrefix : string;                                                   external 'G_TXO.DLL';
procedure frBuh_SetReportName(longint, string);                                          external 'G_TXO.DLL';
function  frBuh_GetSiServ(longint) : longint;                                            external 'G_TXO.DLL';
function  frBuh_Free(longint) : boolean;                                                 external 'G_TXO.DLL';
//------------------------------------------------------------------------------------------------------------
// ServPat.pas
function SiServ_GetFiltersCount(longint) : longint;                                      external 'G_TXO.DLL';
function SiServ_AddNewFilter(longint) : longint;                                         external 'G_TXO.DLL';
function SiServ_ClearFilters(longint) : boolean;                                         external 'G_TXO.DLL';
function SiServ_GetFilterName(longint, longint) : string;                                external 'G_TXO.DLL';
function SiServ_GetFilterMode(longint, longint) : word;                                  external 'G_TXO.DLL';
function SiServ_GetFilterMarker(longint, longint) : longint;                             external 'G_TXO.DLL';
function SiServ_GetFilterMask(longint, longint) : longint;                               external 'G_TXO.DLL';
function SiServ_GetFilterwKau(longint, longint) : word;                                  external 'G_TXO.DLL';
function SiServ_GetFilterExclude(longint, longint) : boolean;                            external 'G_TXO.DLL';
function SiServ_SetFilterName(longint, longint, string) : boolean;                       external 'G_TXO.DLL';
function SiServ_SetFilterMode(longint, longint, word) : boolean;                         external 'G_TXO.DLL';
function SiServ_SetFilterWKau(longint, longint, word) : boolean;                         external 'G_TXO.DLL';
function SiServ_SetFilterExclude(longint, longint, boolean) : boolean;                   external 'G_TXO.DLL';
function SiServ_GetMaskIncludeCount(longint) : longint;                                  external 'G_TXO.DLL';
function SiServ_GetMaskExcludeCount(longint) : longint;                                  external 'G_TXO.DLL';
function SiServ_GetMaskInclude(longint, longint) : string;                               external 'G_TXO.DLL';
function SiServ_GetMaskExclude(longint, longint) : string;                               external 'G_TXO.DLL';
function SiServ_AddMaskInclude(longint, string) : boolean;                               external 'G_TXO.DLL';
function SiServ_AddMaskExclude(longint, string) : boolean;                               external 'G_TXO.DLL';
function SiServ_FindFilter(longint, string) : longint;                                   external 'G_TXO.DLL';

