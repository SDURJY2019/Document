#include<stdio.h>
int main()
{
    int *p1,*p2;
    int p3;
    int a,b;
    void swap(int *p1,int *p2);
    a=5;b=7;
    p1=&a;
    p2=&b;
    swap(p1,p2);
    printf("%d %d",*p1,*p2);
}
void swap(int *p1,int *p2)//�˽ⶨ��ĺ��������壬��������һ��ȷ�еĵ�ַ�����Ǵ���һ�����㷽ʽ��ֻ���������е�ָ����Ա�ʾ��ַ
{
    int p3;
    p3=*p1;
    *p1=*p2;
    *p2=p3;
}
