/*#include<stdio.h>
#include<math.h>
int main()
{
    int a,i,b;
    scanf("%c",&a);
    if(a=='Y') printf("N");
    else printf("Y\n");
    return 0;
    while(1)
    {
    a=rand();
    printf("%d ",a);
    if (a<=10) break;
    }
    Loop:printf("--------------------���ڳ���ʣ��Ļ����Ϊ%d-----------------------------------------");
    return 0;
    goto Loop;
}
������ˣ���ϲ����ȡ��ʤ����
�������ˣ���ϲ���ȡ��ʤ����*/
#include<stdio.h>
#include<math.h>
int main()
{
    int computer(int x);
    int user (int x);
    int remain(int x,int y,int z);
    int judje(int x);
    int a,n,t,m,o;
    o=0;
    printf("ȡ�����Ϸ\n");
    printf("��Ϸ����\nһ����n����񣬵��Ժ���ҽ���ȡ�����һ�����ȡn/2��������ȡ������˭ȡ�����һ�����˭�������Ϸ��");
    printf("\n�Ƿ�ʼ��Ϸ������Y/N��\n");
    scanf("%c",&a);
    if(a=='Y')
    {
        printf("����������ʼ�ĸ���");
        scanf("%d",&n);
        printf("\n--------------------���ڳ���ʣ��Ļ����Ϊ%d-----------------------------------------\n",n);
        while(1)
        {
        t=user(n);
        m=computer(n);
        n=remain(n,t,m);
        o=judje(n);
        if(o==1)
            {
            printf("\n��Ϸ����,�Ƿ����¿�ʼ������Y/N��");
        }
        }
    }
     if(a=='N')
    {
        printf("лл����ʹ�ã����´����档");
        return 0;
    }
    else printf("�������");
}

int computer(int x)
{
    int a;
    while(1)
    {
        a=rand();
        if(a<=x/2&&a>0) break;
    }
    printf("����ȡ�Ļ������%d\n",a);
    return a;
}
int user(int x)
{
    int b;
    while(1)
    {
        printf("������Ҫȡ�Ļ����");
        scanf("%d",&b);
        if(b<=x/2&&b>0)
        {
            printf("���ȡ�Ļ������%d\n",b);
            return b;
            }
        else printf("��������������Ϲ�������������������롣\n");
    }
}
int remain(int x,int y,int z)
{
    int a;
    a=x-y-z;
    printf("\n--------------------���ڳ���ʣ��Ļ����Ϊ%d-----------------------------------------\n",a);
    return a;
}
int judje(int x)
{
    int a;
    a=0;
    if(x==1)
    {printf("�������ˣ���ϲ���ȡ��ʤ����"); a=1;
    }
    if(x==0) {printf("������ˣ���ϲ����ȡ��ʤ����"); a=1;}
    return a;
}

