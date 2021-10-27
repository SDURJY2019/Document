#include <stdio.h>
#include<stdlib.h>
int main(void)
{
 system("md 新建文件夹");
 system("rd 新建文件夹 /s /q");
 system("md 新建文件夹");
 return 0;
}
//包含头文件stdlib.h后，调用system("md 文件夹名称"); 或者system("mkdir 文件夹名称");
/*方法1、用文件删除函数如实现：
函数名: remove
功 能: 删除一个文件
用 法: int remove(char *filename);
程序例:

#include <stdio.h>

int main(void)
{
char file[80];

/* prompt for file name to delete */
/*printf("File to delete: ");
gets(file);

/* delete the file */
/*if (remove(file) == 0)
printf("Removed %s.\n",file);
else
perror("remove");

return 0;
}

方法2、使用 Dos 命令：
system(char *cmd);
其中 cmd 为创建/删除文件的 DOS 命令。

 2  评论
分享
举报

fledging
推荐于2016-09-17
想删除指定文件夹和文件夹下面的所有内容，这用C语言需要一层一层的来的。。。并不是一句代码就能解决的

追问
这位高手知道是咋个弄得吗？求代码呀！而且请不要用关于dir的处理
追答
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <string.h>
BOOL DeleteDir(char* path)
{
    WIN32_FIND_DATA finddata;
    HANDLE hfind;
    char* pdir;
    pdir=new char[strlen(path)+5];
    strcpy(pdir,path);
    if(path[strlen(path)-1]!='\\')
        strcat(pdir,"\\*.*");
    else
        strcat(pdir,"*.*");
    hfind=FindFirstFile(pdir,&finddata);
    if(hfind==INVALID_HANDLE_VALUE)
        return FALSE;
    delete []pdir;
    do
    {
        pdir=new char[strlen(path)+strlen(finddata.cFileName)+2];
        sprintf(pdir,"%s\\%s",path,finddata.cFileName);
        if(strcmp(finddata.cFileName,".")==0
            ||strcmp(finddata.cFileName,"..")==0)
        {
            RemoveDirectory(pdir);
            continue;
        }
        if((finddata.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)==0)
            DeleteFile(pdir);
        else
            DeleteDir(pdir);
        delete []pdir;
    }while(FindNextFile(hfind,&finddata));
    if(RemoveDirectory(path))
        return TRUE;
    else
        return FALSE;
}
int main()
{
char str[]="D:\\MMM";
bool x;
x=DeleteDir(str);
return 0;
}
system("rd c:\\123\\); 只能删除空文件夹
#include <stdlib.h>
int main()
{
system("rd D:\\MMM /s /q");//删除文件夹
return 0;
}
rmdir函数也可以   参考MSDN

试试这个
 本回答被提问者采纳
 3  评论(1)
分享
举报



幻梦·人生
知道合伙人IT服务行家 2012-07-11
删除文件夹可以使用dos命令rd
在C语言中，加入头文件#include <stdlib.h>
在需要删除文件夹的语句位置使用system("rd D:/test")即可

追问
这个只能删除一个空文件，而且如果要删除文件夹中的文件夹就不行了
追答
那就使用rd /s*/
