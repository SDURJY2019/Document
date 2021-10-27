#include<stdio.h>
#include<math.h>
int main()
{
    printf("请输入三个数\n");
    float a,b,c,p,s;
    scanf("%f %f %f",&a,&b,&c);
    if((a+b)>c&&(a+c)>b&&(b+c)>a)
    {
        printf("能构成三角形\n");
        p=(a+b+c)/2;
        s=sqrt(p*(p-a)*(p-b)*(p-c));
        printf("三角形的面积为%f",s);
    }
    else printf("不能构成三角形");
}
