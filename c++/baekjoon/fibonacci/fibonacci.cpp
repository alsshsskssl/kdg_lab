#include <iostream>
using namespace std;
int fibonacci(int n);

int main(){
	int T;
	cin >> T;
	//int *po = new int[T];
	int po[100]={0,};
	for(int i=0;i<T;i++)
		cin >> po[i];

	for(int i=0;i<T;i++){
		if(po[i]==0)
			cout << "1 0" << endl;
		else
			cout << fibonacci(po[i]-1) << " " << fibonacci(po[i]) << endl;
	}
	
	
	return 0;
}

int fibonacci(int n){
	static int memo[100];
	if(memo[n]!=0)
		return memo[n];
	if(n==0)
		return 0;
	if(n==1)
		return 1;	
	return memo[n]=fibonacci(n-1)+fibonacci(n-2);
}
