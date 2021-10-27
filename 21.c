#include<stdio.h>
int main()
{
    int i,n;
    n=10;
    int a[n];
    void largeswap(int x[],int n);
    for(i=0;i<=9;i++)
    {
        a[i]=i;
    }
    largeswap(a[2],10);
    for(i=0;i<=9;i++)
    {
        printf(" %d ",a[i]);}
}

void largeswap(int x[],int n)
{
    int i,j,o,t;
    o=(n/2)-1;
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            if(x[j]>x[i])
            {
                t=x[j];
                x[j]=x[i];
                x[i]=t;
            }
        }
    }


}
