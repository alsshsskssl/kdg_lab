#include <iostream>
#include <stack>
#include <string>
#include <stdio.h>

using namespace std;

int main(){
	stack<string> stack;
	string str;
	cin >> str;
	
	
	for(int i=0;i<str.length();i++){
		if(str[i]==40){
			stack.push("(");
		}
		else if(stack.empty()==0){
			stack.pop();
		}
	}
	if(stack.empty()){
		cout << "VPS" << endl;
	}
	else{
		cout << "NO VPS" << endl;
	}
	
	return 0;
}
