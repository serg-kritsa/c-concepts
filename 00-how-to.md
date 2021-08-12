## install a cygwin compiler
[https://cygwin.com/install.html]
- gcc-core binary 7.4.0-1
- gdb binary 8.1.1-1
- make binary 4.2.1-1
### add gcc to PATH env from 
c:\cygwin64\bin

### check installation
cygcheck -c cygwin
gcc --version

## configure VS Code
* install extention 
`C/C++ for visual studio code`
* open Ctrl+Shift+P menu and choose `C/C++ - edit configuration (UI)`
specify a compiler path
C:\codeblocks-20.03mingw-nosetup\MinGW\bin\gcc.exe
gcc-x64 (legacy)
project_folder\.vscode\c_cpp_properties.json will be created as result 

* choose `Tasks: Configure Default Build Task`
project_folder\.vscode\tasks.json will be created as result 
* set needed args
* Ctrl+Shift+B to compile
* type `.\file.exe` in cmd to run

## run debugger
set breakpoint
F5 to start debugging

## multiple file compilation via cmd
cd project_folder
### way 1
* `gcc main.c other.c -o app` OR `gcc *.c -o app`
* ./app

### way 2
gcc -c main.c
gcc -c other.c
gcc main.o other.o -o app
.\app