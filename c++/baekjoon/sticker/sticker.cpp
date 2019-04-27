#include <iostream>
using namespace std;
int A[2][100001];	//sticker prise
int d[100001][3];
long long buf[10001];	//test case
int main(){
	int T;
	cin >> T;
	for(int k=0;k<T;k++){
		int n;
		cin >> n;
		for(int i=0;i<2;i++)
			for(int j=0;j<n;j++)
				cin >> A[i][j];
		d[1][0]=0;
		d[1][1]=A[0][0];
		d[1][2]=A[1][0];
		for(int i=2;i<=n;i++){
			d[i][0]=max(max(d[i-1][0],d[i-1][1]),d[i-1][2]);
			d[i][1]=max(d[i-1][0],d[i-1][2])+A[0][i-1];
			d[i][2]=max(d[i-1][0],d[i-1][1])+A[1][i-1];
		}
		buf[k] = max(max(d[n][0],d[n][1]),d[n][2]);
	}
	for(int i=0;i<T;i++)
		cout << buf[i] << endl;

	return 0;
}
