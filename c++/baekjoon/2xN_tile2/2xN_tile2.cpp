//if I does't return %10007, this code is overflow...
#include <iostream>
using namespace std;
int dp[10000];
int calc(int n);
int main(){
	int N;
	cin >> N;

	cout << calc(N) << endl;

	return 0;
}
int calc(int n){
	if(n<=1)
		return 1;
	else if(dp[n] > 0)
		return dp[n];
	else
		return dp[n] = 2*calc(n-2)+calc(n-1);
}
