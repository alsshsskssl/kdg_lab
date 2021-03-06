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
string mk_bit_stream(char ch);
int* mk_frequency_arr(string file_name);
string output_part_of_result(string S);
string calc_buff = "";
string decode(string s,vector<pair<char,string> > v);
string get_vec_str(string file_name);
int print_vec(vector<pair<char,string> > vec);
int main(int argc,char* argv[]){
	if(argc<3){
		int S_cnt[255]={0,}; //빈도수 체크 할 배열
		string S; //문자열 넣으려는 배열
		char temp_0[1000000];	//하나의 라인 천만글자 까지 가능
		ifstream inFile(argv[1]);	//파일 읽기
		while(!inFile.eof()){
			inFile.getline(temp_0,1000000);	//하나 읽은 라인을 temp_0에 저장
			string temp_1(temp_0);	//temp_1에 temp_0에 저장한 문자열 저장
			temp_1 += "\n";	//temp_1에 개행문자 추가
			S += temp_1;	//temp_1에 저장된 문자열을 최종 문자열인 S에 이어붙임
			//무조건 \n가 두개 붙어있더라.. 왜 붙어 있는건지 아직 모름 근데 잘 돌아 가니까 냅둠
			//그리고 이중 하나는 빈도수 체크에서 빠져있어
			S.erase(S.length()-1,1);
		}
		
		for(int i=0;i<255;i++){
			int *temp = mk_frequency_arr(argv[1]);
			S_cnt[i]=temp[i];
		}
		
		for(int i=0;i<255;i++){
			if(S_cnt[i]!=0)
				cout << i << "/" << S_cnt[i] << " ";
		}
		
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
		
		//string을 bit로 가공-------------
		string str = output_part_of_result(S);
		
		int padding_size = 7-(str.length()%7);
		cout << "padding size = " << padding_size << endl;
		cout << "vector size = " << V.size() << endl;
		for(int i=0;i<padding_size;i++){	//padding
			str+="0";
		}
		
		cout << endl;
		
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
		result+=mk_extract_info();	//insert extract_info in result string
		string out_name = argv[1];
		
		out_name.erase(out_name.length()-1,1);
		out_name.erase(out_name.length()-1,1);
		out_name.erase(out_name.length()-1,1);
		out_name += "bdg";
		
		ofstream out(out_name);
		out << result;
		out.close();
	}else{
		FILE *in;
		char ch;
		string str(argv[1]);
		string str2 = str+".bdg";
		const char *temp = str.c_str();
		const char *temp2 = str2.c_str();
		in=fopen(temp,"rb");
		
		
		if(in==NULL){	//오류제어
			fputs("file open err!",stderr);
			cout << "오류" << endl;
			exit(1);
		}
		

		string S = get_vec_str(argv[1]);
		//cout << S << endl;
		//cout << S << S.size() << endl;
		
		vector<pair<char,string> > V = mk_extract_info_vec(S); //이걸 쓰려면 뒤에서부터 읽힌 string 필요
		print_vec(V);
		cout << V.size() << endl;
		string decode_result = "";
		int slash_cnt=0;
		/*
		string str2(argv[1]);
		const char *temp2 = str2.c_str();
		FILE* fp;
		fp=fopen(temp2,"a");
		*/
		/*
		string out_name = argv[1];
		out_name.erase(out_name.length()-1,1);
		out_name.erase(out_name.length()-1,1);
		out_name.erase(out_name.length()-1,1);
		out_name += "kdg";
		ofstream out(out_name);
		*/
		/*
		ofstream fout;
		fout.open("test.kdg2",ios::out);
		*/
		
		FILE *fp = fopen(temp2,"a");
		string temp0 = "";
		const char *temp_p;
		while(!feof(in)){	//슬레시 개수체크 추가해 봤다.
			if(slash_cnt==2)
				break;
			ch=fgetc(in);
			if(slash_cnt==1 && ch!='/'){
				temp0 = decode(mk_bit_stream(ch),V);
				temp_p = temp0.c_str();
				fputs(temp_p,fp);
				slash_cnt = 0;
			}
			if(slash_cnt==0 && ch!='/'){
				temp0 = decode(mk_bit_stream(ch),V);
				temp_p = temp0.c_str();
				fputs(temp_p,fp);
			}
			if(ch=='/'){
				slash_cnt++;
			}
			//decode_result += decode(mk_bit_stream(ch=fgetc(in)),V);
		}
		fclose(fp);
		//out.close();
		//cout << "디코딩 결과 : " << decode_result << "종료";
	}
	/*
	cout << "리스트 출력,vector 길이 : " << V.size() << endl;
	for(int i=0;i<V.size();i++){
		cout << V.at(i).first << "/" << V.at(i).second;
		if(V.size()!=i){
			cout << endl;
		}
	}
	*/
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
	cout << V.at(0).first << endl;
	string result = "";
	for(int i=0;i<S.size();i++){
		for(int j=0;j<V.size();j++){
			if(S.at(i)==V.at(j).first)
				result+=V.at(j).second;
		}
	}

	return result;
}

string mk_bit_stream(char ch){
	string S = "";
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
	for(int i=2;;){	//왜 i가 2부터인지 잘 이해안됨 원래는 1이였음
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
string decode(string s,vector<pair<char,string> > v){
	string x = "";
	string y = "";
	string z = "";
	string result = "";
	//ofstream fo;
	//fo.open("test.kdg2",ios::app);
	y = calc_buff;
	while(s.size()!=0){
		if(s.size()>6){
			x+=s.substr(0,7);
			s.erase(0,7);
		}else{
			x+=s.substr();
			s.erase();
		}
		while(x.size()!=0){ 
			y+=x.substr(0,1);
			x.erase(0,1);
			for(int j=0;j<v.size();j++){
				if(y.size()!=0 && v[j].second==y && v[j].second.size()!=0){
					z+=v[j].first;
					//fo.put(V[j].first);
					y.erase();
				}
			}
		}
	}
	calc_buff=y;
	result = z;
	//cout << z;
	//fo.close();
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
