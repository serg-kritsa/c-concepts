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

## build & run & clean
gcc .\ -o app; .\app.exe; rm .\app.exe

## size of pointer in c = 8 bytes
char *c;
int *p;
//declaring array of pointers
int *ptr[5];
printf("\n size of p = %d",sizeof(p));  
printf("\n size of ptr = %d",sizeof(ptr)); 
printf("\n size of c = %d",sizeof(c)); 
return 0;

Output :
size of p = 8
size of ptr = 40
size of c = 8

## convert positive decimal to binary
0       1       0       0       0       0       1       0     <<<   +
                                                        2^0=1       0   
                                                2^1=2               2
                                            2^2=4                   0
                                    2^3=8                           0
                            2^4=16                                  0
                    2^5=32                                          0
            2^6=64                                                  0
    2^7=128                                                         128
                                                                  = 130


## convert negative decimal to binary using 2s compliments
-1 = 1111 1111
* -5 + 1 = -4
4 expressed in binary is 0000 0100
* complimenting the bits produces 1111 1011

## define a name to the preprocessor
`#define UNIX`
`#define UNIX 1`
`gcc -D UNIX program.c`

## use static library
lib-static\lib
### package static library archive
gcc -c main.c -o lib_mylib.o
ar rcs lib_mylib.a lib_mylib.o
#### show files in static library archive
ar -t lib_mylib.a
### run code w/ static library
lib-static\src
gcc -c main.c -o main.o -I ../lib
gcc -o main main.o ..\lib\lib_mylib.a 
.\main

