#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(){
	int N,M;
	queue<int> q;
	vector<int> v;
	cin >> N >> M;

	for(int i=0;i<N;i++)
		q.push(i+1);
		
	while(q.empty()==0){
		for(int i=0;i<M;i++){
			if(i+1==M){	//if last for
				v.push_back(q.front());
				q.pop();		
			}
			else{
				q.push(q.front());
				q.pop();
			}
		}
	}
	//print state
	cout << "<";
	for(int i=0;i<v.size();i++){
		if(i!=0)
			cout << ", ";
		cout << v[i];
	}
	cout << ">" << endl;

	return 0;

}

