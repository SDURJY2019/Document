#include<stdio.h>
int main()
{
    int a;
    printf("请输入你的百分制成绩\n");
    scanf("%d",&a);
    switch(a/10)
    {
    case 0:printf("你的等级制成绩为F");break;
    case 1:
    case 2:printf("你的等级制成绩为E");break;
    case 3:
    case 4:printf("你的等级制成绩为D");break;
    case 5:
    case 6:printf("你的等级制成绩为C");break;
    case 7:
    case 8:printf("你的等级制成绩为B");break;
    case 9:
    case 10:printf("你的等级制成绩为A");break;
    }
}
