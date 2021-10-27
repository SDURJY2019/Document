#include<stdio.h>
#define n 3
int main()
{
    void sort(float x[],int y);
    float a[n];
    float *p;
    for(p=a;p<a+n;p++)
    {
        printf("请输入一个数");
        scanf("%f",p);
    }
    sort(a,n);
    printf("输出的结果为：\n");
    for(int i=0;i<n;i++)
    printf("%f ",a[i]);
}
void sort(float x[],int y)
{
    int i;
    for(i=0;i<=n/2;i++)
    {
        float temp;
        temp=x[i];
        x[i]=x[y-i-1];
        x[y-i-1]=temp;
    }
}
