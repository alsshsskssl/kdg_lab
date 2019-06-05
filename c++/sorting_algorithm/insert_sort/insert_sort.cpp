#include <iostream>
using namespace std;
void print_arr();
int arr[100000];
int main(){
	srand(time(NULL));
	for(int i=0;i<sizeof(arr)/4;i++)
		arr[i] = rand();
	
	int temp;
	for(int i=0;i<sizeof(arr)/4;i++){
		temp = arr[i];	//arr[i]가 비교할녀석(소팅하는 동안 배열에 두개씩 존재함!)
		int j = i;	//j를 비교할 녀석의 index로 초기화
		while(j>0 && arr[j-1]>temp){
			arr[j] = arr[j-1];	//temp전의 수가 temp보다 크면 a[j]에 a[j-1]을 복사!
			j--;
		}
		arr[j] = temp;	//최종적으로 j>0(j가 0이 되면)이면 제일 왼쪽에 그냥 temp를 집어넣음
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
