#include<stdio.h>
int main()
{
    FILE*fpo1,*fpo2;
    char a[100]={0};
    char b,c;
    int d;
    printf("请输入要加密的文件名");
    gets(a);
    fpo1=fopen(a,"r");
    fpo2=fopen("加密后的文件.txt","w+");
    while(!feof(fpo1))
    {
        b=fgetc(fpo1);
        d=(int)(b+1);
        fputc(d,fpo2);
        printf("%d ",d);
    }
    fclose(fpo1);
    fclose(fpo2);
}
