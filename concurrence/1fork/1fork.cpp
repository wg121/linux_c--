#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>

int main(){
    pid_t pid = -1;

    pid = fork();

    printf("hello concurrence\n");
    
    return 0;
}