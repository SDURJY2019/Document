#include<stdio.h>
int main()
{
    void lianjie(char a[],char b[],int a1,int a2);
    char a[10],b[20];
    scanf("%s",a);
    scanf("%s",b);
    lianjie(a,b,10,20);
}
void lianjie(char a[],char b[],int a1,int a2)
{
    char c[a1+a2];
    int i,j;
    for(i=0;i<=a1-1;i++)
    {
        c[i]=a[i];
    }
    for(j=0;j<a2-1;j++)
        c[a1+j]=b[j];
    for(i=0;i<a1+a2-1;i++)
    printf("%c",c[i]);

}
