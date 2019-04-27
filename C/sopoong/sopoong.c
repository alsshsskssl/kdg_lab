#include <stdio.h>
void main(){
	int i,j,k;
	int test;
	int t[50];	//save result
	int n;	//student_num
	int stu_inf[10][10]={0,};
	int temp1,temp2;
	int m;	//friend_cnt
	int buf;
	scanf("%d",&test);
	printf("debug_0\n");
	for(i=0;i<test;i++){
		scanf("%d%d",&n,&m);
		printf("debug_1\n");
		for(j=0;j<m;j++){
			scanf("%d%d",&temp1,&temp2);
			stu_inf[temp1][temp2]=1;
			stu_inf[temp2][temp1]=1;
			printf("debug_%d\n",j+2);
		}
	}
	
	for(i=0;i<n;i++){	//print matrix
		for(j=0;j<n;j++){
			printf("%d ",stu_inf[i][j]);
		}
		printf("\n");
	}
	
	//printf("%d%d",n,m);	//debug
	
}
