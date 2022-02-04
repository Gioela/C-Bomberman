set BAT_BASE_PATH=%~dp0
set PRJ_BASE_PATH=%BAT_BASE_PATH%..
set BIN_PATH=%PRJ_BASE_PATH%\bin
set CORE_PATH=%PRJ_BASE_PATH%\core

MD %BIN_PATH%
clang.exe ^
 -I .\SDL2-2.0.20\include\ -I %CORE_PATH%\include^
 -o %BIN_PATH%\bomberman.exe ^
 -L .\SDL2-2.0.20\lib\x64\ ^
 %CORE_PATH%\src\*.c  ^
 -Xlinker /subsystem:console -lSDL2main -lSDL2 -lshell32 ^
 && %BIN_PATH%\bomberman.exe