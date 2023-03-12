#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int main(){
	int fd = -1;
	int ret = -1;
	off_t off = -1;
	//打开文件
	fd = open("txt", O_WRONLY | O_CREAT, 0644);
	if(-1 == fd){
		perror("open");
		return 1;
	}
	//申请数组，清空，拷贝赋值
	char buf[10]; 
	memset(buf, 0 , strlen(buf));
	strcpy(buf, "hello");
	ret = write(fd, buf, strlen(buf));
	if(-1 == ret){
		perror("write");
		return 1;
	}
	//偏移文件的偏移量，到开头
	off = lseek(fd, 0, SEEK_SET);
	if(-1 == off){
		perror("lseek");
	}
	//重新写数据
	memset(buf, 0, strlen(buf));
	strcpy(buf, "i love uu");
	ret = write(fd, buf, strlen(buf));
	if(-1 == ret){
		perror("write");
		return 1;
	}
	//关闭文件
	close(fd);

	return 0;
}
