#include<stdio.h>
int main()
{
    float a[10];
    int i,j;
    for(i=0;i<10;i++)
    {
        printf("�������%d����",i+1);
        scanf(" %f",a+i);
    }
    for(j=0;j<10;j++)
        for(i=0;i<9;i++)
    {
        if(*(a+i)>*(a+i+1))
        {
            float temp;
            temp=*(a+i+1);
            *(a+i+1)=*(a+i);
            *(a+i)=temp;
        }
    }
    printf("\n��С�����������Ϊ��\n");
    for(i=0;i<10;i++)
    {
        printf("%f ",*(a+i));
    }
    for(j=0;j<10;j++)
        for(i=0;i<9;i++)
    {
        if(*(a+i)<*(a+i+1))
        {
            float temp;
            temp=*(a+i+1);
            *(a+i+1)=*(a+i);
            *(a+i)=temp;
        }
    }
    printf("\n�Ӵ�С��������Ϊ��\n");
    for(i=0;i<10;i++)
    {
        printf("%f ",*(a+i));
    }
}
