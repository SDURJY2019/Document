#include<stdio.h>
int main()
{
    int a;
    printf("��������İٷ��Ƴɼ�\n");
    scanf("%d",&a);
    switch(a/10)
    {
    case 0:printf("��ĵȼ��Ƴɼ�ΪF");break;
    case 1:
    case 2:printf("��ĵȼ��Ƴɼ�ΪE");break;
    case 3:
    case 4:printf("��ĵȼ��Ƴɼ�ΪD");break;
    case 5:
    case 6:printf("��ĵȼ��Ƴɼ�ΪC");break;
    case 7:
    case 8:printf("��ĵȼ��Ƴɼ�ΪB");break;
    case 9:
    case 10:printf("��ĵȼ��Ƴɼ�ΪA");break;
    }
}
