#include<stdio.h>
#include<math.h>
struct point
{
    float x1;
    float y1;
};
struct line
{
    struct point p1;
    struct point p2;
};
int main()
{
    struct line l1;
    float length;
    printf("请输入线段的始点坐标");
    scanf("%f%f",&l1.p1.x1,&l1.p1.y1);
    printf("请输入线段的终点坐标");
    scanf("%f%f",&l1.p2.x1,&l1.p2.y1);
    length=sqrt(pow((l1.p2.x1-l1.p1.x1),2)+pow((l1.p2.y1-l1.p1.y1),2));
    printf("直线的长度为%f",length);
}
