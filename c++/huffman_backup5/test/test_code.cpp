#include <iostream>
using namespace std;
int main(){
	string S = "";
	char ch = 1;
	FILE* fp = fopen("text","a");
	
	for(int i=0;i<49;i--){
		ch--;
		S+=ch;
		const char* temp;
		temp = S.c_str();
		fputs(temp,fp);
	}

	
	return 0;
}
