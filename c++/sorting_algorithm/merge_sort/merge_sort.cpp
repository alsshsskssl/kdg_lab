#include <iostream>
using namespace std;
void print_arr();
int arr[100000];
int main(){
	srand(time(NULL));
	for(int i=0;i<sizeof(arr)/4;i++)
		arr[i] = rand();
	
	
	return 0;
}
void print_arr(){
	for(int i=0;i<sizeof(arr)/4;i++){
		cout << arr[i] << "\t";
		if(i%13==0)
			cout << endl;
	}
	cout << endl;
}
