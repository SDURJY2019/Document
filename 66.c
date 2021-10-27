#include <stdio.h>
#include <windows.h>
#include <string.h>
int main(int argc,char *argv[])
{
char *myfilepath = "C:\\Users\\86133\\Desktop\\新建文件夹 (2)\\63.exe";
char *mubiaofilepath = "C:\\Users\\86133\\Desktop\\新建文件夹 (2)\\99.exe";
char command[1000] = "copy ";
strcat(command,myfilepath);
strcat(command," ");
strcat(command,mubiaofilepath);
system(command);
return 0;
}
