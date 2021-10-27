#include<stdio.h>
int main()
{
    printf("请输入一个年份");
    int year;
    scanf("%d",&year);
    if(year%4==0&&year%100!=0) printf("是闰年");
    else
        if(year%100==0&&year%400==0) printf("是闰年");
    else printf("不是闰年");
}
