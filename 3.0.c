#include<stdio.h>
#include<string.h>
int main()
{
    char a;
    printf("请输入一个字母");
    scanf("%c",&a);
    if(islower(a)==2)
        {
            a=toupper(a);
            printf("该字母的大写字母为%c",a);
            return 0;
            }
    else
    if(isupper(a)==1)
        {
            a=tolower(a);
            printf("该字母的小写字母为%c",a);
            return 0;
            }
}
