#include<stdio.h>
int main()
{
    float a[10];
    int i;
    float average(float x[],int y);
    for(i=0;i<10;i++)
    {
        printf("�������%d���˵ĳɼ�",i+1);
        scanf("%f",a+i);
    }
    printf("��ʮ���˵�ƽ���ɼ�Ϊ%f",average(a,10));
}
float average(float x[],int y)
{
    float sum;
    int i;
    for(i=0;i<y;i++)
        sum+=*(x+i);
    return sum/y;
}
