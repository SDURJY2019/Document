#include<stdio.h>
int main()
{
    float a[10];
    int i;
    float sum,average;
    for(i=0;i<10;i++)
    {
        printf("�������%d��ѧ���ĳɼ�",i+1);
        scanf(" %f",a+i);
        sum+=*(a+i);
    }
    average=sum/10;
    printf("��ʮ��ͬѧ��ƽ���ɼ�Ϊ%.2f",average);
}
