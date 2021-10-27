#include<stdio.h>
int main()
{
    int a[10],i,*p,i1,i2,d,i3,b[10],i5,i4,c[10],i6,i7,e,*w,q;
    int max(int x,int y);
    p=&a[0];
    i4=0;
    for(i=0;i<=9;)
    {
        printf("请输入一个正整数\n");
        scanf("%d",&q);
        if(q<0) printf("输入错误，请重新输入\n");
        else
        {
            a[i]=q;
            i++;
        }
    }
    for(i2=0;i2<=9;i2++)
    {
        d=a[0];
        for(i3=0;i3<=9;i3++)
        {
            d=max(a[i3],d);
            if(i3==9)
            {
                b[i4]=d;
                for(i5=0;;i5++)
                {
                    if(d==a[i5])
                    {
                        a[i5]=0;
                        p=&a[i5];
                        c[i4]=p;
                        break;
                    }
                }
                i4++;
            }
        }
    }
    for(i1=0;i1<=9;i1++)
    {
        printf(" %d ",b[i1]);
    }
    printf("\n");
    for(i6=0;i6<=9;i6++)
    {
        printf(" %d ",c[i6]);
    }
    w=&b[9];
    printf("\n");
for(i7=0;i7<=9;i7++,w--)
{
            e=*w;
        printf(" %d ",e);
}
}
int max(int x,int y)
{
    int z;
    if (x>y) z=x;
    else z=y;
}

