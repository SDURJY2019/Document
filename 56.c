#include <stdio.h>
void main()
{
    FILE *fp;
    int i,j ;
    float da[4][3]={0} ;
    fp=fopen("C:\\Users\\86133\\Desktop\\test.csv","r");
    fseek(fp,1L,SEEK_SET);   // 从文件第二行开始读取
    for(i =0;i<4;i++)
        for(j =0;j<3;j++)
		{
			fscanf(fp,"%f",&da[i][j]);
			fseek(fp,1L,SEEK_CUR);
		}

for(i =0;i<4;i++)
printf("%f\t%f\t\n",da[i][1],da[i][2]);
}
