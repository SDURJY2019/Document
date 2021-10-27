#include<stdio.h>
int main()
{
    double i,a,b,c,d;
    float t,e,h;
    i=1;
    a=2;
    b=3;
    c=1;
    d=1;
    e=1;
    t=3.1415926535;
    while (i<=80)
    {
      i=i+1;
      c=c*a;
      d=d*b;
      e=e*t;
      h=e/(c+d);
      printf(" %f ",h);
    }
}
