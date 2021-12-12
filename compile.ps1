function compile {gcc main.c -o .\bin\Debug\main.exe; gcc main.c -o .\obj\Debug\main.o}
set-alias -Name Go -Value compile

function runc {.\bin\Debug\main.exe}
set-alias -Name GoRun -Value runc
