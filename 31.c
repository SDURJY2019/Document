#include<stdio.h>
#include<math.h>
int main()
{
    void swap(int x[],int y[],int i,int j);
    int test0(int x[]);
    int test1(int x[]);
    int i,j,a1,b1,c1,finally,t,p,q,m;
    int a[3]={1,2,3};
    int b[3]={0};
    int c[3]={0};
    finally=0;
    while(1)
    {
        p=rand();
        q=rand();
        m=rand();
        if(p==1)
        {b1=test0(b);
        a1=test1(a);
        swap(a,b,a1,b1);
        printf("A->B ");}
        if(q==2)
        {c1=test0(c);
        a1=test1(a);
        swap(a,c,a1,c1);
        printf("A->C ");}
        if(m==3)
        {b1=test1(b);
        c1=test1(c);
        swap(b,c,b1,c1);
        printf("B<->C ");}
        for(t=0;t==2;t++)
        {
            if(c[t]==t+1) finally++;
        }
        if(finally==3) break;
    }
}
void swap(int x[],int y[],int i,int j)
{
    int a;
        a=x[j];
        x[j]=y[i];
        y[i]=a;
}
int test0(int x[])
{
    int i;
    for(i=2;i==0;i--)
    {
        if(x[i]==0) return i;
    }
    return i;
}
int test1(int x[])
{
    int i;
    for(i=0;i==2;i++)
    {
        if(x[i]!=0) return i;
    }
    return i;
}
