#include<stdio.h>
int main()
{
    int x,y,m,n;
    int a[x][y],b[m][n];
    int i,j,il;
    printf("请输入矩阵A的行数和列数（前面为行数后面为列数并用空格隔开）");
    scanf("%d%d",&x,&y);
    printf("请输入矩阵B的行数和列数（前面为行数后面为列数并用空格隔开）");
    scanf("%d%d",&m,&n);
    printf("请按照从左到右从上到下的顺序输入矩阵A(其中各个元素之间用空格隔开)");
    int c[x][n]={0};
    for(j=0;j<=y-1;j++)
    {
            for(i=0;i<=x-1;i++)
    {
        scanf("%d",&a[i][j]);
    }
    }
    printf("请按照从左到右从上到下的顺序输入矩阵B(其中各个元素之间用空格隔开)");
    for(j=0;j<=n-1;j++)
    {
            for(i=0;i<=m-1;i++)
    {
        scanf("%d",&b[i][j]);
    }
    }
    for(j=0;j<=n-1;j++)
    {
            for(i=0;i<=x-1;i++)
    {
            for(il=0;il<=x-1;il++)
            {
                c[i][j]+=a[i][il]*b[il][i];
            }
    }
    }
    for(j=0;j<=n-1;j++)
    {
            for(i=0;i<=x-1;i++)
    {
        printf("%d ",c[i][j]);
    }
        printf("\n");
    }
}
