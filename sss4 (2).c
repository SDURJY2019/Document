#include <unistd.h>          //chdir()
#include <sys/stat.h>        //mkdir()
#include <sys/types.h>       //mkdir()
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>           //perror()

int main(void)
{
    if((chdir("/"))<0)
       {
           perror("chdir");
           exit(1);
        }
    if((mkdir("/testdir",666))<0)
       {
           perror("mkdir");
           exit(1);
        }
     //ÄãµÄ´úÂë
}
