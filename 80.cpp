#include<stdio.h>
int main()
{
	int max(int x,int y);
	int a,b,c,d,e;
	printf("������������a,b,c\n");
	scanf("%d %d %d",&a,&b,&c);
	d=max(a,b);
	e=max(c,d);
	printf("�������е������Ϊ%d",e);
	return 0;
 } 
 int max(int x,int y)
 {
 	int z;
 	if(x>y) z=x;
 	else z=y;
 	return (z);
  } 
