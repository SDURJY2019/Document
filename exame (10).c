#include<stdio.h>
int main()
{
    printf("������һԪ���η��̵�ϵ��ax^3+bx^2+cx+d");
    float a,b,c,d;
    scanf("%f%f%f%f",&a,&b,&c,&d);
    printf("�������ҽؿ�ʼ�ͽ���������");
    float x1,x2;
    scanf("%f%f",&x1,&x2);
    printf("�������ҽصĴ���");
    int i;
    scanf("%d",&i);
    float y1,y2,k;
    for(;i>=1;i--)
    {
    y1=a*x1*x1*x1+b*x1*x1+c*x1+d;
    y2=a*x2*x2*x2+b*x2*x2+c*x2+d;
    k=(y2-y1)/(x2-x1);
    x1=-y2/k+x2;
    }
    printf("��һԪ���η����ڸ������ϵ�һ����Ϊ%f",x1);
}
