#include<stdio.h>
#include<math.h>
int main()
{
    printf("请输入一元二次方程ax^2+bx+c的系数");
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    float detar;
    detar=pow(b,2)-4*a*c;
    if(detar>0&&a!=0)
    {
        float x1,x2;
        x1=(-b+detar)/2*a;
        x2=(-b-detar)/2*a;
        printf("该一元二次方程有两个实根分别为x1=%f,x2=%f",x1,x2);
    }
    else
        if(detar==0&&a!=0)
    {
        float x0;
        x0=-b/2*a;
        printf("该一元二次方程有两个相等的实根为x1=x2=%f",x0);
    }
    else
        if(detar<0&&a!=0)
            {
            printf("该一元二次方程无实根");
            }
    else
        if(a==0&&b!=0)
    {
        float x;
        x=-c/b;
        printf("该一元一次方程的解为x=%f",x);
    }
    else printf("该方程无解");
}
