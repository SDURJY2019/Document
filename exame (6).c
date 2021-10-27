#include<stdio.h>
int main()
{
    float a[10];
    int i,j;
    for(i=0;i<10;i++)
    {
        printf("请输入第%d个数",i+1);
        scanf(" %f",a+i);
    }
    for(j=0;j<10;j++)
        for(i=0;i<9;i++)
    {
        if(*(a+i)>*(a+i+1))
        {
            float temp;
            temp=*(a+i+1);
            *(a+i+1)=*(a+i);
            *(a+i)=temp;
        }
    }
    printf("\n从小到大的输出结果为：\n");
    for(i=0;i<10;i++)
    {
        printf("%f ",*(a+i));
    }
    for(j=0;j<10;j++)
        for(i=0;i<9;i++)
    {
        if(*(a+i)<*(a+i+1))
        {
            float temp;
            temp=*(a+i+1);
            *(a+i+1)=*(a+i);
            *(a+i)=temp;
        }
    }
    printf("\n从大到小的输出结果为：\n");
    for(i=0;i<10;i++)
    {
        printf("%f ",*(a+i));
    }
}
