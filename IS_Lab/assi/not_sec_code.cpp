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
	�����ڿ��� string* color�� �޸𸮸� �Ҵ��Ͽ����ϴ�.
	�׸��� string* getColor() �Լ����� string color�� �ּҸ� �����Ͽ����ϴ�.
	main���� getColor()�� return�� �ּҸ� string *temp�� �޾ҽ��ϴ�.
	�� �� *temp�� �����Ͽ� private�� ����� color�� ���� �����Ͽ� color������ "hack!"���� �����Ͽ����ϴ�.
*/