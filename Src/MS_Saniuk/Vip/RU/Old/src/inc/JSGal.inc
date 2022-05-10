// состояния Activescript
  SCRIPTSTATE_UNINITIALIZED = 00000000h;
  SCRIPTSTATE_INITIALIZED   = 00000005h;
  SCRIPTSTATE_STARTED       = 00000001h;
  SCRIPTSTATE_CONNECTED     = 00000002h;
  SCRIPTSTATE_DISCONNECTED  = 00000003h;
  SCRIPTSTATE_CLOSED        = 00000004h;

// коды возврата обработчика метода VIP.CallMethod()
  VIPDone      = 0; // oGalScriptStdF отработал
  VIPNotFound  = 1; // обработчик oGalScriptStdF не найден
  VIPNeedParam = 2; // мало параметров для определения обработчика oGalScriptStdF
  VIPError     = 3; // у обработчика oGalScriptStdF нет обратной связи с oiJSWork

// коды контекста выполения
  rtcEdit   = 0; // режим редактирования чего-либо
  rtcRecalc = 1; // режим расчета чего-либо
  rtcError  = 2; // ошибка получения контекста