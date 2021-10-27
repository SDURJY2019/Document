#include<stdio.h>
int main()
{
    FILE *fp1,*fp2;
    fp1=fopen("2.txt","r+");
    fp2=fopen("final.txt","w+");
    char temp[8];
    while(!feof(fp1))
    {
    int i;
    fscanf(fp1,"%s\n",temp);
    fprintf(fp2,"%s ",temp);
    }
}
