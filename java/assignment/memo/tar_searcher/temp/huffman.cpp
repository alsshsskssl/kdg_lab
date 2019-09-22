#include <iostream>
#include <algorithm>
#include <fstream>
#include <string>
#include <utility>
#include <vector>
#include <math.h>
#include "binary_tree.h"
using namespace std;

binary_tree* sum_tree(binary_tree* t1,binary_tree* t2);
binary_tree* mk_huffman_tree(vector<pair<int,char> > v);
vector<binary_tree*> tree_sort(vector<binary_tree*> v);
vector<binary_tree*> mk_tree_list(vector<pair<int,char> > v);
vector<pair<char,string> > V;
node* fill_V(node* leaf,string S);
int trans_str(string S);
string mk_extract_info();
vector<pair<char,string> > mk_extract_info_vec(string S);
string mk_bit_stream(int ch);
int* mk_frequency_arr(string file_name);
string output_part_of_result(string S);
string calc_buff = "";
string decode(string S,vector<pair<char,string> > v);
string get_vec_str(string file_name);
int print_vec(vector<pair<char,string> > vec);
//string char_to_bit_string(char ch);

FILE *fp;
FILE *in;       //결과파일을 만들놈
int main(int argc,char* argv[]){
	if(argc<3){
		int S_cnt[255]={0,}; //빈도수 체크 할 배열
		string S; //문자열 넣으려는 배열
		char ch;
		
		for(int i=0;i<255;i++){
			int *temp = mk_frequency_arr(argv[1]);
			S_cnt[i]=temp[i];
		}
		/*
		for(int i=0;i<255;i++){
			if(S_cnt[i]!=0)
				cout << i << "/" << S_cnt[i] << " ";
		}
		*/
		vector<pair<int,char> > v;
	
		for(int i=0;i<sizeof(S_cnt)/4;i++){		//read file_string and make pair_list
			if(S_cnt[i]!=0){
				pair<int,char> temp = make_pair(S_cnt[i],i);
				v.push_back(temp);
			}
		}
		
		sort(v.begin(),v.end(),greater<pair<int,char> >());	//vector_pair sorting
		
		binary_tree* huf_tree = new binary_tree();	//make_
		huf_tree = mk_huffman_tree(v);			//huffman_tree
		vector<pair<char,int> > code_vector;

		fill_V(huf_tree->get_root(),"");
		//cout << V.at(0).first << "벡터V완성" <<endl;
		//string을 bit로 가공-------------
	
		//cout << S << endl;
		//string str = output_part_of_result(S);
		FILE *fin = fopen(argv[1],"r");
		if(fin==NULL){
			fputs("file open err!",stderr);
			exit(1);
		}
		string str = "";
		while(!feof(fin)){
			ch=fgetc(fin);
			if((int)ch==0){
				//cout << "아웃풋파오리에 넣기 전S :" << S << endl;
				//cout << "아웃풋파오리에 넣기 전S사이즈 :" << S.size() << endl;
				str += output_part_of_result(S);
				//cout << "널 문자 처리 전 : " << str << endl;
				//cout << "널문자 처리" << endl;
				int cnt0=0;
				for(int i=0;i<8;i++){
					if(str.at(str.size()-i-1)=='0'){
						cnt0++;
					}
				}
				//cout << cnt0 << endl;
				if(cnt0!=7){
					str += "0000000";
				}
				//cout << "널 문자 처리 후 : " << str << endl;
				S = "";
			}else{
				S += ch;
			}
		}
		str += output_part_of_result(S);
	
	/*		
		int gahang;	//개행문자
		for(int i=0;i<V.size();i++){
			if(V.at(i).first=='\n'){
				gahang = V.at(i).second.size();	
			}
		}
		for(int i=0;i<gahang;i++){
			str.erase(str.size()-1,1);
		}
	*/
		//cout << "최종 str : " << str << endl;

		int padding_size = 7-(str.length()%7);
		/*
		if(padding_size == 7){
			padding_size = 0;
		}
		*/
		//cout << "padding size = " << padding_size << endl;
		//cout << "vector size = " << V.size() << endl;
		
		for(int i=0;i<padding_size;i++){	//padding
			str+="0";
		}

		//cout << "최종 str : " << str << endl;
		
		string result = "";
		string temp = "";
		for(int i=0;i<str.length();i++){
			temp += str[i];
			if(temp.length()%7==0){
				char temp2 = (char)trans_str(temp);
				result += temp2;
				temp = "";
			}
		}
		
		//string을 bit로 가공---------
		V.push_back(make_pair(padding_size,argv[1]));
		result+=mk_extract_info();	//insert extract_info in result string
		string out_name = argv[1];
		
		out_name.erase(out_name.length()-1,1);
		out_name.erase(out_name.length()-1,1);
		out_name.erase(out_name.length()-1,1);
		out_name += "huf";
		//print_vec(V);
		ofstream out(out_name);
		result += '\n';
		out << result;
		out.close();
	}else{	
		//FILE *in;	//결과파일을 만들놈
		
		string str(argv[1]);	//압축파일 이름
		const char *temp = str.c_str();	//temp : 압축파일 이름
		//in=fopen(temp,"rb");
		

		string S = get_vec_str(argv[1]);	//압축파일의 정보부분을 S에 저장
		//cout << S << endl;
		//cout << S << S.size() << endl;
		
		vector<pair<char,string> > V = mk_extract_info_vec(S); //이걸 쓰려면 뒤에서부터 읽힌 string 필요
		
		string decode_result = "";	//최종 결과
		//int slash_cnt=0;
		//fp = fopen(temp,"rb");	//압축파일을 열음
		//string temp0 = "";
		//const char *temp_p;
		
		vector<pair<char,string> > temp_V;
		for(int i=0;i<V.size()-1;i++){	//맨 마지막 부분이 원본파일 이름과 패딩정보있는데 그정보 안받고 지워둔 temp_V를 만드는 for문
			temp_V.push_back(V.at(i));
		}


		//print_vec(V);
		//cout << "V.at(V.size()-1).first : " << (int)V.at(V.size()-1).first << endl;
		//cout << "V.at(V.size()-1).second.c_str() : " << V.at(V.size()-1).second.c_str() << endl;
		const char* orgin_name = V.at(V.size()-1).second.c_str();
		
		//remove(orgin_name);	//origin_name : 압축파일의 정보벡터에서 읽어둔 원본파일 이름
		/*
		in=fopen(orgin_name,"w");
		if(in==NULL){   //오류제어
			fputs("file open err!(in)",stderr);
			//cout << "in open err!" << endl;
			exit(1);
		}
		*/

		/*
		FILE* sizefp = fopen(temp,"r");
		fseek(sizefp,0,SEEK_END);
		int size = ftell(sizefp);
		*/
		
		fp = fopen(temp,"r");  //압축파일을 열음
		if(fp==NULL){
			fputs("file open err!(fp)",stderr);
			//cout << "fp open err!" << endl;
			exit(1);
		}
		char ch;
		string broken_file = "";	//깨진 파일 정보 넣을 스트링
		while(!feof(fp)){		//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
			ch=fgetc(fp);
			broken_file += ch;
		}
		broken_file.erase(broken_file.size()-1,1);
		

		int info_cnt = 0;	//정보벡터 길이
		for(int i=0;i<V.size();i++){
			info_cnt += V.at(i).second.length()+3;
		}
		info_cnt += 2;
		

		for(int i=0;i<info_cnt;i++){
			broken_file.erase(broken_file.size()-1,1);
		}
		//cout << "broken_file : " << broken_file << endl;
		//cout << "broken_file.size() : " << broken_file.size() << endl;

		
		string bit_stream = "";
		for(int i=0;i<broken_file.size();i++){
			bit_stream += mk_bit_stream(broken_file[i]);
		}
		//cout << "bit_stream : " << bit_stream << endl;
		//cout << "bit_stream size : " << bit_stream.size() << endl;
		

		
		for(int i=0;i<V.at(V.size()-1).first;i++){	//패딩 제거
			bit_stream.erase(bit_stream.size()-1,1);
		}
		/*
		int gahang_size = 0;	//개행문자 길이 파악
		for(int i=0;i<temp_V.size();i++){
			if(temp_V.at(i).first='\n'){
				gahang_size = temp_V.at(i).second.size();
			}
		}
		*/
		for(int i=0;i<7;i++){	//개행문자 길이만큼 제거	(0001010)4개
			bit_stream.erase(bit_stream.size()-1,1);
		}
		
		//cout << "bit_stream : " << bit_stream << " (패딩제거)" << endl;
		string last_result = decode(bit_stream,temp_V);
		//cout << "last_result : " << last_result << endl;
		

		remove(orgin_name);
		//cout << "orgin_name : " << orgin_name << endl;
		ofstream out(orgin_name);
		out << last_result;
		//cout << broken_file.size() << endl;
		out.close();
	}

	return 0;
}

