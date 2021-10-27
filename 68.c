#include<stdlib.h>
#include<stdio.h>
struct student
{
    int *head;
    int *next;
    int num;
    char name[20];
};
int main()
{
    int *head,*p;
    int a,b;
    struct student stu1,stu2;
    b=0;
    a=1;
    stu1.head=&a;
    stu1.next=&stu2.head;
    stu2.next=&b;
    p=&a;
    while(*(p)!=0)
    {
        printf("%d ",p->num);
        p=stu1.next;
    }
}
