@ECHO OFF

REM // Status of files:
ECHO ��������� 䠩��:
git status

REM // Add all new/modified files to commit
ECHO ���������� ��� ���������:
git add -A >> NUL

REM // Commit modified files
FOR /F "delims=" %%i IN ('cscript //nologo Tools\Git\Commit\message_input.vbs') DO set commit_message=%%i
ECHO ������ � ᮮ�饭���: %commit_message%
git commit -m "%commit_message%" >> NUL

ECHO �����襭�� �����.