int print_vec(vector<pair<char,string> > vec){
	cout << "벡터 상태" << endl;
	for(int i=0;i<vec.size();i++){
		cout << "[" << vec.at(i).first << "," << vec.at(i).second << "]" << endl;
	}
	
	return 0;
}
string get_vec_str(string file_name){
	string S = "";
	
	char ch;
	char* buf;
	FILE *in;
	const char *temp = file_name.c_str();
	in=fopen(temp,"r");
	
	if(in==NULL){
		fputs("file open err!",stderr);
		exit(1);
	}
	
	fseek(in,-6000,SEEK_END);
	while(!feof(in)){
		ch=fgetc(in);
		S+=ch;
	}
	
	return S;
}

int* mk_frequency_arr(string file_name){
	int arr[255]={0,};
	int *result;
	result=arr;
	char ch;
	FILE *in;
	const char *temp = file_name.c_str();
	in=fopen(temp,"rb");
	if(in==NULL){
		fputs("file open err!",stderr);
		exit(1);
	}
	
	while(!feof(in)){
		arr[ch=fgetc(in)]++;
	}
	fclose(in);

	return result;

}

string output_part_of_result(string S){
	//cout << V.at(0).first << endl;
	string result = "";
	for(int i=0;i<S.size();i++){
		for(int j=0;j<V.size();j++){
			if(S.at(i)==V.at(j).first)
				result+=V.at(j).second;
		}
	}
	//cout << result << endl;
	return result;
}

