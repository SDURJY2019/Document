#include<stdio.h>
int main()
{
      float jia(float x,float y);
      float jian(float x,float y);
      float cheng(float x,float y);
      float chu(float x,float y);
      float *pandaun(char x);
      float (*p)(float,float);
      float b,sum;
      char a;
      sum=0;
      printf("������һ����");
      scanf("%f",&b);
      sum+=b;
      while(1)
      {
          printf("�������������");
          scanf(" %c",&a);
          if(a=='=')
          {
           printf("����Ľ��Ϊ%f",sum);
           break;
          }
          printf("������һ����");
          scanf("%f",&b);
          p=pandaun(a);
          sum=(*p)(sum,b);

      }
}
float jia(float x,float y)
{
    float z;
    z=x+y;
    return z;
}
float jian(float x,float y)
{
    float z;
    z=x-y;
    return z;
}
float cheng(float x,float y)
{
    float z;
    z=x*y;
    return z;
}
float chu(float x,float y)
{
    float z;
    if(y==0)
    {
    printf("��������Ϊ0�������������������\n");
    y=1;
    }
    z=x/y;
    return z;
}
float *pandaun(char x)
{
    float *p;
    p=NULL;
    float jia(float x,float y);
    float jian(float x,float y);
    float cheng(float x,float y);
    float chu(float x,float y);
    switch(x)
        {
            case'+':p=jia;break;
            case'-':p=jian;break;
            case'*':p=cheng;break;
            case'/':p=chu;break;
        }
        return (p);
        p=NULL;
}
