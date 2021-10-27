#include<stdio.h>
int main()
{
    int i;
    int a[10];
    void swap(int x[]);
    for(i=0;i<=9;i++)
    {
       a[i]=i;
    }
    swap(a);
    for(i=0;i<=9;i++)
    {
        printf("%d ",a[i]);
    }}
void swap(int x[])
{
    int i;
    int *p1,*p2,p3;
    for(i=0;i<=3;i++)
    {
        p1=&x[i];
        p2=&x[9-i];
        p3=*p1;
        *p1=*p2;
        *p2=p3;
    }
}
