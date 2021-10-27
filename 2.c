#include<stdio.h>
int main()
{
    int i,a;
    a=0;
    for(i=1;i<=100;i=i+1)
    {
        a+=i;
        printf(" %d %d \t",a,i);
    }
}
