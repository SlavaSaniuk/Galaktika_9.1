@ECHO OFF

REM // Status of files:
ECHO Измененные файлы:
git status

REM // Add all new/modified files to commit
ECHO Добавление всех изменений:
git add -A >> NUL

REM // Commit modified files
FOR /F "delims=" %%i IN ('cscript //nologo Tools\Git\Commit\message_input.vbs') DO set commit_message=%%i
ECHO Коммит с сообщением: %commit_message%
git commit -m "%commit_message%" >> NUL

ECHO Завершение комита.