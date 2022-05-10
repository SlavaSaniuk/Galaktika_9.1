/*
 ษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป
 บ                     (c) 1994,2002 ชฎเฏฎเ ๆจ๏ €€’€                    บ
 บ ‘จแโฅฌ        : €€’€                                                 บ
 บ เฎฅชโ        : ใๅฃ ซโฅเแชจฉ ชฎญโใเ                                      บ
 บ ฅเแจ๏        : 5.84                                                      บ
 บ  งญ ็ฅญจฅ    : ญฅ่ญจฅ ฏเฎๆฅคใเ๋ จ ไใญชๆจจ จง G_ExpImp.dll               บ
 บ โขฅโแโขฅญญ๋ฉ : เฎ่ใช ฌจโเจฉ ฅฎญจคฎขจ็ (Smile)                         บ
 ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ
*/

//------------------------------------------------------------------------------
// TableInfo.pas
function  GetRecordsInTable (Word)           : longint; external 'G_ExpImp.dll';
function  GetRecordSize     (Word)           : longint; external 'G_ExpImp.dll';
Function  ScanTable         (word)           : longInt; external 'G_ExpImp.dll';

//------------------------------------------------------------------------------
// ieLib.pas
function  TemporaryDirectory                             : string;  external 'G_ExpImp.dll';
procedure GetFileInfo          ( string, var date, var time, var longint ); external 'G_ExpImp.dll';
function  SaveTuneToFile       ( comp, string )          : boolean; external 'G_ExpImp.dll';
function  RestoreTuneFromFile  ( string, word, word )    : comp;    external 'G_ExpImp.dll';
function  IsEmptyMemo          ( var anytype )           : boolean; external 'G_ExpImp.dll';
function  ExtractFormName      ( string )                : string;  external 'G_ExpImp.dll';
function  LoadResource         ( string )                : boolean; external 'G_ExpImp.dll';
function  ieTextFormInit       ( comp, string )          : integer; external 'G_ExpImp.dll';
procedure ieTextFormDone;                                           external 'G_ExpImp.dll';
function  ieTextFormFindFirstRecord ( boolean )          : boolean; external 'G_ExpImp.dll';
function  ieTextFormFindNextRecord  ( boolean )          : boolean; external 'G_ExpImp.dll';
function  ieTextFormImportField     ( boolean, word, var anytype ) : boolean; external 'G_ExpImp.dll';
function  ieTextFormSetFileName     ( string )           : boolean; external 'G_ExpImp.dll';
function  ieTextFormValidTopology   ( comp )             : boolean; external 'G_ExpImp.dll';
function  ieTextFormNumberOfRecords                      : longint; external 'G_ExpImp.dll';
function  GroupOfWords         ( string, string )        : string;  external 'G_ExpImp.dll';
function  GroupOfWordsFrom     ( string, string, string, string, string, string ) : string;  external 'G_ExpImp.dll';
function  GroupOfWordsRem      ( string, string )        : string;  external 'G_ExpImp.dll';
function  GroupOfWordsFromRem  ( string, string, string, string, string, string ) : string;  external 'G_ExpImp.dll';
function  GetBoundedSubString  ( string, char, char, byte ) : string;  external 'G_ExpImp.dll';
function  UndoFileName         ( string )                : string;  external 'G_ExpImp.dll';
function  CurrencyName         ( comp )                  : string;  external 'G_ExpImp.dll';
function  DelClassVal          ( boolean )               : integer; external 'G_ExpImp.dll';
function  DelAttrVal           ( boolean )               : integer; external 'G_ExpImp.dll';
function  FileExist            ( string )                : boolean; external 'G_ExpImp.dll';
function  IsDirectory          ( string )                : boolean; external 'G_ExpImp.dll';
function  CreateUniqueFileName ( string )                : string;  external 'G_ExpImp.dll';
function  AddSlashToPath       ( string )                : string;  external 'G_ExpImp.dll';
function  VerifyPathName       ( string , boolean)       : boolean; external 'G_ExpImp.dll';
function  StartPathName                                  : string;  external 'G_ExpImp.dll';
function  ExtractDelimitedWord ( string, byte, string )  : string;  external 'G_ExpImp.dll';
function  ParseWord ( string, byte, char )               : string;  external 'G_ExpImp.dll';
function  GetEnvString         ( string )                : string;  external 'G_ExpImp.dll';

