#include<stdio.h>
#define role 2
#define colum 5
int main()
{
    int i,j;
    float b,*p1;
    float a[role][colum]={1,2,3,4,5,6,7,8,9};
    for(p1=a;p1<a+role;p1++)
    {
        printf("请输入一个数");
        scanf("%f",p1);
    }
    if(role==colum)
    {float *p[role];
    for(i=0;i<role;i++)
        p[i]=a+i;
    for(i=0;i<role;i++)
        for(j=0;j<i;j++)
    {
        b=*(*(p+i)+j);
        *(*(p+i)+j)=*(*(p+j)+i);
        *(*(p+j)+i)=b;
    }
    for(i=0;i<role;i++)
        {for(j=0;j<colum;j++)
    {
        printf("%.2f ",*(*(p+i)+j));
    }printf("\n");
    }}
    else
        {  float *p[role];
    float b[colum][role]={0};
    for(i=0;i<role;i++)
        p[i]=a+i;
            for(i=0;i<colum;i++)
        {for(j=0;j<role;j++)
    //{
        //printf("%.2f ",*(*(p+j)+i));
        *(*(b+i)+j)=*(*(p+j)+i);
    //}printf("\n");
    }
                    for(i=0;i<colum;i++)
        {for(j=0;j<role;j++)
    {
        printf("%.2f ",*(*(b+i)+j));
    }printf("\n");
    }
        }
}
