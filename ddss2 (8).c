#include<stdio.h>
struct student
{
    char name[20];
    char xuehao[20];
    float chengji[3];
};
int main()
{
     int i,j,m;
     struct student a[3];
    for(i=0;i<=2;i++)
     {
     printf("������ѧ��ѧ��");
     scanf(" %s",&a[i].xuehao);
     printf("������ѧ������");
     scanf(" %s",&a[i].name);
     for(j=0;j<=2;j++)
     {
         printf("������ѧ����%d�ųɼ�",j+1);
         scanf(" %f",&a[i].chengji[j]);
     }
     }
     float b[3]={0};
     for(m=0;m<=2;m++)
     {
         b[0]=b[0]+a[m].chengji[0];
         b[1]=b[1]+a[m].chengji[1];
         b[2]=b[2]+a[m].chengji[2];
     }
     for(i=0;i<=2;i++)
     {
         printf("��%d�ſεĳɼ�Ϊ%f",i+1,b[i]/3);
     }

}
