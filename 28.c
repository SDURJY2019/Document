#include<stdio.h>
int main ()
{
    int a[10]={-20,-30,-40,50,50,40,40,40,30,1000};
    int b[10];
    int *p;
    int i,j,k;
    j=0;
    for(i=0;i<=9;i++,j++)
    {
        p=a+i;
        for(k=0;k<=9-i;p++,k++)
        b[j]=(*p);
        }

    for(i=0;i<=9;i++)
    {
        printf("%d ",b[i]);
    }
}/*一定要注意指针的地址问题，防止指针指过头而出错*/
