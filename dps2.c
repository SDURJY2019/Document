#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    float jia(float shuru,float sum);
    float jian(float shuru,float sum);
    float cheng(float shuru,float sum);
    float chu(float shuru,float sum);
    float jiecheng(float shuru,float sum);
    float jifen(float shuru,float sum);
    float mi(float sum);
    float zhengx(float shuru,float sum);
    float yux(float shuru,float sum);
    float zhengq(float shuru,float sum);
    float duishu(float shuru,float sum);
    int i;
    char yunsuanfu;
    float shuru;
    float sum;
    printf("������һ����");
    scanf(" %f",&sum);
    while(1)
    {
        printf("������һ�������");
        scanf(" %c",&yunsuanfu);
        if(yunsuanfu=='=') {printf("������Ϊ��%f",sum);return 0;}
        if(yunsuanfu=='#') i=1;
        if(i==1)
        {
            printf("������һ�������");
            scanf(" %c",&yunsuanfu);
            if(yunsuanfu=='^')
            mi(sum);goto loop;
        }
        printf("������һ����");
        scanf(" %f",&shuru);
        switch (yunsuanfu)
        {
        case'+':sum=jia(shuru,sum);break;
        case'-':sum=jian(shuru,sum);break;
        case'*':sum=cheng(shuru,sum);break;
        case'/':sum=chu(shuru,sum);break;
        }
        loop:;
        /*case'!':jiecheng(shuru,sum);break;
        case'f':jifen(shuru,sum);break;
        case's':zhengx(shuru,sum);break;
        case'c':yux(shuru,sum);break;
        case't':zhengq(shuru,sum);break;
        case'l':duishu(shuru,sum);break;*/
    }
    }
float jia(float shuru,float sum)
{
    sum=sum+shuru;
    printf("*************");
    return sum;
}
float jian(float shuru,float sum)
{
    sum=sum-shuru;
    return sum;
}
float cheng(float shuru,float sum)
{
    sum=sum*shuru;
    return sum;
}
float chu(float shuru,float sum)
{
    sum=sum/shuru;
    return sum;
}
float mi(float sum)
{
    char yunsuanfu;
    float di,zhi,jieguo;
    printf("�������ڸ�����֮ǰ�������");
    scanf(" %c",&yunsuanfu);
    printf("�������ݵ���");
    scanf("%f",&di);
    printf("��������ָ��");
    scanf("%f",&zhi);
    jieguo=pow(di,zhi);
    float jia(float shuru,float sum);
    float jian(float shuru,float sum);
    float cheng(float shuru,float sum);
    float chu(float shuru,float sum);
    switch (yunsuanfu)
        {
        case'+':sum=jia(jieguo,sum);break;
        case'-':sum=jian(jieguo,sum);break;
        case'*':sum=cheng(jieguo,sum);break;
        case'/':sum=chu(jieguo,sum);break;
        }
        printf("#############");
    return sum;
}
/*float jiecheng(float shuru,float sum)
{
    sum+=sin(shuru)
    return sum;
}*/
