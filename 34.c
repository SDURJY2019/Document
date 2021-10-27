#include<stdio.h>
#include<math.h>
int main()
{
    int i;
    int a[10];
    for(i=0;i<=10;i++)
    {
        a[i]=rand()%11;
    }
        for(i=0;i<=10;i++)
    {
        printf("%d ",a[i]);
    }
}
