#include<stdio.h>
#include<string.h>
#include<math.h>
#include<time.h>
int main()
{
time_t rawtime;
struct tm * timeinfo;
time ( &rawtime );
timeinfo = localtime ( &rawtime );
printf ( "The current date/time is: %s", asctime (timeinfo) );
FILE*fp;
fp=fopen("1.txt","w+");
fprintf(fp,"��һ�ν��ɵ��ʱ��Ϊ%s",asctime (timeinfo));
}
