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
    FILE*fp1;
    fp1=fopen("1.txt","r+");
    int j=1;
    char name[100];
    char num[200];
    char wuyefei[3];
    while(!feof(fp1))
    {
        fscanf(fp1,"%s\t%s\t%s\n",&name,&num,&wuyefei);
        j++;
    }
    printf("%d",j);
    rewind(fp1);
    static struct user a[1000000];
    int i=0;
    while(!feof(fp1))
    {
        fscanf(fp1,"%s\t%s\t%s\n",&a[i].name,&a[i].num,&a[i].wuyefei);
        i++;
    }
    for(i=0;i<j;i++)
    printf("%s\t%s\t%s\n",a[i].name,a[i].num,a[i].wuyefei);
}
