#include<stdio.h>
#include<string.h>
int main()
{
    char a[200]={0};
    printf("请输入一个字符串\n");
    gets(a);
    int i,word=1;
    for(i=0;i<=strlen(a);i++)
        if(a[i]==' ') word++;
    printf("字符串中的单词数为：%d\n",word);
    char b[strlen(a)];
    for(i=0;i<=strlen(a);i++)
        b[i]=a[i]+1;
    printf("加密后的字符串为：\n");
    puts(b);
}
