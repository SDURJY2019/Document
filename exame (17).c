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
    printf("�������߶ε�ʼ������");
    scanf("%f%f",&l1.p1.x1,&l1.p1.y1);
    printf("�������߶ε��յ�����");
    scanf("%f%f",&l1.p2.x1,&l1.p2.y1);
    length=sqrt(pow((l1.p2.x1-l1.p1.x1),2)+pow((l1.p2.y1-l1.p1.y1),2));
    printf("ֱ�ߵĳ���Ϊ%f",length);
}
