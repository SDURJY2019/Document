#include<stdio.h>
#include<math.h>
int main()
{
    printf("�������Ԫһ�η���ax2+bx+c��ϵ��\n");
    float a,b,c,x1,x2,drt;
    scanf("%f %f %f",&a,&b,&c);
    drt=b*b-4*a*c;
    if(a==0)
    {
       printf("�˷���ΪһԪһ�η���\n");
       x1=-c/b;
       printf("�÷���ֻ��һ����Ϊ%f\n",x1);
    }
    else  if(drt>0)
    {
         printf("�÷������������ȵĵ�ʵ��\n");
         x1=(-b+sqrt(drt))/(2*a);
         x2=(-b-sqrt(drt))/(2*a);
         printf("�÷��̵�������Ϊx1=%f x2=%f\n",x1,x2);
    }
    else if(drt==0)
    {
        printf("�÷�����������ȵ�ʵ��\n");
        x1=(-2*a)/b;
        printf("�÷��̵�������Ϊx1=x2=%f\n",x1);
    }
    else if(drt<0)
    {
        printf("�÷�����ʵ��\n");
    }
}
