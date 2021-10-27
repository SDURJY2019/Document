#include <stdio.h>
#include <process.h>
#include <dir.h>

int main(void)
{
int status;
system("cls");
status = mkdir("新建文件夹"); /*这是在程序所在当前文件夹下创建book*/
(!status) ? (printf("Directory created\n")) :
(printf("Unable to create directory\n"));
system("pause");
system("dir"); /*显示创建后当前文件夹下的文件信息*/
system("pause");

status = rmdir("book"); /*删除创建的文件夹book*/
(!status) ? (printf("Directory deleted\n")) :
(perror("Unable to delete directory"));
system("pause");
return 0;
}
