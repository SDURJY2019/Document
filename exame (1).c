#include<stdio.h>
int main()
{
    printf("������һ���ٷ��Ƴɼ�");
    float grade;
    int _10grade;
    scanf("%f",&grade);
    grade=grade/10-5;
    switch ((int)grade)
    {
        case 5:
        case 4:printf("A");break;
        case 3:printf("B");break;
        case 2:
        case 1:printf("C");break;
        default:printf("F");break;
    }
}
