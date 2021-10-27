#include<stdio.h>
int main()
{
   int max(int x,int y);
   int i,a[10],b,c[10],i2,i3,f,i4,i5;
    for (i=1;i<=10;i++)
    {
        a[i]=i;
    }
    for (i2=1;i2<=10;i2++)
    {
        for(i3=1;i3<=10;i3++)
        {
            int d;
            f=0;
            d=max(a[i2],a[i3]);
            f=10;
            if (i3==f)
            {
                c[i2]=d;
                for (i5=1;i5<=10;i5++)
                {
                    if (a[i5]==d)
                    {
                        a[i5]=0;
                        printf(" i5=%d ",i5);
                    }
                }

            }
            printf("f=%d i3=%d i2=%d d=%d\n",f,i3,i2,d);
        }
    }
    for(i4=1;i4<=10;i4++)
    {
        printf(" %d %d %d \t",c[i4],a[i4],i4);
    }
}
int max(int x,int y)
{
    int z;
    if(x>y) z=x;
    else z=y;
    return(z);
}


