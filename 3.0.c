#include<stdio.h>
#include<string.h>
int main()
{
    char a;
    printf("������һ����ĸ");
    scanf("%c",&a);
    if(islower(a)==2)
        {
            a=toupper(a);
            printf("����ĸ�Ĵ�д��ĸΪ%c",a);
            return 0;
            }
    else
    if(isupper(a)==1)
        {
            a=tolower(a);
            printf("����ĸ��Сд��ĸΪ%c",a);
            return 0;
            }
}
