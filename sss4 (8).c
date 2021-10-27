#include <stdio.h>
  #include <stdlib.h>
  #include <string.h>
  #include <dirent.h>
  #include <unistd.h>
  struct dirent
{
   long d_ino; /* inode number �����ڵ�� */
   off_t d_off; /* offset to this dirent ��Ŀ¼�ļ��е�ƫ�� */
   unsigned short d_reclen; /* length of this d_name �ļ����� */
   unsigned char d_type; /* the type of d_name �ļ����� */
   char d_name [NAME_MAX+1]; /* file name (null-terminated) �ļ������255�ַ� */
}
  int readFileList(char *basePath)
  {
      DIR *dir;
      struct dirent *ptr;
     char base[1000];

     if ((dir=opendir(basePath)) == NULL)
     {
         perror("Open dir error...");
         exit(0);
     }

     while ((ptr=readdir(dir)) != NULL)
     {
         if(strcmp(ptr->d_name,".")==0|| strcmp(ptr->d_name,"..")==0)    ///current dir OR parrent dir
             continue;
         else if(ptr->d_type ==8 )    ///file
             printf("d_name:%s/%s\n",basePath,ptr->d_name);
         else if(ptr->d_type ==10 )    ///link file
             printf("d_name:%s/%s\n",basePath,ptr->d_name);
         else if(ptr->d_type ==4 )    ///dir
         {
             memset(base,'\0',sizeof(base));
             strcpy(base,basePath);
             strcat(base,"/");
             strcat(base,ptr->d_name);
             readFileList(base);
         }
     }
     closedir(dir);
     return 1;
 }

 int main(void)
 {
     DIR *dir;
     char basePath[1000];

     ///get the current absoulte path
     memset(basePath,'\0',sizeof(basePath));
     getcwd(basePath,999 );
     printf("the current dir is : %s\n",basePath);

     ///get the file list
     memset(basePath,'\0',sizeof(basePath));
     strcpy(basePath,"./XL");
     readFileList(basePath);
     return 0 ;
 }
