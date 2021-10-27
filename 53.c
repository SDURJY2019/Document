#include<stdio.h>
struct student
{
    char name[20];
    char xuehao[20];
    float chengji[3];
    float sum;
};
int main()
{
    int i;
    struct student d[4]={0};
    FILE*fp;
    fp=fopen("C:\\Users\\86133\\Desktop\\新建文件夹\\1.data","rb+");
    for(i=0;i<=3;i++)
    fread(&d[i],sizeof(struct student),1,fp);
    for(i=0;i<=3;i++)
    {
        printf("%s   %s    %f    %f    %f\n",d[i].xuehao,d[i].name,d[i].chengji[0],d[i].chengji[1],d[i].chengji[2]);
    }
}
