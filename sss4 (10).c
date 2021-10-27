#include <stdio.h>
#include <string.h>
#include <dirent.h>

int main(int argc, char **argv){
    struct dirent *ptr, *ptr1;
    DIR *dir, *dir1;
    dir = opendir("./lfw_arcface_crop/");
    // printf("lists of files:\n");
    int num = 0;
    while((ptr = readdir(dir)) != NULL){
        if(ptr->d_name[0] == '.')
            continue;

        //search subdirectory
        char sub_dir[50] = "lfw_arcface_crop/";
        strcat(sub_dir, ptr->d_name);
        printf("%s\n", sub_dir);
        dir1 = opendir(sub_dir);
        while((ptr1 = readdir(dir1)) != NULL){
            if(ptr1->d_name[0] == '.')
                continue;
            printf("%s   %d\n", ptr1->d_name, num);
            ++num;
            //just choose one img of each sub_dir
            // break;
        }
        printf("\n");
        closedir(dir1);

    }
    printf("the num of imgs in all subdir is:%d\n", num);
    closedir(dir);
    return 0;
}
