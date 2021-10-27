#include<stdio.h>
int main()
{
    int a[2][3];
    int i,j;
    for(j=0;j<=2;j++)
    {
            for(i=0;i<=1;i++)
    {
        a[i][j]=(i+1)*(j+1);
    }
    }
    for(j=0;j<=2;j++)
    {
            for(i=0;i<=1;i++)
    {
        printf(" %d ",a[i][j]);
    }
    printf("\n");
    }
}
