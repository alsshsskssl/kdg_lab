#include <iostream>
#include <string>
using namespace std;
class Example{
private:
	string* color;
public:
	Example(){
		color = new string("red");
	}

	string getColor(){
		string temp_color = *color;
		return temp_color;
	}

	void print(){
		cout << *color << endl;
	}
};
int main(){
	Example E;
	E.print();
	//string* temp = E.getColor();
	//*temp = "hack!";
	//E.print();
	
	return 0;
}
/*
getColor()의 return을 string* color를 직접적으로 return하지 않고 string temp_color를 만들어 temp_color를 return함으로써
안전한 코드로 만들었습니다.
*/