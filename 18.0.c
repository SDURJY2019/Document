#include<stdio.h>
int main()
{
    void swap(float *a,float *b);
    float a,b;
    printf("请输入两个数");
    scanf("%f %f",&a,&b);
    swap(&a,&b);
    printf("交换后的数值为%f %f",a,b);
}
void swap(float *a,float *b)
{
    float p;
    p=*a;
    *a=*b;
    *b=p;
}
