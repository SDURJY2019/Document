#include<stdio.h>
int main()
{
    void swap(float *a,float *b);
    float a,b;
    printf("������������");
    scanf("%f %f",&a,&b);
    swap(&a,&b);
    printf("���������ֵΪ%f %f",a,b);
}
void swap(float *a,float *b)
{
    float p;
    p=*a;
    *a=*b;
    *b=p;
}
