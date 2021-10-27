#include<stdio.h>
int main()
{
    int a,b,x,y,m,n;
    printf("请输入两个数a,b");
    scanf("%d %d",&a,&b);
    if(a<b)
    {
        m=a;
        a=b;
        b=m;
    }
    n=a;
    while(1)
    {
        x=n%a;
        y=n%b;
        if(x==0&&y==0)
        {
            printf("最小公倍数为%d",n);
            break;
        }
        n++;
    }
}
