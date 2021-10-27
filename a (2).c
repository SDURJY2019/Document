#include<stdio.h>
int main()
{
    int a,b;
    int *p1,*p2;
    void swap(int *x,int *y);
    a=2;
    b=3;
    p1=&a;
    p2=&b;
    swap(p1,p2);
    printf("%d %d",*p1,*p2);

}
void swap(int *x,int *y)
{
    int *p3;
    *p3=*x;
    *x=*y;
    *y=*p3;
}
