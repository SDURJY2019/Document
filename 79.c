#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct user
{
    char name[100];
    char num[200];
    char wuyefei[3];
};
int main()
{
    struct user specific;
    FILE*fp1;
    fp1=fopen("1.txt","r+");
    FILE*fp2;
    fp2=fopen("2.xls","w+");
    int i;
    char c[200];
    printf("请选择搜索类型\n1.姓名\n2.门牌号\n3.缴纳物业费情况\n");
    scanf("%d",&i);
    if(i==1)
    {printf("请输入要查找的人名");
    scanf("%s",c);
    while(!feof(fp1))
    {
        fscanf(fp1,"%s\t%s\t%s",&specific.name,&specific.num,&specific.wuyefei);
        for(int i=0,j=0;i<=strlen(c);i++)
    {
        if(strlen(specific.name)!=strlen(c)) continue;
        else
            if(specific.name[i]==c[i]) j++;
        if(j==(strlen(c)+1))
        {
            printf("%s\t%s\t%s\n",specific.name,specific.num,specific.wuyefei);
            fprintf(fp2,"%s\t%s\t%s\n",specific.name,specific.num,specific.wuyefei);
        }
    }
    }}
    else
        if(i==2)
    {printf("请输入要查找的门牌号");
    scanf("%s",c);
    while(!feof(fp1))
    {
        fscanf(fp1,"%s\t%s\t%s",&specific.name,&specific.num,&specific.wuyefei);
        for(int i=0,j=0;i<=strlen(c);i++)
    {
        if(strlen(specific.num)!=strlen(c)) continue;
        else
            if(specific.num[i]==c[i]) j++;
        if(j==(strlen(c)+1))
        {
            printf("%s\t%s\t%s\n",specific.name,specific.num,specific.wuyefei);
            fprintf(fp2,"%s\t%s\t%s\n",specific.name,specific.num,specific.wuyefei);
        }
    }}}
    else
        if(i==3)
    {printf("请输入要查找的物业费缴纳情况");
    scanf("%s",c);
    while(!feof(fp1))
    {
        fscanf(fp1,"%s\t%s\t%s",&specific.name,&specific.num,&specific.wuyefei);
        for(int i=0,j=0;i<=strlen(c);i++)
    {
        if(strlen(specific.wuyefei)!=strlen(c)) continue;
        else
            if(specific.wuyefei[i]==c[i]) j++;
        if(j==(strlen(c)+1))
        {
            printf("%s\t%s\t%s\n",specific.name,specific.num,specific.wuyefei);
            fprintf(fp2,"%s\t%s\t%s\n",specific.name,specific.num,specific.wuyefei);
        }
    }}
}
}

