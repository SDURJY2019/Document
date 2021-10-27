#include<stdio.h>
int main()
{
      int *p;
      int i,b;
      int a[10]={50,60,70,90,80,90,100,110,-20,-40};
      p=a+9;
      b=0;
      for(i=0;i<=9;i++)
      {
          if(*p>=a[i]&&*p>b) b=*p;
          p--;
      }
      printf("%d",b);
}/* *p确实代表拥有该地址的数的数值，但为了保险和确定起见，*p最好加括号*/
