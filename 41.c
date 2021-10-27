#include<stdio.h>
int main()
{
    float s;
    float niudun(float x,float a,float b,float c,float d,int i);
    s=niudun(2.2,1,2,3,4,1);
}
float niudun(float x,float a,float b,float c,float d,int i)
{
    float y,y1;
    if(i==0)
        printf("%f",x);
    else
    {
        y=a*x*x*x+b*x*x+c*x+d;
        y1=3*a*x*x+2*b*x+c;
        x=x-y/y1;
        niudun(x,a,b,c,d,i-1);
    }
}
