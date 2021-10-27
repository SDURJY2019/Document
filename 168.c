#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    void die(char x[]);
    char a[20]={"i love my family"};
    die(a);
    for(i=0;i<=15;i++) printf("%c",a[i]);
}
void die(char x[])
{
    int i,t;
    for(i=0;i<=15;i++)
    {
        x[i]=x[i]+1;
    }
}
