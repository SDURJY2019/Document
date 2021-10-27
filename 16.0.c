#include<stdio.h>
int main()
{
    float a[10]={1.0,2,3,4,9,8,5,2,1,-5};
    int i,m;
    /*for(i=0;i<10;i++)
    {
        printf("请输入第%d个人的成绩",i+1);
        scanf("%f",a+i);
    }*/
    void swapmaopao(float x[],int y);
    void swapmaopao2(float x[],int y);
    //void quickswap(float x[],int y);
    void swapxuanze(float x[],int y);
    void swapxuanze2(float x[],int y);
    float (*p)(float *x,int y);
    printf("请输入排序模式");
    scanf("%d",&m);
    if(m==1) p=swapxuanze;
    if(m==2) p=swapmaopao;
    if(m==3) p=swapmaopao2;
    if(m==4) p=swapxuanze2;
    (*p)(a,10);
    for(i=0;i<10;i++)
        printf("%.2f ",*(a+i));
}
void swapxuanze(float x[],int y)
{
    int i,j;
    float k;
    for(i=0;i<y;i++)
        for(j=0;j<y;j++)
    {
        if(*(x+i)<*(x+j))
        {
           k=*(x+i);
           *(x+i)=*(x+j);
           *(x+j)=k;
        }
    }
}
/*void quickswap(float x[],int y)
{
    int i,j;
    for(i=0;i<y;i++)
        if()
}*/
void swapmaopao(float x[],int y)
{
    int i,j;
    float k;
    for(i=0;i<y;i++)
        for(j=0;j<y-1;j++)
    {
        if(*(x+j)<*(x+j+1))
        {
            k=*(x+j);
            *(x+j)=*(x+j+1);
            *(x+j+1)=k;
        }
    }
}
void swapxuanze2(float x[],int y)
{
    int i,j;
    float k;
    for(i=0;i<y;i++)
        for(j=0;j<y;j++)
    {
        if(*(x+i)>*(x+j))
        {
           k=*(x+i);
           *(x+i)=*(x+j);
           *(x+j)=k;
        }
    }
}
void swapmaopao2(float x[],int y)
{
    int i,j;
    float k;
    for(i=0;i<y;i++)
        for(j=0;j<y-1;j++)
    {
        if(*(x+j)>*(x+j+1))
        {
            k=*(x+j);
            *(x+j)=*(x+j+1);
            *(x+j+1)=k;
        }
    }
}
