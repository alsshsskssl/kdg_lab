#include <stdio.h>
#include <stdlib.h>
void main(){
	int size;
	int n,m;

	scanf("%d",&size);
	
	int **po = (int**)malloc(size*sizeof(int*));

	for(int i=0;i<size;i++){
		po[i] = malloc(size*sizeof(int));
	}

	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			po[i][j]=i+j;
		}
	}

	
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			printf("%d",po[i][j]);
		}
		printf("\n");
	}
	
}
