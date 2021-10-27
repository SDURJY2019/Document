#include<stdio.h>
int main()
{
    int p;
    scanf("%d",&p);
    int a[p],i;
    for(i=0;i<=p-1;i++)
    {
        a[i]=i;
    }
    for(i=0;i<=p-1;i++)
    {
        printf(" %d ",a[i]);
    }
}
