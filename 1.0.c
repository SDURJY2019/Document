#include<stdio.h>
#include<windows.h>
int main()
{
    int a;
    for(a=0;;a++)
 {
    if((a%100!=0)&&(a%4==0)) printf("%d������\n",a);
    if((a%100==0)&&(a%400==0)) printf("%d������\n",a);
    //else printf("��������");
    Sleep(1);
 }
}
