#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main()
{
    char name[100];
    printf("������Ҫ���Ƶ��ļ���\n");
    scanf("%s",name);
    int pf1=open(name,O_RDONLY);
    if(pf1==-1)
    {
        perror("���ļ�ʧ��");
    }


    printf("������Ҫ������ļ���\n");
    scanf("%s",name);
    int pf2=open(name,O_WRONLY | O_CREAT | O_TRUNC, 0766);
    if(pf2==-1)
    {
        perror("���ļ�ʧ��");
    }

    char buf[100];
    while(1)
    {
        int ret =read(pf1,buf,100);
        if(ret==-1)
            perror("read");
        if(ret==0)
            break;
        ret=write(pf2,buf,ret);
        if(ret==-1)
            perror("write");
    }
    printf("�ļ����ƽ���\n");
    close(pf1);
    close(pf2);
    return 0;
}
