#include <iostream>
#include <vector>
#include <utility>
using namespace std;
int check(int a);
int calc(int num);
vector<pair<int,int> > memo;

int main(){
	unsigned int T,x,y;
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
	if(check(num))
		return check(num);
	else{
		for(int i=0;i*i-1<num;i++){
			if(i*i<num&&(i+1)*(i+1)>num){
				memo.push_back(make_pair(num,calc(num-(i*i))+calc(i*i)));
				return calc(num-(i*i))+calc(i*i);
			}
			if(i*i==num)
				return (2*i-1);
		}
	}
}
int check(int a){
	for(int i=0;i<memo.size();i++){
		if(memo[i].first==a)
			return memo[i].second;
	}
	return 0;
}
