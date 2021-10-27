#include<stdio.h>
int main()
{
    printf("请输入两个数");
    float a,b;
    scanf("%f%f",&a,&b);
    float *p1,*p2;
    p1=&a;
    p2=&b;
    void swap(float *p1,float *p2);
    swap(p1,p2);
    printf("%f %f",a,b);
}
void swap(float *p1,float *p2)
{
    float temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
}
