#include<stdio.h>
#include<math.h>
#include<string.h>
#define price 3.21
int main()
{
    int a;
    float de,pr,fee;
    printf("������ɷ�ģʽ��\n1.�������Ķ�����������ļ۸�\n2.�������ļ۸�������Ķ���\n");
    scanf("%d",&a);
    if(a==1)
    {
        printf("���������Ķ���");
        scanf("%f",&de);
        pr=de*price;
        printf("Ӧ��ȡ%.2fԪ",pr);
    }
    if(a==2)
    {
        printf("����������Ǯ��");
        scanf("%f",&pr);
        de=pr/price;
        fee=pr-((int)de)*price;
        printf("����ĵ�Ķ���Ϊ��%.0f,Ӧ����%.2f",de,fee);
    }
}
