#include <stdio.h>
int main(){
	int A,B,T;
	int state = 0;
	//cin >> A >> B >> T;
	scanf("%d %d %d",&A,&B,&T);
	int temp = A-B;
	for(int i=1;;i++){
		if(T-A <= state){
			//cout << i << endl;
			printf("%d",i);
			break;
		}else{
			state += temp;
		}
	}
	
	return 0;
}
