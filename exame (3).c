#include<stdio.h>
int main()
{
    int i;
    printf("������Ҫ��Ľ׳�");
    scanf("%d",&i);
    int j,k,sum=1;
    j=k=i;
    for(;i>=1;i--)
        sum*=i;
    printf("��forѭ�������Ľ׳˵�ֵΪ%d\n",sum);
    sum=1;
    do
    {
        sum*=j;
        j--;
    }while(j>=1);
    printf("��do--whileѭ�������Ľ׳˵�ֵΪ%d\n",sum);
    sum=1;
    while(k>=1)
    {
        sum*=k;
        k--;
    }
    printf("��whileѭ�������Ľ׳˵�ֵΪ%d\n",sum);
}
