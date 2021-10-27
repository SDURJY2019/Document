#include<stdio.h>
#include<string.h>
int main()
{
    char a;
    printf("请输入一个小写或大写的英文字母");
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
