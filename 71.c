#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
struct user
{
    char name[100];
    char num[200];
    char wuyefei[3];
};
int main()
{
    FILE*fp1;//,*fp2;
    struct user specific={0};
    char c[200]={"Y"};
    int j;
    fp1=fopen("2.xls","r+");
    //fseek(fp1,0L,SEEK_SET);
    while(!feof(fp1))
    {fscanf(fp1,"%s\t%s\t%s",&specific.name,&specific.num,&specific.wuyefei);
    //printf("%s\t%s\t%c\n",specific.name,specific.num,specific.wuyefei);
    //fseek(fp1,10L,1);
    for(int i=0,j=0;i<=strlen(c);i++)
    {
        if(strlen(specific.wuyefei)!=strlen(c)) continue;
        else
            if(specific.wuyefei[i]==c[i]) j++;
        //printf("%d\n",j);
        if(j==(strlen(c)+1))
        printf("%s\t%s\t%s\n",specific.name,specific.num,specific.wuyefei);
    }
    //fseek(fp1,999999L,SEEK_CUR);}
    //while(!feof(fp1))
    //fprintf(fp1,"%s,%d\n",a,b);
}
}
