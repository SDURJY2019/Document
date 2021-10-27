#include<stdio.h>
int main()
{
    int *p1,*p2,*p3=0;
    int a,b;
    a=3;
    b=4;
    p1=&a;
    p2=&b;
    *p3=*p1;
    *p1=*p2;
    *p2=*p3;
    printf("%d",*p1);
}
