@echo off
set "desktop=%USERPROFILE%\Desktop\C\C text\"
set "fname=file_%RANDOM%_%RANDOM%.txt"
echo > "%desktop%\%fname%"
echo Created: %fname%
pause
