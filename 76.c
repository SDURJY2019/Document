#include<stdio.h>
#include<string.h>
int main()
{
    char a;
    while(1)
    {
    scanf("%c",&a);
    if(a=='A')
    {
       while(1)
         {
        printf("%c",a);
        break;
         }
    }
    else {printf("%d###################%c",a,a);}
    }
}
