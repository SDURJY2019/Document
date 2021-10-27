#include<stdio.h>
void readExcel()
{
	char a[4]={0};
	int b[4]={0};
	int i;
	FILE*fp=NULL;
	fp=fopen("C:\\Users\\86133\\Desktop\\test.csv","r");
	for(i=0;i<4;i++)
    fscanf(fp,"%c %d",a[i],b[i]) ;
	fclose(fp);
	printf("%c %d",a[1],b[1]);
}
void main()
{
	readExcel();
}
