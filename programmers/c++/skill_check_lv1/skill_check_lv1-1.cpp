#include <string>
#include <vector>
#include <iostream>

using namespace std;
string solution(string s){
	int cnt = 0;
	for(int i=0;i<s.length();i++){
		if(s[i]==' ')
			cnt = 1;
		if(cnt%2==0){	//짝수번째
			s[i] = toupper(s[i]);
			cnt++;
		}
		else{
			s[i] = tolower(s[i]);
			cnt++;
		}
	}
	cout << cnt << endl;
	return s;
}
int main(){
	cout << solution("try hello world") << endl;
	return 0;
}
