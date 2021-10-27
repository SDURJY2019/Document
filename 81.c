#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
struct user
{
    char name[100];
    char num[200];
    char wuyefei[3];
};
int main()
{
    FILE*fp1;
    fp1=fopen("1.txt","r+");
    struct user specific;
    char input[200];
    scanf("%s",input);
    int i,j;
    while(!feof(fp1))
    {
    fscanf(fp1,"%s\t%s\t%s",specific.name,specific.num,specific.wuyefei);
    for(i=0,j=0;i<strlen(input);i++)
    {
        if(specific.name[i]==input[i]) j++;
        if(j==(strlen(input))) printf("%s\t%s\t%s",specific.name,specific.num,specific.wuyefei);
    }
    }
}
int biduiname(struct user specific,char input[])
{
    int i,j;
    for(i=0,j=0;i<strlen(input);i++)
    {
        if(specific.name[i]==input[i]) j++;
        if(j==(strlen(input))) return 1;
        if(i==strlen(input)-1&&j!=(strlen(input))) return 0;
    }
}
int bidui(char input1[],char input[])
{
    int i,j;
    for(i=0,j=0;i<strlen(input);i++)
    {
        if(input1[i]==input[i]) j++;
        if(strlen(input1)!=strlen(input)) continue;
        if(j==(strlen(input))) return 1;
        if(i==strlen(input)-1&&j!=(strlen(input))) return 0;
    }
}
