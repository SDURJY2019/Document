#include<stdio.h>
#include<string.h>
int main()
{
    float x[20];
    for(int i=0;i<20;i++)
    {
        printf("请输入第%d个数",i+1);
        scanf("%f",x+i);
    }
    void maopaopaixu(float x[],int y);
    void xuanzepaixu(float x[],int y);
    maopaopaixu(x,sizeof(x)/4);
    xuanzepaixu(x,sizeof(x)/4);
}
void xuanzepaixu(float x[],int y)
{
    int i,j;
    for(i=0;i<y;i++)
        for(j=i;j<y;j++)
    {
        if(x[i]<x[j])
        {
        float temp;
        temp=x[j];
        x[j]=x[i];
        x[i]=temp;
        }
    }
    printf("选择排序的结果为：\n");
    for(i=0;i<y;i++)
        printf("%f ",x[i]);
}
void maopaopaixu(float x[],int y)
{
    int i,j;
    for(i=0;i<y;i++)
        for(j=0;j<y-1;j++)
    {
        if(x[j]<x[j+1])
        {
        float temp;
        temp=x[j+1];
        x[j+1]=x[j];
        x[j]=temp;
        }
    }
    printf("冒泡排序的结果为：\n");
    for(i=0;i<y;i++)
        printf("%f ",x[i]);
}
