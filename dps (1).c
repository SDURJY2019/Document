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
        printf("请输入第%d个学生的信息\n",i+1);
        printf("姓名：\t年龄:\t性别:\t");
        for(j=0;j<=2;j++)
        {
            printf("请输入该生的第%d科成绩",j+1);
            scanf(" %f",p[i]->score[j]);
        }
    }
    printf("姓名：%s\t年龄:%d\t性别:%s\t第一科成绩：%f\t第二科成绩:%f\t第三科成绩：%f\t",*(p[i])->name,);
}