string mk_bit_stream(int ch){
	string S = "";
	/*
	if(ch==0){
		cout << "ch에 널이 들어온걸 mk_bit_stream이 인식" << endl;	//인식못함
	}
	*/
	while(ch>1){
		if(ch%2==1){
			ch--;
			ch/=2;
			S+='1';
		}else{
			ch/=2;
			S+='0';
		}
	}
	if(ch==1)
		S+='1';
	else
		S+='0';
	while(S.size()<7)
		S+='0';
	reverse(S.begin(),S.end());
	return S;
}

vector<pair<char,string> > mk_extract_info_vec(string S){
	vector<pair<char,string> > V;
	//cout << S << endl;
	string str_temp;
	char ch_temp;
	//cout << S.size() << endl;	//39나옴
	



	for(int i=3;;){	//왜 i가 2부터인지 잘 이해안됨 원래는 1이였음







		while(S.at(S.size()-1-i) != '/'){
			str_temp += S.at(S.size()-1-i);
			//cout << i << endl;
			i++;
		}
		//cout << str_temp << endl;
		i++;
		//while(S.at(S.size()-1-i) != '/'){
			ch_temp = S.at(S.size()-1-i);
			i++;
		//}
		//cout << ch_temp << endl;
		i++;
		reverse(str_temp.begin(),str_temp.end());
		V.insert(V.begin(),make_pair(ch_temp,str_temp)); 
		str_temp = "";
		if(S.at(S.size()-i)=='/' && S.at(S.size()-1-i)=='/' && S.at(S.size()-2-i)!='/'){
			break;
		}
		else
			continue;
	}
	//cout << V.at(0).first << endl;

	return V;
}

string decode(string S,vector<pair<char,string> > v){
	string result;
	string temp = "";
	for(int i=0;i<S.size();i++){
		temp += S[i];
		for(int j=0;j<v.size();j++){
			if(temp == v.at(j).second){
				result += v.at(j).first;
				temp = "";
			}
		}
	}
	
	return result;
}