//------------------------------------------------------------------------------
// Xml_Func.pas
function XML_New                                                       : longint; external 'G_ExpImp.dll';
function XML_LoadDoc      (longint, string)                            : boolean; external 'G_ExpImp.dll';
function XML_FindFirstDoc (longint, longint, comp, comp)               : longint; external 'G_ExpImp.dll';
function XML_FindNextDoc  (longint, longint, comp, comp)               : longint; external 'G_ExpImp.dll';
function ImportXMLField   (longint, comp, longint, comp)               : string;  external 'G_ExpImp.dll';
function XML_Done         (longint)                                    : boolean; external 'G_ExpImp.dll';
function InitXML_Doc      (longint, comp)                              : longint; external 'G_ExpImp.dll';
function XML_NewNode      (longint, longint, longint ,string)          : longint; external 'G_ExpImp.dll';
function ExportXMLField   (longint, longint, comp ,string)             : boolean; external 'G_ExpImp.dll';
function XML_SaveAs       (longint, longint, longint ,longint, string) : boolean; external 'G_ExpImp.dll';
function XML_FillMeta     (longint, comp)                              : boolean; external 'G_ExpImp.dll';
function XML_GetRoot      (longint)                                    : longint; external 'G_ExpImp.dll';
function XML_Release      (longint)                                    : boolean; external 'G_ExpImp.dll';
//------------------------------------------------------------------------------
// XMLDOMFunc.pas
function XMLDOMDoc_New                                                     : longint; external 'G_ExpImp.dll';
function XMLDOMDoc_Load                        (longint, string)           : boolean; external 'G_ExpImp.dll';
function XMLDOMDoc_Save                        (longint, string)           : boolean; external 'G_ExpImp.dll';
function XMLDOMDoc_DocumentElement             (longint)                   : longint; external 'G_ExpImp.dll';
function XMLDOMDoc_CreateNode                  (longint, integer, string)  : longint; external 'G_ExpImp.dll';
function XMLDOMDoc_CreateAttribute             (longint, string)           : longint; external 'G_ExpImp.dll';
function XMLDOMDoc_CreateCDataSection          (longint, string)           : longint; external 'G_ExpImp.dll';
function XMLDOMDoc_CreateComment               (longint, string)           : longint; external 'G_ExpImp.dll';
function XMLDOMDoc_CreateDocumentFragment      (longint)                   : longint; external 'G_ExpImp.dll';
function XMLDOMDoc_CreateElement               (longint, string)           : longint; external 'G_ExpImp.dll';
function XMLDOMDoc_CreateEntityReference       (longint, string)           : longint; external 'G_ExpImp.dll';
function XMLDOMDoc_CreateProcessingInstruction (longint, string, string)   : longint; external 'G_ExpImp.dll';
function XMLDOMDoc_CreateTextNode              (longint, string)           : longint; external 'G_ExpImp.dll';
function XMLDOMAttribute_get_NodeValue         (longint)                   : string;  external 'G_ExpImp.dll';
function XMLDOMAttribute_set_NodeValue         (longint, string)           : boolean; external 'G_ExpImp.dll';
function XMLDOMCDataSection_AppendData         (longint, string)           : boolean; external 'G_ExpImp.dll';
function XMLDOMCDataSection_get_Length         (longint)                   : longint; external 'G_ExpImp.dll';
function XMLDOMCDataSection_get_NodeValue      (longint)                   : string;  external 'G_ExpImp.dll';
function XMLDOMCDataSection_set_NodeValue      (longint, string)           : boolean; external 'G_ExpImp.dll';
function XMLDOMCDataSection_SubstringData      (longint, longint, longint) : string;  external 'G_ExpImp.dll';
function XMLDOMElement_SetAttribute            (longint, string, string)   : boolean; external 'G_ExpImp.dll';
function XMLDOMNode_AppendChild                (longint, longint)          : longint; external 'G_ExpImp.dll';
function XMLDOMNode_get_Attributes             (longint)                   : longint; external 'G_ExpImp.dll';
function XMLDOMNode_get_ChildNodes             (longint)                   : longint; external 'G_ExpImp.dll';
function XMLDOMNode_get_NodeType               (longint)                   : integer; external 'G_ExpImp.dll';
function XMLDOMNode_get_NodeName               (longint)                   : string;  external 'G_ExpImp.dll';
function XMLDOMNode_Release                    (longint)                   : boolean; external 'G_ExpImp.dll';
function XMLDOMNamedNodeMap_get_Length         (longint)                   : longint; external 'G_ExpImp.dll';
function XMLDOMNamedNodeMap_get_Item           (longint, longint)          : longint; external 'G_ExpImp.dll';
function XMLDOMNodeList_get_Length             (longint)                   : longint; external 'G_ExpImp.dll';
function XMLDOMNodeList_get_Item               (longint, longint)          : longint; external 'G_ExpImp.dll';
function XMLDOMDoc_GetElementsByTagName        (longint, string)           : longint; external 'G_ExpImp.dll';
function XMLDOMDoc_Done                        (longint)                   : boolean; external 'G_ExpImp.dll';
//------------------------------------------------------------------------------
function InitMAPIMessage : longint; external 'G_ExpImp.dll';
function DoneMAPIMessage(longint) : boolean; external 'G_ExpImp.dll';
function SetMAPIMessageSubject(string, longint) : boolean; external 'G_ExpImp.dll';
function SetMAPIMessageType(string, longint) : boolean; external 'G_ExpImp.dll';
function AddStringToMailBody(string, longint) : boolean; external 'G_ExpImp.dll';
function AddRecipientToMail(string, string, longint) : boolean; external 'G_ExpImp.dll';
function AddAttachedFileToMail(string, string, longint) : boolean; external 'G_ExpImp.dll';
function SendGalMail(longint) : longint; external 'G_ExpImp.dll';
function GetOsVersion : string; external 'G_ExpImp.dll';

