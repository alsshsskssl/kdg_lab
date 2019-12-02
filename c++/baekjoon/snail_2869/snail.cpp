#include <iostream>
using namespace std;
int calc(int A,int B,int T);
int state;
int day=1;
int main(){
	int A,B,T;
	cin >> A >> B >> T;
	
	cout << calc(A,B,T) << endl;
	
	return 0;
}
int calc(int A,int B,int T){
	state += A;
	
	if(state>=T){
		return day;
	}else{
		state -= B;
		day++;
		return calc(A,B,T);
	}
	return -1;
}
