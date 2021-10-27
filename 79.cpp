#include<stdio.h>
int main()
{
	int max(int x,int y);
	int a,b,c,d,e;
	printf("请输入三个数a b c\n");
	scanf("%d %d %d",&a,&b,&c);
	d=max(a,b);
	e=max(d,c);
	printf("三个数中最大值为%d",e);
	return 0; 
 } 
 int max(int x,int y)
 {
 	int z;
 	if(x>y)z=x;
 	else z=y;
 	return(z);
 }
 
