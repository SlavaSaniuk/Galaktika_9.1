@ECHO OFF

REM // Get system local temp dir:
SET SYSTEM_TEMP_DIR=%2
ECHO Временный каталог системы: %SYSTEM_TEMP_DIR%

REM // Get current active viper profile:
FOR /F %%i IN (%SYSTEM_TEMP_DIR%\VIPER_ENV.tmp) DO SET VIPER_PROFILE=%%i
ECHO Текущий активный профиль: %VIPER_PROFILE%

REM // Get current viper project file name:
SET PROJECT_NAME_FULL=%1
SET PROJECT_NAME=%PROJECT_NAME_FULL:~0,-4%
ECHO Имя текущего проекта: %PROJECT_NAME%

REM // Set VIPER "Out" dir:
SET VIPER_OUT_DIR= D:\01_DEV\Galaktika_9.1\Out
ECHO Каталог скомпилированных ресурсов: %VIPER_OUT_DIR%

REM // Copy compiled resource to debugging.res:
COPY /Y %VIPER_OUT_DIR%\%PROJECT_NAME%.res %VIPER_OUT_DIR%\debugging.res > NUL
IF EXIST %VIPER_OUT_DIR%\debugging.res (ECHO Подготовка отлаживаемого файла: УСПЕШНО)

REM // Get galaktika configuration based on profile setting:
IF %VIPER_PROFILE%==Data (SET GAL_CONF=Data.cfg)
IF %VIPER_PROFILE%==Test (SET GAL_CONF=Test.cfg)
ECHO Файл конфигурации для запуска приложения: %GAL_CONF%

REM // Run galaktika:
SET GAL_EXE=d:\01_DEV\Galaktika_9.1\Tools\bins\AtlExecLogin.exe
ECHO Исполняемый файл приложения: %GAL_EXE%
ECHO Запуск приложения ...
%GAL_EXE% /C:..\%GAL_CONF%
ECHO Приложение закрыто!

REM // Empty debugging res:
ECHO Отчистка отлаживаемого ресурса ...
COPY /Y %VIPER_OUT_DIR%\EmptyDebugging.res %VIPER_OUT_DIR%\debugging.res > NUL