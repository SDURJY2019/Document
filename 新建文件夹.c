#include <stdio.h>
#include <process.h>
#include <dir.h>

int main(void)
{
int status;
system("cls");
status = mkdir("�½��ļ���"); /*�����ڳ������ڵ�ǰ�ļ����´���book*/
(!status) ? (printf("Directory created\n")) :
(printf("Unable to create directory\n"));
system("pause");
system("dir"); /*��ʾ������ǰ�ļ����µ��ļ���Ϣ*/
system("pause");

status = rmdir("book"); /*ɾ���������ļ���book*/
(!status) ? (printf("Directory deleted\n")) :
(perror("Unable to delete directory"));
system("pause");
return 0;
}
