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

	string* getColor(){
		return color;
	}

	void print(){
		cout << *color << endl;
	}
};
int main(){
	Example E;
	E.print();
	string* temp = E.getColor();
	*temp = "hack!";
	E.print();
	
	return 0;
}
/*
	생성자에서 string* color에 메모리를 할당하였습니다.
	그리고 string* getColor() 함수에서 string color의 주소를 리턴하였습니다.
	main에서 getColor()로 return된 주소를 string *temp가 받았습니다.
	그 후 *temp를 수정하여 private로 선언된 color에 직접 접근하여 color변수를 "hack!"으로 조작하였습니다.
*/