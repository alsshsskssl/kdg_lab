#include <iostream>
#include <algorithm>
using namespace std;
long long a[1000005];
long long cnt[1000005];
int main(){
	int t;
	cin >> t;
	
	for(int i=0;i<t;i++)
		cin >> a[i];

	sort(a,a+t);

	cnt[0]=1;
	for(int i=1;i<t;i++){
		if(a[i]==a[i-1])
			cnt[i]=cnt[i-1]+1;
		else
			cnt[i]=1;
	}

	int temp=1;
	for(int i=0;i<t;i++){
		if(temp<cnt[i]){
			temp++;
		}
	}

	long long ans;
	for(int i=0;i<t;i++){
		if(cnt[i]==temp){
			ans=a[i-1];
			break;
		}
	}
	cout << ans << endl;
// debug

	for(int i=0;i<t;i++)
		cout << a[i] << "\t";
	cout << endl;
	for(int i=0;i<t;i++)
		cout << cnt[i] << "\t";
	cout << endl;
	cout << temp << "\t" << ans << endl;

	return 0;
}
