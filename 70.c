#include<stdio.h>
int main()
{
    int a,i;
    printf("请输入一个年份");
    scanf(" %d",&a);
    if((a%100!=0)&&(a%4==0)) printf("是闰年");
    else
    if((a%100==0)&&(a%400==0)) printf("是闰年");
    else printf("不是闰年");
}
