#include<stdio.h>
int main ()
{
    int a,b,c;
    int n,n1;
    int step;
    n=3;
    n1=0;
    a=3;
    b=c=0;
    while(1)
{
    if(a>b)
    {
        printf("A->C");
        a--;
        c++;
        printf("A->B");
        a--;
        b++;
        printf("C->B");
        c--;
        b++;
    }
    if(b>a)
    {
        printf("B->A");
        printf;
    }
    if(c==3) break;
}
}
