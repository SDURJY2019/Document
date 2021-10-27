#include<stdio.h>
int main()
{
    int *p1,*p2;
    int a[5];
    int i,i1;
    void change(int *x,int *y);
    for(i=0;i<=4;i++)
    {
        a[i]=i;
    }
    for(i1=0;i1<=4;i1++)
    {
    for(i=0;i<=3;i++)
    {
      p1=&a[i];
      p2=&a[i+1];
      change(p1,p2);
    }
}
for(i=0;i<=4;i++)
    {
        printf(" %d ",a[i]);}
}
void change(int *x,int *y)
{
    int p3;
    if(x<y)
    {
        p3=*x;
        *x=*y;
        *y=p3;
    }
}
