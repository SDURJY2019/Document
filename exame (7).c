#include<stdio.h>
int main()
{
    float grade[5][3]={0};
    char name[5][20]={0};
    float max[3]={0};
    float min[3];
    float sum[5]={0};
    float average[5]={0};
    char tempname[20]={0};
    int i,j;
    for(i=0;i<5;i++)
        {
            printf("�������%d��ͬѧ����������һ�ſΣ��ڶ��ſΣ������ſγɼ�\n",i+1);
            scanf("%s%f%f%f",name+i,*(grade+i)+0,*(grade+i)+1,*(grade+i)+2);
            sum[i]=(*(*(grade+i)+0))+(*(*(grade+i)+1))+(*(*(grade+i)+2));
            min[0]=*(*(grade+0)+0);
            min[1]=*(*(grade+0)+1);
            min[2]=*(*(grade+0)+2);
            if(*(*(grade+i)+0)>*(max+0))
                *(max+0)=*(*(grade+i)+0);
            if(*(*(grade+i)+1)>*(max+1))
                *(max+1)=*(*(grade+i)+1);
            if(*(*(grade+i)+2)>*(max+2))
                *(max+2)=*(*(grade+i)+2);
            if(*(*(grade+i)+0)<*(min+0))
                *(min+0)=*(*(grade+i)+0);
            if(*(*(grade+i)+1)<*(min+1))
                *(min+1)=*(*(grade+i)+1);
            if(*(*(grade+i)+2)<*(min+2))
                *(min+2)=*(*(grade+i)+2);
        }
    for(j=0;j<5;j++)
        for(i=0;i<4;i++)
    {
        if(*(sum+i+1)>*(sum+i))
        {
            float tempgrade=0;
            tempgrade=*(sum+i);
            *(sum+i)=*(sum+i+1);
            *(sum+i+1)=tempgrade;
            for(int k=0;k<20;k++)
            tempname[k]=name[i][k];
            for(int k=0;k<20;k++)
            name[i][k]=name[i+1][k];
            for(int k=0;k<20;k++)
            name[i+1][k]=tempname[k];
        }
    }
    for(i=0;i<3;i++)
    printf("��%d�ſ���߷�Ϊ%f ��ͷ�Ϊ%f\n",i+1,*(max+i),*(min+i));
    for(i=0;i<5;i++)
    {
        average[i]=*(sum+i)/3;
        printf("��%d��\t����%s\t�ܳɼ�%f\tƽ���ɼ�%f\n",i+1,*(name+i),*(sum+i),*(average+i));
    }
}
