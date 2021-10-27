#include<stdio.h>
int main()
{
    void swap(float *p1,float *p2);
    float a,b;
    float *p1,*p2;
    scanf("%f %f",&a,&b);
    p1=&a;
    p2=&b;
    if(a<b)
    {
        swap(p1,p2);
    }
    printf("%f %f",a,b);
}
void swap(float *p1,float *p2)
{
    float p3;
    p3=*p1;
    *p1=*p2;
    *p2=p3;
}
