#include<stdio.h>
#include<string.h>
int main()
{
    char a;
    printf("������һ��Сд���д��Ӣ����ĸ");
    scanf(" %c",&a);
    if(isupper(a))
    {
        a=tolower(a);
        printf("%c",a);
    }
    else
        if(islower(a))
    {
        a=toupper(a);
        printf("%c",a);
    }
}
