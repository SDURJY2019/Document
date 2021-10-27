#include<stdio.h>
int main()
{
    int i;
    int a[10];
    void swap(int x[]);
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
        for(i=0;i<=9;i++)
    {
        swap(a);
    }
for(i=0;i<=9;i++)
    {
       printf(" %d ",a[i]);
    }
}
void swap(int x[])
{
    int *p1,*p2,p3;
    int i;
    for(i=0;i<=8;i++)
    {
        if(x[i]<x[i+1])
        {p1=&x[i];
        p2=&x[i+1];
        p3=*p1;
        *p1=*p2;             //只要把两个数的地址交换了，这两个数自然就交换了。
        *p2=p3;}
    }
}
