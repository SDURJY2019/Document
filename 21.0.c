#include<stdio.h>
#include<math.h>
struct point
{
    float x;
    float y;
};
struct line
{
    struct point p1,p2;
};
int main()
{
    int i;
    float l,l2;
    struct line l1;
    printf("�������һ��������");
    scanf("%f %f",&l1.p1.x,&l1.p1.y);
    printf("������ڶ���������");
    scanf("%f %f",&l1.p2.x,&l1.p2.y);
    printf("�߶γ���Ϊ%.2f",sqrt(pow(((l1.p2.x)-(l1.p1.x)),2)+pow(((l1.p2.y)-(l1.p1.y)),2)));
}
