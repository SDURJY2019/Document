#include<stdio.h>
int main()
{
    int a=3;int b=4;int c=5;int d=6;
    a=(b++,c++,d++,++a);
    d=d+++d+++d++;
    printf("%d %d %d %d ",a,b,c,d);
}
