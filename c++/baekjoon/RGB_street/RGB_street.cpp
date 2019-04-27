// this code is incomplete!!
#include <iostream>
#include <algorithm>
using namespace std;

int calc(int rgb,int **p);
int arr[1000][3];
int main(){
	int N;
	cin >> N;

	calc(N,0);
	for(int i=0;i<N;i++)
		cin >> arr[i][0] >> arr[i][1] >> arr[i][2];

	return 0;
}

int calc(int N,int home_num){
	if(N==1)
		return min(arr[home_num][0],arr[home_num][1],arr[home_num][2]);

	if(N>1)
		return min(calc(N-1,home_num+1)+calc(1,home_num);
	
	return 0;
}
