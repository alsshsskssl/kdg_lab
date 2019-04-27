#include <cstdio>
#include <cstdlib>
#include <vector>
#include <utility>
using namespace std;
int main(){
	int n,v;
	int temp1,temp2,temp3;
	scanf("%d %d",&n,&v);
	
	vector<pair<int,int> > vec[n];

	for(int i=0;i<v;i++){
		scanf("%d %d %d",&temp1,&temp2,&temp3);
		vec[temp1].push_back(make_pair(temp2,temp3));
		vec[temp2].push_back(make_pair(temp1,temp3));
	}

	for(int i=0;i<n;i++){
		printf("v[%d] ",i);
		for(int j=0;j<vec[i].size();j++){
			printf("[%d %d] ",vec[i].at(j).first,vec[i].at(j).second);
		}
		printf("\n");
	}

	return 0;
}
