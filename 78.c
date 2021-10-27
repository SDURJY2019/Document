#include<stdio.h>
int main()
{
    FILE*fp;
    fp=fopen("素数1.txt","w+");
    printf("请输入上一次计算到最后的素数");
    int i,j,sum;
    scanf("%d",&i);
    for(;i<=10000000;i++)
    {
        sum=1;
        for(j=1;j<i;j++)
            if(i%j==0) continue;
            else sum++;
        if(sum==(i-1)) {printf("%d ",i);fprintf(fp,"%d  ",i);
        }
    }
}
