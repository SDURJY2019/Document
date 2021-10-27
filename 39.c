#include<stdio.h>
int main()
{
    void fanxu(char x[],char y[],int i);
    char a[10];
    char b[10];
    gets(a);
    fanxu(a,b,10);
}
void fanxu(char x[],char y[],int i)
{
    int j,t;
    for(j=0,t=i-1;j<i-1;j++,t--)
    {
        y[j]=x[t];
    }
    for(j=0;j<=i-1;j++)
    printf("%c",y[j]);
}
