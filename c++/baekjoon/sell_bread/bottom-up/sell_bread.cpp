#include <iostream>
using namespace std;
int d[1001];	//max money you can get by selling i loaves of bread
int a[1001];	//if i sell i bread, I can get a[i]
int main(){
	int N;
	cin >> N;
	for(int i=1;i<N+1;i++)
		cin >> a[i];

	for(int i=1;i<=N;i++)
		for(int j=1;j<=i;j++)
			d[i] = max(d[i],d[i-j]+a[j]);

	cout << d[N] << endl;	
	
	return 0;
}
