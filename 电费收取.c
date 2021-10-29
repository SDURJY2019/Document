#include<stdio.h>
#include<math.h>
#include<string.h>
#define price 3.21
int main()
{
    int a;
    float de,pr,fee;
    printf("请输入缴费模式：\n1.输入买电的度数，输出买电的价格\n2.输入买电的价格，输出买电的度数\n");
    scanf("%d",&a);
    if(a==1)
    {
        printf("请输入买电的度数");
        scanf("%f",&de);
        pr=de*price;
        printf("应收取%.2f元",pr);
    }
    if(a==2)
    {
        printf("请输入买电的钱数");
        scanf("%f",&pr);
        de=pr/price;
        fee=pr-((int)de)*price;
        printf("购买的电的度数为：%.0f,应找零%.2f",de,fee);
    }
}
