#include<stdio.h>
int main()
/*{
    void swap(int *x,int *y);
    float a,b;
    int *p1,*p2;
    a=1.1;
    b=2.2;
    p1=&a;
    p2=&b;
    swap(p1,p2);
    printf("%f %f",a,b);
}
void swap(int *x,int *y)
{
        int p3;
        if(*x>*y)
        {p3=*x;
         *x=*y;
         *y=p3;}
}*/
{
    float min(float x[]);
    //float max(float x[]);
    float a[5]={1.1,2.2,3.3,4.4,5.5};
    float b;
    b=min(a);
    printf("%f",b);
}
/*float max(float x[])
{
    int i;
    float a;
    a=x[0];
    for(i=0;i<=4;i++)
    {
        if(x[i]>a)
        {
            a=x[i];
        }
    }
    return a;
}
*/

float min(float x[])
{
    int i;
    float a;
    a=x[0];
    for(i=0;i<=4;i++)
    {
        if(x[i]<a)
        {
            a=x[i];
        }
    }
    return a;
}
