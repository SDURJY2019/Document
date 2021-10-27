#include<stdio.h>
int main()
{
	int a,b,c,d,e,i;
    i=1;
	printf("请输入两个数");
	scanf("%d %d",a,b);
	if(a>b) c=a;
	else c=b;
	while(i<=5)	
	 {
	 	printf("请输入一个数");
		 scanf("%d",d);
		 if(d>c) e=d;
		 else e=c; 
	 }
	 printf("最大值为%f",e);
	 return 0;
}
