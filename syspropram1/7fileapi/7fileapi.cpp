#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

//checkout about file api
int main(){
	int ret = -1;
	//access
	ret = access("Makefile",R_OK);
	if(-1 == ret){
		printf("Makefile has not R\n");
	}
	else if(0 == ret){
		printf("Makefile has R\n");
	}
	//chmod
	ret = chmod("Makefile", 0744);
	if(-1 == ret){
		printf("chmod fail\n");
	}
	else if(0 == ret){
		printf("chmod success\n");
	}
	//truncate

	//link

	//symlink

	//...


	return 0;
}
