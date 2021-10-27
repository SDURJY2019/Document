#include<stdio.h>
int main()
{
    int max(int x,int y);
    int i,a[10],b,c[10],i2,i3,f,i4,i5,d;
    int *p1,*p2;
    i4=0;
    f=0;
    for (i=0;i<=9;i++)
    {
        printf("请输入一个正整数\n");
        scanf("%d",&a[i]);
    }
    p1=&a[0];
    p2=&c[0];
    while(1)
    {
        d=0;
        while(1)
        {
            d=max(*p1,d);
            p1++;
            if(p1==&a[9])
            {
                *p2=d;
                p2++;
                break;
            }
        }
        if (p2==&c[9]) break;
    }
    for(i5=0;i5<=9;i5++)
    {
        printf(" %d ",c[i5]);
    }
}
    int max(int x,int y)
{
    int m;
    if(x>y) m=x;
    else m=y;
    return m;
}
