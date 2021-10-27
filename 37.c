#include<stdio.h>
int main()
{
    int digui(int i);
    int a;
    a=12;
    printf("%d",digui(a));
}
int digui(int i)
{
    int c;
    if(i==1) return 1;
    else
    {c=digui(i-1)*i;
    return c;}
}
