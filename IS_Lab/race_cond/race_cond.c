//악의적인 파일입니다~

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

void main(int argc,char **argv){
	FILE *fp;
	if(argc!=3){
		fprintf(stderr,"Usage : %s file_name data\n",argv[0]);
	}

	/*내부처리 작업 가정*/
	sleep(10);

	fp=fopen(argv[1],"w");
	if(fp==NULL){
		fprintf(stderr,"%s open failed!!!",argv[0]);
		exit(-1);
	}

	/*해당 파일에 데이터 쓰기*/
	fprintf(fp,"%s\n",argv[2]);
	fclose(fp);
	printf("SUCCESS!!!\n");
}
