#include<stdio.h>
int main()
{
    int a,i,sum;
    int (*p)(int);
    sum=1;
    printf("请输入你要求的阶乘的数");
    int w(int a);
    int dw(int a);
    int f(int a);
    int di(int a);
    scanf("%d",&a);
    printf("请选择运算模式");
    scanf(" %d",&i);
    switch(i)
    {
        case 1 :p=w;break;
        case 2 :p=dw;break;
        case 3 :p=f;break;
        case 4 :p=di;break;
    }
    printf("%d",(*p)(a));
}
int w(int a)
{
    int sum=1;
    while(a!=1)
    {
     sum*=a;
     a--;
    }
    return sum;
}
int dw(int a)
{
    int sum=1;
    do
    {
        sum*=a;
        a--;
    }
    while(a>=1);
    return sum;
}
int f(int a)
{
    int sum=1;
    for(;a>=1;a--)
    {
        sum*=a;
    }
}
int di(int a)
{
    int sum;
    if(a==1)
        return 1;
    else sum=a*di(a-1);
}
