#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>
#include <fstream>
using namespace std;
int main(){
	FILE *in;
	char ch;
	string S = "";
	in=fopen("test.kdg","rb");
	int slash_cnt=0;
	while(!feof(in)){
		if(slash_cnt==2){
			break;
		}
		ch=fgetc(in);
		if(slash_cnt==1 && ch!='/'){
			S+='/';
			slash_cnt = 0;
		}
		if(slash_cnt==0 && ch!='/'){
			S+=ch;
		}
		if(ch=='/'){
			slash_cnt++;
		}
	}
	
	
	//cout << ftell(in) << endl;
	
	cout << S << endl;
	return 0;
}
