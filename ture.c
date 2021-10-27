#include<stdio.h>
int main()
{
     void swap(int x[],int n);
     int a[10];
     int i,t;
     printf("请输入十个数\n");
     for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=9;i++)
    {
        swap(a,0);
    }
    for(i=0;i<=9;i++)
    {
       printf(" %d ",a[i]);
    }
}
void swap(int x[],int n)
{
    int i,t;
    for(i=0;i<=8;i++)
    {
        if(x[i]<x[i+1])
        {
            t=x[i+1];
            x[i+1]=x[i];
            x[i]=t;
        }
    }
}
