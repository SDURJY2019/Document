#include<stdio.h>
int main()
{
    void heneita(int i,char a,char b,char c);
    int i;
    scanf("%d",&i);
    char a='A';
    char b='B';
    char c='C';
    heneita(i,a,b,c);
}
void heneita(int i,char a,char b,char c)
{
    void move(char a,char b);
    if(i==1)
        move(a,c);
    else
    {
        heneita(i-1,a,c,b);
        move(a,c);
        heneita(i-1,b,a,c);
    }
}
void move(char a,char b)
{
    printf("%c->%c\n",a,b);
}
