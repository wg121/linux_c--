#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

const int MAXSIZE = 16;

int main(){
	int fd = -1;
	//char endl[] = "\n"; 
	char buf[MAXSIZE];	
	//
	fd = open ("txt", O_RDONLY);
	
	//
	//fd = open("txt", O_WRONLY | O_APPEND | O_CREAT, 0644);
	if(-1 == fd){
		perror("open");
		return 1;
	}

	int ret = -1;

	memset(buf, 0, MAXSIZE);
	ret = read(fd,buf,MAXSIZE);
	if(-1 == ret){
		perror("read");
		return 1;
	}

	printf("the content is :%s",buf);

	close(fd);
	return 0;
}
