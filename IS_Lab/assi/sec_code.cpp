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
getColor()�� return�� string* color�� ���������� return���� �ʰ� string temp_color�� ����� temp_color�� return�����ν�
������ �ڵ�� ��������ϴ�.
*/