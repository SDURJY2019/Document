#include<stdio.h>
#include<string.h>
int main()
{
    char a[100]={0};
    printf("������һ���ַ���");
    gets(a);
    char b[strlen(a)];
    int i,words;
    for(i=0;i<strlen(a);i++)
        b[i]=a[i];
    words=1;
    for(i=0;i<100;i++)
        if(*(a+i)==' ')
            words++;
    printf("%d\n",words);
    for(i=0;i<strlen(a);i++)
        b[i]=b[i]+1;
        printf("���ܺ���ַ���Ϊ��");
    puts(b);
    //printf("%s\n",b);
    for(i=0;i<strlen(a);i++)
        b[i]=b[i]-1;
        printf("���ܺ���ַ���Ϊ��");
    puts(b);
    //printf("%s",b);
}
