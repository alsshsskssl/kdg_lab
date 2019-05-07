#include <stdio.h>

int main(int argc,char **argv){
	int age = 24;
	char *name = "donggeun";
	int nbytes = 0;

	printf("name : %s, age : %d%n\n",name,age,&nbytes);
	printf("nbytes : %d\n",nbytes);

	return 0;
}
