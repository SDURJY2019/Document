#include<stdio.h>
int main()
{
    int a,b,x,y,m,n;
    printf("������������a,b");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        m=a;
        a=b;
        b=m;
    }
    n=a;
    while(1)
    {
        x=a%n;
        y=b%n;
        if(x==0&&y==0)
        {
            printf("�������Ϊ%d",n);
            break;
        }
        n--;
    }
}
