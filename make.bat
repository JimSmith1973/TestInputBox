cls

del *.exe

windres ..\Dialogs\InputBoxDialog.rc -o InputBoxDialog.o

g++ -mwindows -m64 -static -Wall -Wextra TestInputBox.cpp ^
 ^
 ..\Dialogs\InputBoxDialog.cpp ^
 ^
 InputBoxDialog.o -o TestInputBox.exe
