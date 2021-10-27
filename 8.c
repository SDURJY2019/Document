#include<stdio.h>
int main()
{
    int max(int x,int y,int z);
    int i,a[10],b,c[10],i2,i3,f,i4,i5,d;
    i4=0;
    f=0;
    for (i=0;i<=9;i++)
    {
        printf("请输入一个数\n");
        scanf("%d",&a[i]);
    }
    for(f=0;f<=9;f++)
        {
            d=0;
    for(i2=0;i2<=9;i2++)
    {
        d=max(a[0],a[i2],d);
        if(i2==9)
        {
        for(i3=0;i3<=9;i3++)
        {
            if(d==a[i3])
            {
                c[i4]=d;
                i4++;
                a[i3]=0;
                break;
            }
        }
        }
    }
    }

    for(i5=0;i5<=9;i5++)
    {
        printf(" %d ",c[i5]);
    }
    }
    int max(int x,int y,int z)
{
    int m;
    if(x>=y&&x>=z) m=x;
    if(y>=x&&y>=z) m=y;
    if(z>=x&&z>=y) m=z;
    return m;
}
