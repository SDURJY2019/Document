#include<stdio.h>
#include<math.h>
int main()
{
    printf("请输入二元一次方程ax2+bx+c的系数\n");
    float a,b,c,x1,x2,drt;
    scanf("%f %f %f",&a,&b,&c);
    drt=b*b-4*a*c;
    if(a==0)
    {
       printf("此方程为一元一次方程\n");
       x1=-c/b;
       printf("该方程只有一个根为%f\n",x1);
    }
    else  if(drt>0)
    {
         printf("该方程有两个不等的的实根\n");
         x1=(-b+sqrt(drt))/(2*a);
         x2=(-b-sqrt(drt))/(2*a);
         printf("该方程的两个根为x1=%f x2=%f\n",x1,x2);
    }
    else if(drt==0)
    {
        printf("该方程有两个相等的实根\n");
        x1=(-2*a)/b;
        printf("该方程的两个根为x1=x2=%f\n",x1);
    }
    else if(drt<0)
    {
        printf("该方程无实根\n");
    }
}
