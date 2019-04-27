#include <iostream>
using namespace std;
int a[100001];
int d[100001];
int main(){
	int T;
	cin >> T;

	for(int i=0;i<T;i++)
		cin >> a[i];

	d[0]=a[0];

	for(int i=1;i<T;i++)
		d[i]=max(d[i-1]+a[i],a[i]);

	int temp = d[0];
	for(int i=1;i<T;i++)
		temp = max(temp,d[i]);
/*
	for(int i=0;i<T;i++)
		cout << a[i] << "\t";
	cout << endl;
	
	for(int i=0;i<T;i++)
		cout << d[i] << "\t";
	cout << endl;
*/
	cout << temp << endl;

	return 0;
}
