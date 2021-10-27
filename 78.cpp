#include<stdio.h>
int main()
{
	int a,b,c;
	int max(int x,int y);
	scanf("请输入两个数%d,%d",&a,&b);
	c=max(a,b);
	printf("最大的数为%d",c);
	return 0;
 } 
 int max(int x,int y)
 {
 	int z;
 	if(x>y)z=x;
 	else z=y;
 	return(z);
 }
