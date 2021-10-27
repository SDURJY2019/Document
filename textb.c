/*#include<stdio.h>
#include<math.h>
int main()
{
    int a,i,b;
    scanf("%c",&a);
    if(a=='Y') printf("N");
    else printf("Y\n");
    return 0;
    while(1)
    {
    a=rand();
    printf("%d ",a);
    if (a<=10) break;
    }
    Loop:printf("--------------------现在场上剩余的火柴数为%d-----------------------------------------");
    return 0;
    goto Loop;
}
玩家输了，恭喜电脑取得胜利。
电脑输了，恭喜玩家取得胜利。*/
#include<stdio.h>
#include<math.h>
int main()
{
    int computer(int x);
    int user (int x);
    int remain(int x,int y,int z);
    int judje(int x);
    int a,n,t,m,o;
    o=0;
    printf("取火柴游戏\n");
    printf("游戏规则：\n一共有n根火柴，电脑和玩家交替取出火柴，一次最多取n/2根（向下取整），谁取到最后一根火柴谁就输掉游戏。");
    printf("\n是否开始游戏（输入Y/N）\n");
    scanf("%c",&a);
    if(a=='Y')
    {
        printf("请输入火柴起始的根数");
        scanf("%d",&n);
        printf("\n--------------------现在场上剩余的火柴数为%d-----------------------------------------\n",n);
        while(1)
        {
        t=user(n);
        m=computer(n);
        n=remain(n,t,m);
        o=judje(n);
        if(o==1)
            {
            printf("\n游戏结束,是否重新开始（输入Y/N）");
        }
        }
    }
     if(a=='N')
    {
        printf("谢谢您的使用，请下次再玩。");
        return 0;
    }
    else printf("输入错误。");
}

int computer(int x)
{
    int a;
    while(1)
    {
        a=rand();
        if(a<=x/2&&a>0) break;
    }
    printf("电脑取的火柴数是%d\n",a);
    return a;
}
int user(int x)
{
    int b;
    while(1)
    {
        printf("请输入要取的火柴数");
        scanf("%d",&b);
        if(b<=x/2&&b>0)
        {
            printf("玩家取的火柴数是%d\n",b);
            return b;
            }
        else printf("你输入的数不符合规则，输入错误，请重新输入。\n");
    }
}
int remain(int x,int y,int z)
{
    int a;
    a=x-y-z;
    printf("\n--------------------现在场上剩余的火柴数为%d-----------------------------------------\n",a);
    return a;
}
int judje(int x)
{
    int a;
    a=0;
    if(x==1)
    {printf("电脑输了，恭喜玩家取得胜利。"); a=1;
    }
    if(x==0) {printf("玩家输了，恭喜电脑取得胜利。"); a=1;}
    return a;
}

