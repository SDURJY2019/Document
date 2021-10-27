#include<stdio.h>
int main()
{
    float a[10];
    int i;
    float sum,average;
    for(i=0;i<10;i++)
    {
        printf("请输入第%d个学生的成绩",i+1);
        scanf(" %f",a+i);
        sum+=*(a+i);
    }
    average=sum/10;
    printf("这十名同学的平均成绩为%.2f",average);
}
