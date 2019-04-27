#include <stdio.h>
#include <stdlib.h>
void main(){
	int size,n;
	int temp1,temp2,temp3;

	scanf("%d %d",&size,&n);
	
	int **po = (int**)malloc(size*sizeof(int*));

	for(int i=0;i<size;i++){
		po[i] = malloc(size*sizeof(int));
	}

	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			po[i][j]=0;
		}
	}
	
	for(int i=0;i<n;i++){
		scanf("%d %d %d",&temp1,&temp2,&temp3);
		po[temp1][temp2]=po[temp2][temp1]=temp3;
	}
	
	for(int i=0;i<size;i++){	//display matrix
		for(int j=0;j<size;j++){
			printf("%d",po[i][j]);
		}
		printf("\n");
	}	
}
