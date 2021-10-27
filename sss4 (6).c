#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <errno.h>
#include <dirent.h>

int main(int argc, char *argv[])
{
    /*if (argc < 2) {
        fprintf(stdout, "Usage: too few paramters!\n");
        return 0;
    }
*/
    DIR *dp = NULL;

    dp = opendir(argv[1]);
    if (!dp) {
        fprintf(stderr, "opendir: %s\n", strerror(errno));
        return 0;
    }

    struct dirent *dirp;
    while ((dirp = readdir(dp))) {
        if (strcmp(dirp->d_name, ".") == 0 || strcmp(dirp->d_name, "..") == 0)
            continue;
        printf("%s\n", dirp->d_name);
    }
    closedir(dp);

    return 0;
}
