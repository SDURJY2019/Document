#include<stdio.h>
int main()
{
    int jiecheng(int i);
    int m,n;
    printf("请输入所要求的组合数的值n,m（n在下，m在上）\n");
    scanf("%d %d",&n,&m);
    if(m>n) {printf("输入错误");return 0;}
    if(m==n) {printf("1");return 0;}
    if(m==0) {printf("%d",n);return 0;}
    int sum;
    sum=jiecheng(n)/(jiecheng(m)*jiecheng(n-m));
    printf("%d",sum);
}
int jiecheng(int i)
{
    int sum;
    if(i==1)
        return 1;
    else
    {
        sum=i*jiecheng(i-1);
    }
}
