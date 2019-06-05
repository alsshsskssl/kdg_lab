#include <iostream>
using namespace std;
void print_arr();
int arr[100000];
int main(){
	srand(time(NULL));
	for(int i=0;i<sizeof(arr)/4;i++){
		arr[i]=rand();
	}
	
	for(int i=0;i<sizeof(arr)/4;i++){
		for(int j=i;j<sizeof(arr)/4;j++){
			if(arr[i]>arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	print_arr();
	
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
