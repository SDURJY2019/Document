#include<stdio.h>
int main()
{
	int a,b,c,d,e,i;
    i=1;
	printf("������������");
	scanf("%d %d",a,b);
	if(a>b) c=a;
	else c=b;
	while(i<=5)	
	 {
	 	printf("������һ����");
		 scanf("%d",d);
		 if(d>c) e=d;
		 else e=c; 
	 }
	 printf("���ֵΪ%f",e);
	 return 0;
}
