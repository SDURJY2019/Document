#include<stdio.h>
#define n 3
int main()
{
    int i;
    float a[n];
    void sort(float x[],int y);
    printf("������%d����",n);
    for(i=0;i<n;i++)
    {
        scanf("%f",(a+i));
    }
    sort(a,n);
    printf("��%d����������Ϊ��\n",n);
    for(i=0;i<n;i++)
    {
        printf("%.2f ",*(a+i));
    }
}
void sort(float x[],int y)
{
    void swap(float *x,float *y);
    int i;
    for(i=0;i<=y/2;i++)
        swap(x+i,x+y-1-i);
}
void swap(float *x,float *y)
{
    float z;
    z=*x;
    *x=*y;
    *y=z;
}
