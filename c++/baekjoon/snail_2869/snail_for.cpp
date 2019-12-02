#include <iostream>
using namespace std;
int calc(int A,int B,int T);
int main(){
	int A,B,T;
	int state = 0;
	cin >> A >> B >> T;
	int temp = A-B;
	for(int i=1;;i++){
		if(T-A <= state){
			cout << i << endl;
			break;
		}else{
			state += temp;
		}
	}
	
	return 0;
}
