#include<stdio.h>
#include<math.h>
int main()
{
    int text(int x[]);
    void swap(int x[],int y[],int x1,int y1);
    int i,a1,b1,c1,a2,b2,c2;
    int a[4]={3,2,1,0};
    int b[4]={0};
    int c[4]={0};
    while(1)
    {
        a1=rand()%4;
        b1=rand()%4;
        c1=rand()%4;
        if(a1==1)
        {
            printf("A->B\n");
            swap(a,b,text(a),text(b));
        }
        if(a1==2)
        {
            printf("A->C\n");
            swap(a,c,text(a),text(c));
        }
        if(a1==3)
        {
            printf("\n");
        }
        if(b1==1)
        {
            printf("B->A\n");
            swap(b,a,text(b),text(a));
        }
        if(b1==2)
        {
            printf("B->C\n");
            swap(b,c,text(b),text(c));
        }
        if(b1==3)
        {
            printf("\n");
        }
        if(c1==1)
        {
            printf("C->A\n");
            swap(c,a,text(c),text(a));
        }
        if(c1==2)
        {
            printf("C->B\n");
            swap(c,b,text(c),text(b));
        }
        if(c1==3)
        {
            printf("\n");
        }
        if(c[0]==1&&c[2]==3||c[2]==1&&c[0]==3) break;
        printf("\n");
        for(i=0;i<=3;i++)
        {
            printf("%d ",c[i]);
        }
        printf("\n");
        for(i=0;i<=3;i++)
        {
             printf("%d ",b[i]);
        }
        printf("\n");
        for(i=0;i<=3;i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n");
    }
}
int text(int x[])
{
    int i;
    for(i=0;i<=2;i++)
    {
        if(x[i]!=0) return i;
    }
    return 0;
}
void swap(int x[],int y[],int x1,int y1)
{
    y[y1+1]=x[x1];
    x[x1]=0;

}
