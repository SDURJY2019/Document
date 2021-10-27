#include <sys/stat.h>  /* mkdir() */
#include <sys/types.h>  /* mkdir() */
#include <stdio.h>

int main(void)
{
char *ptr;

  printf("input your dir name:\n");
scanf("%s",ptr);
mkdir(ptr,0);

}
