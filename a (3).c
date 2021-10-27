#include<stdio.h>
int main()
{
    int a,b;
    int *p1,*p2,*p3;
    a=3;
    b=4;
    p1=&a;
    p2=&b;
    p3=p1;
    p1=p2;
    p2=p3;
    printf("%d %d",*p1,*p2);
}
