#include <cstdio>
#include <cstdlib>
#include <vector>
#include <utility>
#include <algorithm>
#include <iostream>
using namespace std;
int check[1000]={-1,};
vector<pair<int,int> > vec[100];
void dfs(int x);
int main(){
	int n,v;
	int temp1,temp2,temp3;
	for(int i=0;i<1000;i++)
		check[i]=-1;
	/*
	for(int i=0;i<10;i++)
		printf("%d",check[i]);
	*/
	cin >> n >> v;
	//scanf("%d %d",&n,&v);
	
	//vector<pair<int,int> > vec[n];

	for(int i=0;i<n;i++)
		check[i]=0;

	for(int i=0;i<v;i++){
		cin >> temp1 >> temp2 >> temp3;
		//scanf("%d %d %d",&temp1,&temp2,&temp3);
		vec[temp1].push_back(make_pair(temp2,temp3));
		vec[temp2].push_back(make_pair(temp1,temp3));
	}
	
	for(int i=0;i<n;i++){
		//sort(vec[i].begin(),vec[i].end());
		sort(vec[i].begin(),vec[i].end(),greater<pair<int,int> >());
	}

	for(int i=0;i<n;i++){
		printf("v[%d] ",i);
		for(int j=0;j<vec[i].size();j++){
			printf("[%d %d] ",vec[i].at(j).first,vec[i].at(j).second);
		}
		printf("\n");
	}
	for(int i=0;i<9;i++){
	dfs(i);
		for(int i=0;i<n;i++){
			check[i]=0;
		}
	cout << endl;
	}
	/*
	for(int i=0;i<10;i++)
		printf("%d",check[i]);
	*/
	return 0;
}
void dfs(int x){
	check[x] = 1;
	printf("%d ",x);
	
	for(int i=0;i<vec[x].size();i++){
		int y = vec[x].at(i).first;
		if(check[y]==0&&check[y]!=-1)
			dfs(y);
	}
}
