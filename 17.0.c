#include<stdio.h>
int main()
{
    float sum,a;
    char b;
    float jia(float x,float y);
    float jian(float x,float y);
    float cheng(float x,float y);
    float chu(float x,float y);
    float *choose(char x);
    float (*p)(float,float);
    printf("������һ����\n");
    scanf("%f",&sum);
    while(1)
    {
        printf("�������������\n");
        scanf(" %c",&b);
        if(b=='=') {printf("%.2f",sum);break;}
        printf("������һ����\n");
        scanf("%f",&a);
        p=choose(b);
        sum=(*p)(sum,a);
    }
}
float jia(float x,float y)
{
    float sum;
    sum=x+y;
    return sum;
}
float jian(float x,float y)
{
    float sum;
    sum=x-y;
    return sum;
}
float cheng(float x,float y)
{
    float sum;
    sum=x*y;
    return sum;
}
float chu(float x,float y)
{
    float sum;
    if(y==0) {printf("���󣬳�������Ϊ0\n");return x;}
    else
        {sum=x/y;
    return sum;}
}
float *choose(char x)
{
    float *p;
    while(1)
    {switch (x)
    {
    case '+':p=jia;return p;
    case '-':p=jian;return p;
    case'*':p=cheng;return p;
    case'/':p=chu;return p;
    default:printf("���������������������\n");
    }}
}
