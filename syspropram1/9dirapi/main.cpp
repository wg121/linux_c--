#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <dirent.h>

#define SIZE 64

int main(){
    int ret = -1;
    //getcwd
    char buf[SIZE];
    memset(buf, 0, strlen(buf));
    if(NULL == getcwd(buf, SIZE)){
        perror("getcwd");
        return 1;
    }
    printf("getcwd : %s\n",buf);

    DIR *dir = nullptr;
    dir = opendir("txt");
    if(nullptr == dir){
        perror("opendir");
        return 1;
    }
    printf("opendir is successful\n");

    struct dirent *d;
    d = readdir(dir);
    printf("file name: %s\n",d->d_name);
    printf("d_ino: %ld\n",d->d_ino);

    ret = closedir(dir);
    if(-1 == ret){
        perror("closedir");
        return 1;
    }
    return 0;
}