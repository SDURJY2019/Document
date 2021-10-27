#include<stdio.h>
int main()
{
    int x,y,z;
    int j,k;
    for(x=1;x<=100;x++)
        for(y=1;y<=100;y++)
        for(z=0;z<=300;z+=3)
        {
            j=3*x+2*y+(1.0/3.0)*z;
            k=x+y+3*z;
            if(j==100&&k==100)
                printf("x=%d y=%d z=%d\n",x,y,z);
        }
}
