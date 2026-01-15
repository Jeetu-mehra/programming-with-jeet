@echo off
REM Compile with gcc instead of g++ to avoid WinMain linking issues
C:\mingw\bin\gcc.exe Q1.cpp -lstdc++ -o Q1.exe
if %errorlevel% equ 0 (
    echo Compilation successful! Running program...
    .\Q1.exe
) else (
    echo Compilation failed!
)
