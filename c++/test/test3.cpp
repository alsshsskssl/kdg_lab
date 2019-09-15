#include <iostream>
#include <string>
#include <utility>
#include <algorithm>
using namespace std;
int main(){
	char ch = 10;
	string S = "";
	while(ch>1){
		if(ch%2==1){
			ch--;
			ch/=2;
			S+='1';
			cout << (int)ch << endl;
		}else{
			ch/=2;
			S+='0';
			cout << (int)ch << endl;
		}
	}
	if(ch==1)
		S+='1';
	else
		S+='0';
	while(S.size()<7){
		S+='0';
	}
	reverse(S.begin(),S.end());
	cout << S << endl;

	return 0;
}
