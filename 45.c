#include<stdio.h>
int main()
{
    float a[10];
    float *p1,*p2;
    int i,j;
    void swap(float *p1,float *p2);
    for(i=0;i<=9;i++)
    {
        scanf("%f",a+i);
    }
    for(j=0;j<=9;j++)
    for(i=0;i<=8;i++)
    {
        p1=a+i;
        p2=a+i+1;
        swap(p1,p2);
    }
    for(i=0;i<=9;i++)
    {
        printf("%f ",a[i]);
    }
}
void swap(float *p1,float *p2)
{
    if(*p1<*p2)
    {
    float p3;
    p3=*p1;
    *p1=*p2;
    *p2=p3;
    }
}
