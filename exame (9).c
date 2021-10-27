#include<stdio.h>
#define r 3
#define c 3
int main()
{
    float a[r][c];
    int i=1,j=1;
    float *p;
    for(p=a;p<*a+r*c;p++)
    {
        printf("请输入矩阵第%d行第%d列的元素",i,j);
        scanf("%f",p);
        j++;
        if(j>c) {j=1;i++;}
    }
    if(r==c)
    {
        for(i=0;i<r;i++)
        for(j=0;j<i;j++)
        {
            float temp;
            temp=*(*(a+i)+j);
            *(*(a+i)+j)=*(*(a+j)+i);
            *(*(a+j)+i)=temp;
            }
        j=1;
        printf("\n");
    for(p=a;p<*a+r*c;p++)
    {
        printf("%f ",*p);
        j++;
        if(j>c)
        {
            printf("\n");j=1;
        }
    }
}
        else
        {
            float b[c][r];
            for(i=0;i<r;i++)
                for(j=0;j<c;j++)
                b[j][i]=a[i][j];
                j=1;
    for(p=a;p<*a+r*c;p++)
    {
        printf("%f ",*p);
        j++;
        if(j>r)
        {
            printf("\n");j=1;
        }
    }
        }
}