string mk_extract_info(){
	string S;
	S+="/";
	for(int i=0;i<V.size();i++){
		S+="/";
		S+=V.at(i).first;
		S+="/";
		S+=V.at(i).second;
	}
	S+="/";
	//S+=to_string(V.size());
	return S;
}
binary_tree* sum_tree(binary_tree* t1,binary_tree* t2){		// tree+tree		//dltoRLdlqfurdl dltkdgo
	binary_tree* temp = new binary_tree();
	//cout << temp << endl;		//display addr
	int root_value = t1->get_value(t1->get_root()) + t2->get_value(t2->get_root());
	//cout << t1->get_root()->value.first << t1->get_root()->value.second << "+" << t2->get_root()->value.first << t2->get_root()->value.second << "=" << root_value << endl;
	temp->insert(make_pair(root_value,NULL));
	if(t1->get_value(t1->get_root()) < t2->get_value(t2->get_root())){
		temp->get_root()->left = t1->get_root();
		temp->get_root()->right = t2->get_root();
	}
	else{
		temp->get_root()->left = t2->get_root();
		temp->get_root()->right = t1->get_root();
	}
	//cout << "temp is " << temp->get_root()->value.first << endl;	//debug
	
	return temp;
}
vector<binary_tree*> mk_tree_list(vector<pair<int,char> > v){
	//cout << "-------------------" << endl;
	vector<binary_tree*> tv;
	
	for(int i=0;i<v.size();i++){
		binary_tree* temp = new binary_tree[v.size()];
		temp->insert(v.at(i));
		//cout << temp->get_root()->value.second << endl;
		tv.push_back(temp);
	}
	//cout << "------------------" << endl;
	return tv;
}

binary_tree* mk_huffman_tree(vector<pair<int,char> > v){
	vector<binary_tree*> tree_list = mk_tree_list(v);
	
	//cout << "run_mk_huffman_tree" << endl;	
	
	for(int i=0;i<v.size()-1;i++){
		binary_tree* temp_ = new binary_tree[tree_list.size()];
		//binary_tree* temp = new binary_tree();
		tree_list = tree_sort(tree_list);				//sort
		//for(int j=0;j<tree_list.size();j++)
		//	cout << tree_list.at(j)->get_value(tree_list.at(j)->get_root()) << " ";
		//cout << endl;	
		temp_ = sum_tree(tree_list.at(tree_list.size()-2),tree_list.at(tree_list.size()-1));	//sum
		//cout << temp_ << " " << temp_->get_value(temp_->get_root()) << endl;
		//cout << temp_->get_root()->value.first << " " << temp_->get_root()->value.second  << "-----"<< endl;
		tree_list.pop_back();					//pop
		tree_list.pop_back();					//pop
		tree_list.push_back(temp_);				//push
		//delete temp;
	}
	
	return tree_list.at(0);
}
vector<binary_tree*> tree_sort(vector<binary_tree*> v){		//?? QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ
	//cout << "----------------------" << endl;
	//cout << "sorting" << endl;
	
	for(int i=0;i<v.size();i++){
		for(int j=i;j<v.size()-1;j++){
			if(v.at(j)->get_root()->value < v.at(j+1)->get_root()->value){
				v.push_back(v.at(j));
				v.erase(v.begin()+j);
				//cout << j << " left" << endl;
				//for(int k=0;k<v.size();k++)
				//	cout << v.at(k)->get_value(v.at(k)->get_root()) << " ";
				//cout << endl;
			}
			else{
				v.push_back(v.at(j+1));
				v.erase(v.begin()+j+1);
				//for(int k=0;k<v.size();k++)
				//	cout << v.at(k)->get_value(v.at(k)->get_root()) << " "; 
				//cout << endl;
				//cout << j+1 << " right" << endl;
			}
		}
	}
	//cout << "res = ";
	//for(int i=0;i<v.size();i++){
	//	cout << v.at(i)->get_value(v.at(i)->get_root()) << " ";
	//}
	//cout << endl;
	
	//cout << "----------------------" << endl;
	
	return v;
}

node* fill_V(node* leaf,string S){
	if(!(leaf->left!=NULL) && !(leaf->right!=NULL)){
		V.push_back(make_pair(leaf->value.second,S));
		return NULL;
	}else{
		if(leaf->left!=NULL){
			S+="0";
			fill_V(leaf->left,S);
			S.erase(S.length()-1,1);
		}
		if(leaf->right!=NULL){
			S+="1";
			fill_V(leaf->right,S);
		}
	}
		
	return NULL;
}
int trans_str(string S){
	int ch=0;
	for(int i=0;i<7;i++){	//S.length is 8
		if(S[i]=='1'){
			ch += pow(2,6-i);
		}
	}

	return ch;
}
