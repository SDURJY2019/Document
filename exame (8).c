#include<stdio.h>
#include<string.h>
int main()
{
    char a[200]={0};
    printf("������һ���ַ���\n");
    gets(a);
    int i,word=1;
    for(i=0;i<=strlen(a);i++)
        if(a[i]==' ') word++;
    printf("�ַ����еĵ�����Ϊ��%d\n",word);
    char b[strlen(a)];
    for(i=0;i<=strlen(a);i++)
        b[i]=a[i]+1;
    printf("���ܺ���ַ���Ϊ��\n");
    puts(b);
}
