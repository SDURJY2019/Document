#include<stdio.h>
struct student
{
    char name[100];
    int age;
    char sex[3];
    float score[3];
};
int main()
{
    int i,j;
    struct student stu[3];
    struct student *p[3];
    for(i=0;i<=2;i++)
    p[i]=stu+i;
    for(i=0;i<=2;i++)
    {
        printf("�������%d��ѧ������Ϣ\n",i+1);
        printf("������\t����:\t�Ա�:\t");
        for(j=0;j<=2;j++)
        {
            printf("����������ĵ�%d�Ƴɼ�",j+1);
            scanf(" %f",p[i]->score[j]);
        }
    }
    printf("������%s\t����:%d\t�Ա�:%s\t��һ�Ƴɼ���%f\t�ڶ��Ƴɼ�:%f\t�����Ƴɼ���%f\t",*(p[i])->name,);
}
