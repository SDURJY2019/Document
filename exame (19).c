#include<stdio.h>
int main()
{
    printf("������һ�����");
    int year;
    scanf("%d",&year);
    if(year%4==0&&year%100!=0) printf("������");
    else
        if(year%100==0&&year%400==0) printf("������");
    else printf("��������");
}
