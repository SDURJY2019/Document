#include<stdio.h>
int main()
{
    int i;
    void heneita(char a,char b,char c,int n);
    char a='A';
    char b='B';
    char c='C';
    scanf("%d",&i);
    heneita(a,b,c,i);
    exit(1);
}
void heneita(char a,char b,char c,int n)
{
    void move(char a,char b);
    if(n==1)
        move(a,c);
    else {
          heneita(a,c,b,n-1);
          move(a,b);
          heneita(b,a,c,n-1);
          }
}
void move(char a,char b)
{
    printf("%c->%c\n",a,b);
}
