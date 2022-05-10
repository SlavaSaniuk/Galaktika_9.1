@ECHO OFF
REM -----------------------------------------------------
REM *********** "GET Project variables" section ****************
REM -----------------------------------------------------
ECHO ----------------------------------------------------

REM -----------------------------------------------------
REM **** Programm path from cmd first arg: *******
SET PROGRAMM_PATH=%1
ECHO Programm path: %PROGRAMM_PATH%
ECHO ----------------------------------------------------

REM -----------------------------------------------------
REM **** New CRF name from user input in VBS MessageBox *******
FOR /F "delims=" %%i IN ('cscript //nologo %PROGRAMM_PATH%\message.vbs') DO set NEW_CRF_NAME=%%i
ECHO New CRF name: %NEW_CRF_NAME%
ECHO ----------------------------------------------------

REM -----------------------------------------------------
REM **** CRF projects path *******
SET CRF_PROJECTS_PATH=D:\01_DEV\Galaktika_9.1\Src\0_CRF
ECHO CRF projects path: %CRF_PROJECTS_PATH%
ECHO ----------------------------------------------------

REM -----------------------------------------------------
REM **** New CRF project path *******
SET NEW_CRF_PROJECT_PATH=%CRF_PROJECTS_PATH%\%NEW_CRF_NAME%
ECHO New CRF project path: %NEW_CRF_PROJECT_PATH%
ECHO ----------------------------------------------------

REM // Crf project file template:
SET CRF_PRJ_TEMPLATE=crf.prj
REM // New crf file:
SET NEW_CRF_FILE_LONG=%NEW_CRF_PROJECT_PATH%\Crf\%NEW_CRF_NAME%.crf

REM *********** End of "GET Project variables" section ****************
REM -----------------------------------------------------


REM -----------------------------------------------------
REM *********** "Create project structure" section ****************
REM -----------------------------------------------------

REM // Create new crf project directory:
MKDIR %NEW_CRF_PROJECT_PATH%
REM // COPY project file template to prj dir:
COPY /Y %PROGRAMM_PATH%\%CRF_PRJ_TEMPLATE% %NEW_CRF_PROJECT_PATH%\%NEW_CRF_NAME%.prj > NUL
SET CRF_PROJECT_FILE=%NEW_CRF_PROJECT_PATH%\%NEW_CRF_NAME%.prj
REM // Create CRF folder for new crf:
MKDIR %NEW_CRF_PROJECT_PATH%\Crf
REM // Write #make line to project file:
ECHO #make "Crf\%NEW_CRF_NAME%.cnf" >> %CRF_PROJECT_FILE%

REM *********** End of "Create project structure" section ****************
REM -----------------------------------------------------


REM -----------------------------------------------------
REM *********** "Run Gal Section" section ****************
REM -----------------------------------------------------

\\GAL_SERV9\GalSrv\exe\galnet.exe /C:..\Data.cfg /U:80 /Configurator.Resource=%NEW_CRF_FILE_LONG%

REM *********** End of "Run Gal Section" section ****************
REM -----------------------------------------------------
PAUSE
