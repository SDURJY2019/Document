#include<stdio.h>
int main()
{
    char a[50];
    char b[20]={0};
    char *p;
    int i,j,k;
    gets(a);
    p=a;
    for(i=0,k=0;i<=19;i++)
    {
    switch(*(p+i))
        {
            case'1':{b[k]='1';k++;break;}
            case'2':{b[k]='2';k++;break;}
            case'3':{b[k]='3';k++;break;}
            case'4':{b[k]='4';k++;break;}
            case'5':{b[k]='5';k++;break;}
            case'6':{b[k]='6';k++;break;}
            case'7':{b[k]='7';k++;break;}
            case'8':{b[k]='8';k++;break;}
            case'9':{b[k]='9';k++;break;}
            case'0':{b[k]='0';k++;break;}
        }
    }
    puts(b);
}
