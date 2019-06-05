#include <iostream>
using namespace std;
void print_arr();
int arr[100000];
int main(){
	srand(time(NULL));
	for(int i=0;i<sizeof(arr)/4;i++)
		arr[i]=rand();
	
	int n=0;
	for(int i=0;i<sizeof(arr)/4;i++){
		for(int j=1;j<sizeof(arr)/4-n;j++){
			if(arr[j-1]>arr[j]){
				int temp = arr[j-1];
				arr[j-1] = arr[j];
				arr[j] = temp;
			}
		}
		n++;
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
