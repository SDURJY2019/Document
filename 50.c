#include<stdio.h>
int main()
{
    void save(char x[],char y[]);
    char a[20]={0};
    char b[5]={0};
    int i;
    scanf("%s%s",a,b);
    save(a,b);
}
void save(char x[],char y[])
{
    FILE*fp;
    fp=fopen("新建文本文档.txt","r+");
    fputs(x,fp);
    fputc('\n',fp);
    fputs(y,fp);
}
