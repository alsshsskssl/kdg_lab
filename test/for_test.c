#include <stdio.h>
void main(){
	int i;

	for(i=0;i<10;printf("%d",bug(i++))){
		//printf("test\n");
	}

	printf("%d\n",i);
}
int bug(int a){
	int j=0;
	for(j=0;j<10;j++)
		printf("test\n");
	
	return 0;
}
