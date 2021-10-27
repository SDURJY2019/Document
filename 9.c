#include<stdio.h>
int main()
{
    int max(int x,int y,int z);
    int a,b,c,d;
    a=4;
    b=9;
    d=7;
    d=max(a,b,d);
    printf("%d",d);
}
 int max(int x,int y,int z)
{
    int m;
    if(x>=y&&x>=z) m=x;
    if(y>=x&&y>=z) m=y;
    if(z>=x&&z>=y) m=z;
    return m;
}
