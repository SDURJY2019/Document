#include<stdio.h>
#include<math.h>
int main()
{
    printf("������һԪ���η���ax^2+bx+c��ϵ��");
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    float detar;
    detar=pow(b,2)-4*a*c;
    if(detar>0&&a!=0)
    {
        float x1,x2;
        x1=(-b+detar)/2*a;
        x2=(-b-detar)/2*a;
        printf("��һԪ���η���������ʵ���ֱ�Ϊx1=%f,x2=%f",x1,x2);
    }
    else
        if(detar==0&&a!=0)
    {
        float x0;
        x0=-b/2*a;
        printf("��һԪ���η�����������ȵ�ʵ��Ϊx1=x2=%f",x0);
    }
    else
        if(detar<0&&a!=0)
            {
            printf("��һԪ���η�����ʵ��");
            }
    else
        if(a==0&&b!=0)
    {
        float x;
        x=-c/b;
        printf("��һԪһ�η��̵Ľ�Ϊx=%f",x);
    }
    else printf("�÷����޽�");
}
