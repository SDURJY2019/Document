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
    printf("��ѡ����������\n1.����\n2.���ƺ�\n3.������ҵ�����\n");
    scanf("%d",&i);
    if(i==1)
    {printf("������Ҫ���ҵ�����");
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
    {printf("������Ҫ���ҵ����ƺ�");
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
    {printf("������Ҫ���ҵ���ҵ�ѽ������");
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

