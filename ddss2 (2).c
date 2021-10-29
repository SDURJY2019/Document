#include<stdio.h>
struct student
{
    char name[20];
    char xuehao[20];
    float chengji[3];
    float sum;
};
int main()
{
     void swap(struct student x[],float y[]);
     int i,j,m;
     struct student a[4]={0};
    for(i=0;i<=3;i++)
     {
     printf("请输入学生学号");
     scanf(" %s",&a[i].xuehao);
     printf("请输入学生姓名");
     scanf(" %s",&a[i].name);
     for(j=0;j<=2;j++)
     {
         printf("请输入学生第%d门成绩",j+1);
         scanf(" %f",&a[i].chengji[j]);
     }
     }
     float b[4]={0},c[4]={0};
     for(i=0;i<=3;i++)
        for(j=0;j<=3;j++)
     {
         c[i]=c[i]+a[i].chengji[j];
     }
     for(m=0;m<=3;m++)
     {
         b[0]=b[0]+a[m].chengji[0];
         b[1]=b[1]+a[m].chengji[1];
         b[2]=b[2]+a[m].chengji[2];
     }
     swap(a,c);
     for(i=0;i<=3;i++)
     {
         printf("第%d门课的平均成绩为%f",i+1,b[i]/3);
     }
    printf("总成绩排名为：\n");
    for(i=0;i<=3;i++)
    {
        printf("%s   %s    %f    %f    %f    %f\n",a[i].xuehao,a[i].name,a[i].chengji[0],a[i].chengji[1],a[i].chengji[2],c[i]);
    }
    FILE*fp;
    fp=fopen("1.data","wb+");
    for(i=0;i<=3;i++)
    fwrite(&a[i],sizeof(struct student),1,fp);
    fclose(fp);
}
void swap(struct student x[],float y[])
{
    int i,j;
    float temp;
    struct student temper;
    for(i=0;i<=4;i++)
        for(j=0;j<=2;j++)
    {
        if(y[j]<y[j+1])
        {
            temper=x[j];
            x[j]=x[j+1];
            x[j+1]=temper;
            temp=y[j];
            y[j]=y[j+1];
            y[j+1]=temp;
        }
    }
}

