#include <iostream>
#include <algorithm>
using namespace std;
int calc(int n);
int main(){
	int N;
	cin >> N;
	
	cout << calc(N) << endl;

	return 0;
}
int calc(int n){
	if(n==1)
		return 0;
	if(n>1){
		if(n%3==0&&n%2==0)
			return min(calc(n/3)+1,calc(n/2)+1);
		else if(n%3==0&&n%2!=0)
			return min(calc(n/3)+1,calc(n-1)+1);
		else if(n%3!=0&&n%2==0)
			return min(calc(n/2)+1,calc(n-1)+1);
		else
			return calc(n-1)+1;
	}

	return 0;
}
