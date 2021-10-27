#include<stdio.h>
int main()
{
    int a[3][3],b[3][3];
    int i,j,il;
    printf("请按照从左到右从上到下的顺序输入矩阵A(其中各个元素之间用空格隔开)\n");
    int c[3][3]={0};
    for(j=0;j<=2;j++)
    {
            for(i=0;i<=2;i++)
    {
        scanf("%d",&a[j][i]);
    }
    }
    printf("请按照从左到右从上到下的顺序输入矩阵B(其中各个元素之间用空格隔开)\n");
    for(j=0;j<=2;j++)
    {
            for(i=0;i<=2;i++)
    {
        scanf("%d",&b[j][i]);
    }
    }
    for(j=0;j<=2;j++)
    {
            for(i=0;i<=2;i++)
    {
            for(il=0;il<=2;il++)
            {
                c[j][i]+=a[j][il]*b[il][i];
            }
    }
    }
    printf("\n");
    for(j=0;j<=2;j++)
    {
            for(i=0;i<=2;i++)
    {
        printf("%d ",c[j][i]);
    }
        printf("\n");
    }
}
