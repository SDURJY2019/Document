#include<stdio.h>
struct student
{
    char name[20];
    char num[20];
    float score[3];
};
int main()
{
    struct student stu[5];
    for(int i=0;i<5;i++)
    {
        printf("�������%d��ͬѧ������ ѧ�� ��һ�ſεĳɼ� �ڶ��ſεĳɼ� �����ſεĳɼ�\n",i+1);
        scanf("%s%s%f%f%f",&stu[i].name,&stu[i].num,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);
    }
    float sum[3]={0};
    for(int i=0;i<5;i++)
    {
        sum[0]+=stu[i].score[0];
        sum[1]+=stu[i].score[1];
        sum[2]+=stu[i].score[2];
    }
    for(int i=0;i<3;i++)
    printf("��%d�ſε�ƽ���ɼ�Ϊ%f\n",i+1,sum[i]/5);
}
