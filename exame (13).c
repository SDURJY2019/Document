#include<stdio.h>
int main()
{
    float jia(float sum,float temp);
    float jian(float sum,float temp);
    float cheng(float sum,float temp);
    float chu(float sum,float temp);
    float sum,temp;
    char a;
    printf("������һ����");
    scanf("%f",&sum);
    printf("��������е������������");
    scanf(" %c",&a);
    printf("������һ����");
    scanf("%f",&temp);
    switch(a)
    {
    case'+':sum=jia(sum,temp);
    case'-':sum=jian(sum,temp);
    case'*':sum=cheng(sum,temp);
    case'/':sum=chu(sum,temp);
    }
    printf("����Ľ��Ϊ%f",sum);
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
        printf("�������,��������Ϊ��");
    exit(0);
}
