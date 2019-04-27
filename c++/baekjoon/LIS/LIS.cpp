#include <iostream>
using namespace std;
int a[1002];
int n;
int calc();
int main(){
	cin >> n;
	
	for(int i=0;i<n;i++)
		cin >> a[i];

	cout << calc() << endl;	

	return 0;
}
int calc(){
	static int num=-1;
	num++;
	if(num==0)
		return calc()+1;
	else if(num==(n-1))
		return 1;
	else if(a[num]>a[num-1])
		return calc()+1;
	else
		return calc();
}
