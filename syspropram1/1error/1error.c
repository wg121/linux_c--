#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
void main(){
	int fd = -1;

	fd = open("txt", O_RDONLY);
	if(-1 == fd){
		printf("errno:%d\n",errno);
		printf("open:%s\n",strerror(errno));
		perror("open");
		printf("\n");
		return;
	}

	close(fd);
}
