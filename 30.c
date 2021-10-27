#include<stdio.h>
int main()
{
    int *p1,*p2;
    int p3;
    int a,b;
    void swap(int *p1,int *p2);
    a=5;b=7;
    p1=&a;
    p2=&b;
    swap(p1,p2);
    printf("%d %d",*p1,*p2);
}
void swap(int *p1,int *p2)//了解定义的函数的意义，并不代表一个确切的地址，而是代表一种运算方式，只有主函数中的指针可以表示地址
{
    int p3;
    p3=*p1;
    *p1=*p2;
    *p2=p3;
}
