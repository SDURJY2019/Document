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
    void sousuoxiugai(struct user specific,FILE*fp1);
    fp1=fopen("1.txt","r+");
    sousuoxiugai(specific,fp1);
}
void sousuoxiugai(struct user specific,FILE*fp1)
{
    struct user change;
    int i,j,k;
    char c[200]={0};
    char d[200]={0};
    FILE*fp2;
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
        printf("请输入要修改的项目\n1.姓名\n2.门牌号\n3.缴纳物业费情况\n");
        scanf("%d",&k);
        if(k==1)
        {
            printf("请输入修改后的姓名：\n");
            scanf(" %s",d);
            fseek(fp1,-sizeof(struct user),1);
            fprintf(fp1,"%s\t%s\t%s\n",d,specific.num,specific.wuyefei);
            printf("########################");
            //return;
        }
        if(k==2)
        {
            printf("请输入修改后的门牌号：\n");
            scanf(" %s",d);
            fp2=fp1-1;
            fprintf(fp2,"%s\t%s\t%s\n",specific.name,d,specific.wuyefei);
            //return;
        }
        if(k==3)
        {
            printf("请输入修改后的缴纳物业费情况：\n");
            scanf(" %s",d);
            fp2=fp1-1;
            fprintf(fp2,"%s\t%s\t%s\n",specific.name,specific.num,d);
            //return;
        }
        }
    }
    }}
    else
        if(i==2)
    {printf("请输入要查找的门牌号");
    scanf(" %s",c);
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
        change=specific;
        fp2=fp1;
        printf("\n%d\n",fp2);
        }}
        printf("%d ",fp1);}
        printf("请输入要修改的项目\n1.姓名\n2.门牌号\n3.缴纳物业费情况\n");
        scanf("%d",&k);
        if(k==1)
        {
            printf("请输入修改后的姓名：\n");
            scanf(" %s",d);
            //fseek(fp1,10L,1);
            //fp1=fp1+100;
            fprintf(fp2,"%s\t%s\t%s\n",d,change.num,change.wuyefei);
            printf("########################");
            //fclose(fp1);
            //return;
        }
        if(k==2)
        {
            printf("请输入修改后的门牌号：\n");
            scanf(" %s",d);
            fp2=fp1-1;
            fprintf(fp2,"%s\t%s\t%s\n",specific.name,d,specific.wuyefei);
            //return;
        }
        if(k==3)
        {
            printf("请输入修改后的缴纳物业费情况：\n");
            scanf(" %s",d);
            fp2=fp1-1;
            fprintf(fp2,"%s\t%s\t%s\n",specific.name,specific.num,d);
            //return;
        }
        }
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
        printf("请输入要修改的项目\n1.姓名\n2.门牌号\n3.缴纳物业费情况\n");
        scanf("%d",&k);
        if(k==1)
        {
            printf("请输入修改后的姓名：\n");
            scanf(" %s",d);
            fp2=fp1-1;
            fprintf(fp2,"%s\t%s\t%s\n",d,specific.num,specific.wuyefei);
            //return;
        }
        if(k==2)
        {
            printf("请输入修改后的门牌号：\n");
            scanf(" %s",d);
            fp2=fp1-1;
            fprintf(fp2,"%s\t%s\t%s\n",specific.name,d,specific.wuyefei);
            //return;
        }
        if(k==3)
        {
            printf("请输入修改后的缴纳物业费情况：\n");
            scanf(" %s",d);
            fp2=fp1-1;
            fprintf(fp2,"%s\t%s\t%s\n",specific.name,specific.num,d);
            //return;
        }
        }
    }
    }}
}