function _sGetPrivProf(string, string, string): string; external 'G_ExpImp.dll';
function _lGetPrivProf(string, string, string): Longint; external 'G_ExpImp.dll';
procedure _WritePrivateProfileString(string, string, string, string); external 'G_ExpImp.dll';

#ifdef GAL8_1
function Init_TableBufferService(var AnyType) : longint; external 'G_ExpImp.dll';
procedure Done_TableBufferService(longint); external 'G_ExpImp.dll';
function Get_TableBuffer(longint, var AnyType) : boolean; external 'G_ExpImp.dll';
function Set_TableField(longint, var AnyType, word, word) : boolean; external 'G_ExpImp.dll';
#endif

//------------------------------------------------------------------------------
// ieFileFinder.pas
function  FindFirstFile        ( string , var anytype )  : boolean; external 'G_ExpImp.dll';
function  FindNextFile         ( var anytype )           : boolean; external 'G_ExpImp.dll';
function  FindFirstFileCli     ( string , var anytype )  : boolean; external 'G_ExpImp.dll';
function  FindNextFileCli      ( var anytype )           : boolean; external 'G_ExpImp.dll';
procedure DoneFileFinderCli;                                        external 'G_ExpImp.dll';

//------------------------------------------------------------------------------
// FastExpImp.pas
procedure FastExp(string); external 'G_ExpImp.dll';
procedure FastImp(string); external 'G_ExpImp.dll';
