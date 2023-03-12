#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void main(){
	int fd = -1;
	//char endl[] = "\n"; 
	char buf[] = "hello std : 0  \n";	
	//
	//fd = open ("txt", O_WRONLY | O_CREAT, 0644);
	
	//
	fd = open("txt", O_WRONLY | O_APPEND | O_CREAT, 0644);
	if(-1 == fd){
		perror("open");
		return;
	}

	int ret = -1;

	for(int i = 0; i < 20; ++i){
		(*(buf + 12))++;
		//strcat(buf,endl);
		ret = write(fd, buf, strlen(buf));
		if(-1 == ret){
			perror("write");
			return;
		}
		
		printf("writed : %d bytes\n",ret);
	}
	//printf("writed : %ld bytes\n",strlen(buf));

	close(fd);
}
