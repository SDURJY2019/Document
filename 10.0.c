#include<stdio.h>
# define num 5
# define sub 3
struct student
{char name[20];
char xuehao[20];
char sex[3];
float score[sub];
};
int main()
{
    struct student stu[num]={0};
    float ave[num+sub]={0};
    //struct student *pstu[num];
    int i,j;
    /*for(i=0;i<num;i++)
        pstu[i]=stu+i;*/
    for(i=0;i<num;i++)
        {
            printf("�������%d��ѧ����������",i+1);
            scanf("%s",&stu[i].name);
            printf("�������%d��ѧ����ѧ�ţ�",i+1);
            scanf("%s",&stu[i].xuehao);
            printf("�������%d��ѧ�����ձ�",i+1);
            scanf("%s",&stu[i].sex);
            for(j=0;j<sub;j++)
            {
                printf("�������%d��ѧ���ĵ�%d��Ŀ�ĳɼ���",i+1,j+1);
                scanf("%f",&stu[i].score[j]);
                }
        }
        void average(struct student x[],int num1,float z[],int sub1);
        average(stu,num,ave,sub);
        void rank(struct student x[],int num1,int sub1);
        rank(stu,num,sub);
        void rankall(struct student x[],float y[],int num1);
        /*printf("����\tѧ��\t�Ա�\t");
        for(i=0;i<sub;i++)
            printf("��%d�Ƴɼ�\t",i+1);
        printf("\n");
        for(i=0;i<num;i++)
        {
            printf("%s\t%s\t%s\t",stu[i].name,stu[i].xuehao,stu[i].sex);
            for(j=0;j<sub;j++)
                printf("%9.2f\t",stu[i].score[j]);
                printf("\n");
            }*/
            for(i=0;i<num;i++)
                printf("%s��ƽ���ܳɼ�Ϊ%.2f\n",stu[i].name,ave[i]);
            for(j=0;j<sub;i++,j++)
                printf("��%d��Ŀ��ƽ���ɼ�Ϊ%.2f\n",j+1,ave[i]);
                rankall(stu,ave,num);
                printf("����\tѧ��\t�Ա�\t");
        for(i=0;i<sub;i++)
            printf("��%d�Ƴɼ�\t",i+1);
            printf("�ܳɼ�\t����");
        printf("\n");
        for(i=0;i<num;i++)
        {
            printf("%s\t%s\t%s\t",stu[i].name,stu[i].xuehao,stu[i].sex);
            for(j=0;j<sub;j++)
                printf("%9.2f\t",stu[i].score[j]);
                printf("%8.2f\t%d",ave[i]*sub,i+1);
                printf("\n");
            }
}
void average(struct student x[],int num1,float z[],int sub1)
{
    int i=0,j,k;
    for(j=0;j<num1;j++,i++)
        {
        for(k=0;k<sub1;k++)
        z[i]+=x[j].score[k];
        z[i]=z[i]/sub1;
        }
    for(j=0;j<sub1;j++,i++)
    {
        for(k=0;k<num1;k++)
        z[i]+=x[k].score[j];
        z[i]=z[i]/num1;
    }
}
void rank(struct student x[],int num1,int sub1)
{
    int i,j,k;
    struct student a,b;
    a=x[0];
    for(j=0;j<sub1;j++)
    {
    for(i=0;i<num1-1;i++)
    if(a.score[j]<x[i].score[j])
        a=x[i];
        printf("��%d��Ŀ�ɼ�����߷ֻ����Ϊ��%s����Ϊ��%.2f\n",j+1,a.name,a.score[j]);
    }
    for(j=0;j<sub1;j++)
    {
    for(i=0;i<num1-1;i++)
    if(b.score[j]>x[i].score[j])
        b=x[i];
        printf("��%d��Ŀ�ɼ�����ͷֻ����Ϊ��%s����Ϊ��%.2f\n",j+1,b.name,b.score[j]);
    }
}
void rankall(struct student x[],float y[],int num1)
{
    struct student a;
    int i,j;
    float a1;
    for(i=0;i<num1;i++)
        for(j=0;j<num1-1;j++)
    {
        if(y[j]<y[j+1])
        {
            a1=y[j];
            y[j]=y[j+1];
            y[j+1]=a1;
            a=x[j];
            x[j]=x[j+1];
            x[j+1]=a;
        }
    }
}

