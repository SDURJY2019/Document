#include<stdio.h>
int main()
{
    int x,y,m,n;
    int a[x][y],b[m][n];
    int i,j,il;
    printf("���������A��������������ǰ��Ϊ��������Ϊ�������ÿո������");
    scanf("%d%d",&x,&y);
    printf("���������B��������������ǰ��Ϊ��������Ϊ�������ÿո������");
    scanf("%d%d",&m,&n);
    printf("�밴�մ����Ҵ��ϵ��µ�˳���������A(���и���Ԫ��֮���ÿո����)");
    int c[x][n]={0};
    for(j=0;j<=y-1;j++)
    {
            for(i=0;i<=x-1;i++)
    {
        scanf("%d",&a[i][j]);
    }
    }
    printf("�밴�մ����Ҵ��ϵ��µ�˳���������B(���и���Ԫ��֮���ÿո����)");
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
