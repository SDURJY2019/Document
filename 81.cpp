#include<stdio.h>
int main() 
{
	double a,b,c;
	a=1;
	b=1;
	c=0;
	while(a<=100)
	{
		a=a+1;
		b=1/a;
		c=c+b; 
	} 
	printf("c=%f",c);
}
