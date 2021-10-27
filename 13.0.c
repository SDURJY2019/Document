#include<stdio.h>
#define line 3
#define colum 3

int main()
{
    float a[line][colum];
    int i,j;
    float *p;
    for(p=a;p<a+line;p++)
    {
        printf("请输入一个数");
        scanf("%f",p);
    }
    if(line==colum)
    {for(i=0;i<line;i++)
        for(j=0;j<i;j++)
    {
        float b;
        b=a[i][j];
        a[i][j]=a[j][i];
        a[j][i]=b;
    }
        for(i=0;i<line;i++)
        {for(j=0;j<colum;j++)
    {
        printf("%10.2f",*(*(a+i)+j));
    }
    printf("\n");
    }}
    else
    {for(i=0,p=a;i<colum;i++)
        {for(j=0;j<line;j++,p++)
    {
        printf("%10.2f",*p);
    }
    printf("\n");
    }}
}
