#include<stdio.h>
#include<math.h>
struct point
{
    float x,y;
};
struct line
{
  struct point p1,p2;
};
int main()
{
    float s;
    struct line l1;
    printf("������ֱ�ߵ�ʼ��");
    scanf("%f %f",&l1.p1.x,&l1.p1.y);
    printf("������ֱ�ߵ��յ�");
    scanf("%f %f",&l1.p2.x,&l1.p2.y);
    s=sqrt(pow(l1.p1.x-l1.p2.x,2)+pow(l1.p1.y-l1.p2.y,2));
    printf("%f",s);
}
