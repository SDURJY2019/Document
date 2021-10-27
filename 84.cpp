#include<stdio.h>
int main()
{
	double d,a,b,c,i;
	i=1;
	c=1;
	d=1;
	while (i<=100000)
	{
		d=d*(-1); 
		i=i+1;
		a=1/i;
		b=a*d;
		c=c+b;
	}
	printf("%f",c);
}
