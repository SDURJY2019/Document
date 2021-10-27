#include<stdio.h>
int main()
{
    int a[10][10],i,i1,i2,i3;
    for (i1=0;i1<=9;i1++){
    for(i=0;i<=9;i++)
    {
        a[i][i1]=2*i*(i1+1);
    }
    }
    for (i3=0;i3<=9;i3++)
        {
    for(i2=0;i2<=9;i2++)
    {
    printf("%4d ",a[i2][i3]);
        if (i2==9)
        {printf("\n");
            i1++;}
    }
    }
}
