#include<stdio.h>
int main()
{
    long double jie(long double x);
    int i,j,i1,b;
    printf("1\n");
    for(i=1;i<=30;i++)
    {
        printf("1 ");
        for(j=1;j<=i;j++)
        {
            b=jie(i)/(jie(i-j)*jie(j));
            printf("%d ",b);
        }
        printf("\n");
    }
}
long double jie(long double x)
{
    int i;
    long double y;
    y=1;
    for(i=x;i>=1;i--) y*=i;
    return y;
}
