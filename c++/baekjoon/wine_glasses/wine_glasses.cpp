#include <iostream>
using namespace std;
int d[10001][4];
int a[10000];
int main(){
	int cnt;

	cin >> cnt;

	for(int i=0;i<cnt;i++)
		cin >> a[i];

	d[1][0]=a[0];
	d[1][1]=a[0];
	d[1][2]=0;
	d[1][3]=0;

	for(int i=2;i<=cnt;i++){
		d[i][0]=max(d[i-1][2],d[i-1][3])+a[i-1];
		d[i][1]=d[i-1][0]+a[i-1];
		d[i][2]=max(d[i-1][2],d[i-1][3]);
		d[i][3]=max(d[i-1][0],d[i-1][1]);
	}
/*
	for(int i=0;i<=cnt;i++){	//check arr d[]
		for(int j=0;j<4;j++)
			cout << d[i][j] << "\t";
		cout << endl;
	}
*/
	int ans=0;
	for(int i=0;i<4;i++)
		ans=max(ans,d[cnt][i]);

	cout << ans << endl;

	return 0;
}
