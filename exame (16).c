#include<stdio.h>
#define r 4
#define c 4
int main()
{
    float a[r][c];
    void zhuanzhi(float *p,int role,int colum);
    float *p;
    int i=1,j=1;
    for(p=a;p<*a+r*c;p++)
    {
        printf("请输入矩阵第%d行第%d列的元素",i,j);
        scanf("%f",p);
        j++;
        if(j>c) {j=1;i++;}
    }
    zhuanzhi(a,r,c);
    for(int i=0;i<r;i++)
        {for(int j=0;j<r;j++)
    printf("%f ",a[i][j]);
    printf("\n");}
}
void zhuanzhi(float *p,int role,int colum)
{
    int i,j;
    for(i=0;i<colum;i++)
        for(j=0;j<i;j++)
    {
        float temp;
        temp=*(p+colum*i+j);
        *(p+colum*i+j)=*(p+colum*i+j+(j-i)*(colum-1));
        *(p+colum*i+j+(j-i)*(colum-1))=temp;
    }
}
