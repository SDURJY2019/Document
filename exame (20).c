#include<stdio.h>
#include<math.h>
int main()
{
    printf("�����������ε�������");
    float a,b,c,p,s;
    scanf("%f%f%f",&a,&b,&c);
    if((a+b)>c&&(a+c)>b&&(b+c)>a)
    {
    p=(a+b+c)/2;
    s=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("�ܹ��������Σ������ε����Ϊ%f",s);
    }
    else printf("���ܹ���������");
}
