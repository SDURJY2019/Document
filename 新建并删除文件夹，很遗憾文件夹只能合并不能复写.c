#include <stdio.h>
#include<stdlib.h>
int main(void)
{
 system("md �½��ļ���");
 system("rd �½��ļ��� /s /q");
 system("md �½��ļ���");
 return 0;
}
//����ͷ�ļ�stdlib.h�󣬵���system("md �ļ�������"); ����system("mkdir �ļ�������");
/*����1�����ļ�ɾ��������ʵ�֣�
������: remove
�� ��: ɾ��һ���ļ�
�� ��: int remove(char *filename);
������:

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

����2��ʹ�� Dos ���
system(char *cmd);
���� cmd Ϊ����/ɾ���ļ��� DOS ���

 2  ����
����
�ٱ�

fledging
�Ƽ���2016-09-17
��ɾ��ָ���ļ��к��ļ���������������ݣ�����C������Ҫһ��һ������ġ�����������һ�������ܽ����

׷��
��λ����֪����զ��Ū���������ѽ�������벻Ҫ�ù���dir�Ĵ���
׷��
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
system("rd c:\\123\\); ֻ��ɾ�����ļ���
#include <stdlib.h>
int main()
{
system("rd D:\\MMM /s /q");//ɾ���ļ���
return 0;
}
rmdir����Ҳ����   �ο�MSDN

�������
 ���ش������߲���
 3  ����(1)
����
�ٱ�



���Ρ�����
֪���ϻ���IT�����м� 2012-07-11
ɾ���ļ��п���ʹ��dos����rd
��C�����У�����ͷ�ļ�#include <stdlib.h>
����Ҫɾ���ļ��е����λ��ʹ��system("rd D:/test")����

׷��
���ֻ��ɾ��һ�����ļ����������Ҫɾ���ļ����е��ļ��оͲ�����
׷��
�Ǿ�ʹ��rd /s*/
