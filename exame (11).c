#include<stdio.h>
int main()
{
    printf("������Ҫ���������������޵�ֵ");
    int m,n;
    scanf("%d%d",&m,&n);
    int zuheshu(int m,int n);
    if(m>n) printf("�������");
    else
        if(m==n||m==0) printf("���Ϊ1");
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
