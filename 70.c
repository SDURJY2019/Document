#include<stdio.h>
int main()
{
    int a,i;
    printf("������һ�����");
    scanf(" %d",&a);
    if((a%100!=0)&&(a%4==0)) printf("������");
    else
    if((a%100==0)&&(a%400==0)) printf("������");
    else printf("��������");
}
