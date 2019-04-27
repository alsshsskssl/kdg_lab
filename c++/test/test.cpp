#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<int> v;
	for(int i=0;i<11;i++)
		v.push_back(1);

	v.insert(10,3);
		
	cout << v[10] << endl;

	return 0;
}
