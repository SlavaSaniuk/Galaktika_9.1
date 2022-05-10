#ifndef __MsWordFun_inc__
#define __MsWordFun_inc__
// функции работы с приложением
Function  mswOpenNewWord      (boolean, boolean) : longint;                               external 'WordLib.dll';
Procedure mswCloseWord        (longint);                                                  external 'WordLib.dll';
Procedure mswSetOemConversion (longint, boolean);                                         external 'WordLib.dll';

// функции работы с документом
Function mswOpenDocument      (longint, string) : boolean;                                external 'WordLib.dll';
Function mswCloseDocument     (longint) : boolean;                                        external 'WordLib.dll';

// функции работы с таблицами документа
Function mswGetWordTablesCount(longint) : longint;                                        external 'WordLib.dll';
Function mswGetTableRows      (longint, longint) : longint;                               external 'WordLib.dll';
Function mswGetTableCols      (longint, longint) : longint;                               external 'WordLib.dll';
Function mswCopyCellToMemo    (longint, longint, longint, longint, longint) : boolean;    external 'WordLib.dll';

// функции работы с МЕМО
Function mswGetMemoLinesCount (longint) : longint;                                        external 'WordLib.dll';
Function mswGetMemoLine       (longint, longint) : string;                                external 'WordLib.dll';
Function mswGetMemoText       (longint) : string;                                         external 'WordLib.dll';

// функции для работы с XSD MSXML6.0 SOM Schema Object Model
function BuhXml_MsXmlInstalled : boolean;                                                 external 'WordLib.dll';
function BuhXml_Create : longint;                                                         external 'WordLib.dll';
procedure BuhXml_Free(longint);                                                           external 'WordLib.dll';
function BuhXml_LoadSchema(longint, string) : boolean;                                    external 'WordLib.dll';
function BuhXml_ErrorMsg(longint) : string;                                               external 'WordLib.dll';
function BuhXml_GetSchemaCount(longint) : longint;                                        external 'WordLib.dll';
function BuhXml_GetSchemaParentIdx(longint, longint) : longint;                           external 'WordLib.dll';
function BuhXml_GetSchemaShortName(longint, longint) : string;                            external 'WordLib.dll';
function BuhXml_GetSchemaFullName(longint, longint) : string;                             external 'WordLib.dll';
function BuhXml_GetSchemaElementType(longint, longint) : longint;                         external 'WordLib.dll';
function BuhXml_GetSchemaOptionalUse(longint, longint) : boolean;                         external 'WordLib.dll';
function BuhXml_GetSchemaManyOccurs(longint, longint) : boolean;                          external 'WordLib.dll';
function BuhXml_GetSchemaEnumeration(longint, longint) : string;                          external 'WordLib.dll';
function BuhXml_GetSchemaBaseType(longint, longint) : string;                             external 'WordLib.dll';
function BuhXml_GetSchemaRem(longint, longint) : string;                                  external 'WordLib.dll';
function BuhXml_LoadSchemaWithElem(longint, string, longint) : boolean;                   external 'WordLib.dll';
function BuhXml_ProcessZeroElements(longint, string) : boolean;                           external 'WordLib.dll';
function BuhXml_ZeroElementsCount(longint) : longint;                                     external 'WordLib.dll';
function BuhXml_GetZeroElementName(longint, longint) : string;                            external 'WordLib.dll';

// функции для работы и менаим файлов ГНИ
function BuhXml_CreateGUID36 : string;                                                    external 'WordLib.dll';
function BuhXml_CreateGUID : string;                                                      external 'WordLib.dll';
function BuhXml_ChangeFileExt(string, string): string;                                    external 'WordLib.dll';
function BuhXml_ChangeFilePath(string, string): string;                                   external 'WordLib.dll';
function BuhXml_ExtractFilePath(string): string;                                          external 'WordLib.dll';
function BuhXml_ExtractFileDir(string): string;                                           external 'WordLib.dll';
function BuhXml_ExtractFileDrive(string): string;                                         external 'WordLib.dll';
function BuhXml_ExtractFileName(string): string;                                          external 'WordLib.dll';
function BuhXml_ExtractFileExt(string): string;                                           external 'WordLib.dll';

// функции для работы с MSXML3.0 DOM Document Object Model
function  BuhXmlDom_MsXmlInstalled : boolean;                                             external 'WordLib.dll';
function  BuhXmlDom_Create : longint;                                                     external 'WordLib.dll';
procedure BuhXmlDom_Free(longint);                                                        external 'WordLib.dll';
procedure BuhXmlDom_AddElements(longint, string);                                         external 'WordLib.dll';
procedure BuhXmlDom_AddAttribute(longint, string, string, boolean);                       external 'WordLib.dll';
procedure BuhXmlDom_SaveToFile(longint, string);                                          external 'WordLib.dll';
function  BuhXmlDom_GetHasErrors(longint) : boolean;                                      external 'WordLib.dll';
function  BuhXmlDom_ErrorMsg(longint) : string;                                           external 'WordLib.dll';

#endif //__MsWordFun_inc__
