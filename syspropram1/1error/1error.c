#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <errno.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

//由错误编号（error）打印出错出错信息的两种方式
//1.strerror()
//2.perror()
int main(){
	int fd = -1;

	fd = open("txt", O_RDONLY);
	if(-1 == fd){
		printf("errno:%d\n",errno);
		printf("open:%s\n",strerror(errno));
		perror("open");
		printf("\n");
		return 1;
	}

	close(fd);
	return 0;
}
