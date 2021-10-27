#include<stdio.h>
int main()
{
    int i;
    printf("请输入要求的阶乘");
    scanf("%d",&i);
    int j,k,sum=1;
    j=k=i;
    for(;i>=1;i--)
        sum*=i;
    printf("用for循环语句求的阶乘的值为%d\n",sum);
    sum=1;
    do
    {
        sum*=j;
        j--;
    }while(j>=1);
    printf("用do--while循环语句求的阶乘的值为%d\n",sum);
    sum=1;
    while(k>=1)
    {
        sum*=k;
        k--;
    }
    printf("用while循环语句求的阶乘的值为%d\n",sum);
}
