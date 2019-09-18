#include <iostream>
#include <algorithm>
#include <fstream>
#include <string>
#include <utility>
#include <vector>
#include <math.h>
#include <iomanip>
using namespace std;
int* mk_frequency_arr(string file_name);
int main(){
	int ch;
	FILE *in;
	if((in=fopen("test.txt","rb"))==NULL){
		fputs("파일 읽기 에러!",stderr);
		exit(1);
	}
	/*
	while((ch=fgetc(in))!=EOF){
		printf("%c",ch);
	}
	*/
	for(int i=0;i<10;i++){
		ch=fgetc(in);
		printf("%c",ch);
		//cout << ch;
	}

	return 0;
}
int* mk_frequency_arr(string file_name){
	int *po;
	int arr[255];
	po=arr;
		

	return po;
}
