#include <iostream>
using namespace std;
int dp[11];
int calc(int n);
int main(){
	int T;
	int buf[1000];
	cin >> T;

	for(int i=0;i<T;i++)
		cin >> buf[i];

	for(int i=0;buf[i]!=0;i++)
		cout << calc(buf[i]) << endl;
		
	return 0;
}
int calc(int n){
	if(n==1)
		return 1;
	if(n==2)
		return 2;
	if(n==3)
		return 4;
	else if(dp[n]>0)
		return dp[n];
	else if(n-3>0)
		return dp[n]=calc(n-1)+calc(n-2)+calc(n-3);
}
