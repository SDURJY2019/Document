#include<stdio.h>
int main()
{
    float jia(float sum,float temp);
    float jian(float sum,float temp);
    float cheng(float sum,float temp);
    float chu(float sum,float temp);
    float sum,temp;
    char a;
    printf("请输入一个数");
    scanf("%f",&sum);
    printf("请输入进行的运算操作符号");
    scanf(" %c",&a);
    printf("请输入一个数");
    scanf("%f",&temp);
    switch(a)
    {
    case'+':sum=jia(sum,temp);
    case'-':sum=jian(sum,temp);
    case'*':sum=cheng(sum,temp);
    case'/':sum=chu(sum,temp);
    }
    printf("输出的结果为%f",sum);
}
float jia(float sum,float temp)
{
    float summer;
    summer=sum+temp;
    return summer;
}
float jian(float sum,float temp)
{
    float summer;
    summer=sum-temp;
    return summer;
}
float cheng(float sum,float temp)
{
    float summer;
    summer=sum*temp;
    return summer;
}
float chu(float sum,float temp)
{
    float summer;
    if(temp!=0)
    {summer=sum/temp;
    return summer;}
    else
        printf("输入错误,除数不能为零");
    exit(0);
}
