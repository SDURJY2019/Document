#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char a[]={"1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30"};
    while(1)
    {free(&a[10]);
    free(&a[20]);
    free(a);
    int i;
    puts(a);
    for(i=0;i<strlen(a);i++)
    printf("%c",a[i]);
    printf("\n");}
}
