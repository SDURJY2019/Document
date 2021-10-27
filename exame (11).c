#include<stdio.h>
int main()
{
    printf("请输入要求的组合数的上下限的值");
    int m,n;
    scanf("%d%d",&m,&n);
    int zuheshu(int m,int n);
    if(m>n) printf("输入错误");
    else
        if(m==n||m==0) printf("结果为1");
    else
        zuheshu(m,n);
}
int zuheshu(int m,int n)
{
    int jiecheng(int x);
    int sum;
    sum=jiecheng(n)/(jiecheng(n-m)*jiecheng(m));
    printf("%d",sum);
}
int jiecheng(int x)
{
    int sum;
    if(x==1)
        return 1;
    else
    sum=x*jiecheng(x-1);
}
