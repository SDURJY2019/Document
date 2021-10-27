#include<stdio.h>
int main()
{
    int a[10]={3,2,0};
    void swap(int x[],int p);
    int i=0;
    int i1,t;
    i1=0;
    t=a[i1];
    a[i1]=a[i1+1];
    a[i1+1]=t;
    swap(a,8);
    printf("%d\n",a[i]);
    i++;
    printf("%d",a[i]);
}
void swap(int x[],int p)
{
    int i1,t;
    i1=0;
    t=x[i1];
    x[i1]=x[i1+8];
    x[i1+8]=t;
}
