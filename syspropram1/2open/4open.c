#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void main(){
	int fd = -1;

	//
	//fd = open("txt", O_RDONLY);
	
	//
	//fd = open ("txt", O_WRONLY | O_CREAT, 0644);
	
	//
	//fd = open("txt", O_WRONLY | O_CREAT | O_EXCL, 0644); 
	
	//
	fd = open("txt", O_WRONLY | O_TRUNC);
	if(-1 == fd){
		printf("errno:%d\n",errno);
		printf("open:%s\n",strerror(errno));
		perror("open");
		printf("\n");
		return;
	}

	printf("fd:%d\n",fd);

	close(fd);
}
