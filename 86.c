#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
int main()
{
    printf("请输入一个只包含加减乘除的整数的算式");
    char a[200];
    int c[100];
    int i,j,k=0;
    float sum;
    int temp;
    scanf("%s",a);
    char b[strlen(a)];
    for(i=0;i<strlen(a);i++)
    {
        b[i]=a[i];
    }
    for(i=0;i<strlen(a);i++)
    {
        if(isdigit)
        {
        if(a[i]=='0')
        {
            temp=temp+0*pow(10,j);
        }
        if(a[i]=='1')
        {
            temp=temp+1*pow(10,j);
        }
        if(a[i]=='2')
        {
            temp=temp+2*pow(10,j);
        }
        if(a[i]=='3')
        {
            temp=temp+3*pow(10,j);
        }
        if(a[i]=='4')
        {
            temp=temp+4*pow(10,j);
        }
        if(a[i]=='5')
        {
            temp=temp+5*pow(10,j);
        }
        if(a[i]=='6')
        {
            temp=temp+6*pow(10,j);
        }
        if(a[i]=='7')
        {
            temp=temp+7*pow(10,j);
        }
        if(a[i]=='8')
        {
            temp=temp+8*pow(10,j);
        }
        if(a[i]=='9')
        {
            temp=temp+9*pow(10,j);
        }
        j++;
        }
        else
            {
            j=0;
            c[k]=temp;
            k++;
            temp=0;
            printf("%d",temp);
            if(a[i]=='+');
            if(a[i]=='-');
            if(a[i]=='*');
            if(a[i]=='/');
            }
    }
}
