#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
int shell_code(){
	setreuid(0,0);
	setregid(0,0);
	system("/bin/sh");
	
	return 0;
}
int main(int argc, char **argv){
	char buffer[12];	//12바이트 버퍼
	memset(buffer,0x00,sizeof(buffer));	//버퍼를 0으로 초기화

	if(argc!=2){
		printf("Usage : buf_over data\n");
		exit(-1);
	}
	strcpy(buffer,argv[1]);

	printf("sizeof %d \n",sizeof(argv[1]));
	printf("strlen %d \n",sizeof(strlen(argv[1])));

	return 0;
}
