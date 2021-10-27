#include<stdio.h>
int main()
{
    int *p1,*p2;
    int a,b;
    void change(int *p3,int *p4);
    a=3;
    b=4;
    p1=&a;
    p2=&b;
    change(p1,p2);
    printf("%d %d",a,b);
    return 0;
}
void change(int *p3,int *p4)
{
   int p5;
   p5=*p3;
   *p3=*p4;
   *p4=p5;
}
