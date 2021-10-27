#include<stdio.h>
int main()
{
     void swap(int x[],int n);
     int a[10];
     int i,t;
     for(i=0;i<=9;i++)
    {
        a[i]=i*i*i;
    }
    swap(a,0);
    for(i=0;i<=9;i++)
    {
       printf(" %d ",a[i]);
    }
}
void swap(int x[],int n)
{
    int i,t;
    for(i=0;i<=5;i++)
    {
        if(x[i]<x[9-i])
        {
            t=x[9-i];
            x[9-i]=x[i];
            x[i]=t;
        }
    }
}
