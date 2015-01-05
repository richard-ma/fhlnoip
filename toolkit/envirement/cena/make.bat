@echo off
rem Get the filename (no .bas)
set name=%1

rem Compile the source to OBJ file
C:\qb\bc %name%.bas %name%.obj %name%.lst

rem Create the link response file
echo /EX %name% > tmp.tmp
echo %name%.exe >> tmp.tmp
echo. >> tmp.tmp
echo C:\QB\bcl71enr.lib >> tmp.tmp
echo. >> tmp.tmp

rem Create EXE file
C:\qb\link @tmp.tmp

rem Clear temp files
del %name%.obj
del %name%.lst
del tmp.tmp

rem End