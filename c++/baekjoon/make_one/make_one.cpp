// if you input 1000000 you get segmentation fault..

#include <iostream>
//#include <algorithm>
using namespace std;
int calc(int n);
int dp[1000001];
int main(){
	int N;
	cin >> N;
	
	cout << calc(N) << endl;

	return 0;
}
int calc(int n){
	if(n==1)
		return 0;
	if(dp[n]>1)
		return dp[n];
	
	dp[n]=calc(n-1)+1;
	if(n%2==0){
		int temp = calc(n/2)+1;
		if(dp[n]>temp)
			dp[n]=temp;
	}
	else if(n%3==0){
		int temp = calc(n/3)+1;
		if(dp[n]>temp)
			dp[n]=temp;
	}
		//dp[n]=min(dp[n],calc(n/3)+1);
	
	return dp[n];
}
