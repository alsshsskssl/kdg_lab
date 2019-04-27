#include <iostream>
#include <vector>

using namespace std;

int calc(int num);

int main(){
	int T,x,y;
	vector<int> v;
	cin >> T;
	for(int i=0;i<T;i++){
		cin >> x >> y;
		v.push_back(y-x);
	}

	for(int i=0;i<v.size();i++)
		cout <<  calc(v[i]) << endl;

	return 0;
}

int calc(int num){
	for(int i=0;i*i-1<num;i++){
		if(i*i<num&&(i+1)*(i+1)>num)
			return calc(num-(i*i))+calc(i*i);
		if(i*i==num)
			return (2*i-1);
	}
}
