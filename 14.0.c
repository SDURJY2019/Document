#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,x,y;
    int n;
    printf("请输入一元三次方程ax^3+bx^2+cx+d的系数\n");
    scanf("%f %f %f %f",&a,&b,&c,&d);
    void xianjie(float a,float b,float c,float d,int n,float x,float y);
    printf("请输入弦截开始和截止的区间\n");
    scanf("%f %f",&x,&y);
    printf("请输入弦截的次数\n");
    scanf("%d",&n);
    xianjie(a,b,c,d,n,x,y);
}
void xianjie(float a,float b,float c,float d,int n,float x,float y)
{
    float k,y1,x1;
    int i;
    for(i=1;i<=n;i++)
    {y1=a*y*y*y+b*y*y+c*y+d;
    x1=a*x*x*x+b*x*x+c*x+d;
    k=(y1-x1)/(y-x);
    x=(-y1)/k+y;}
    printf("%f",x);
}
