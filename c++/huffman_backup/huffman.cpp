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
int main(int argc,char* argv[]){
	//cout << argc << endl;
	if(argc<3){
	/*
	binary_tree *tree = new binary_tree();
	binary_tree *tree1 = new binary_tree();

	tree->insert(make_pair(8,'t'));
	tree->insert(make_pair(4,'s'));
	tree->insert(make_pair(4,'e'));
	tree->insert(make_pair(3,'\n'));
	tree->insert(make_pair(2,' '));
	cout << "---------------------------" << endl;
	tree1->insert(make_pair(2,'g'));
	tree1->insert(make_pair(1,'f'));
	tree1->insert(make_pair(3,'d'));
	
	cout << tree->get_value(tree->search(make_pair(4,'s'))) << endl;
	binary_tree *tree2= new binary_tree();
	tree2 = sum_tree(tree,tree1);
	cout << tree2->get_value(tree->search(make_pair(2,'g'))) << endl;
	*/	

	
	int S_cnt[255]={0,}; //빈도수 체크 할 배열
	string S; //문자열 넣으려는 배열
	char temp_0[1000000];	//하나의 라인 천만글자 까지 가능
	ifstream inFile(argv[1]);	//파일 읽기
	while(!inFile.eof()){
		inFile.getline(temp_0,1000000);	//하나 읽은 라인을 temp_0에 저장
		string temp_1(temp_0);	//temp_1에 temp_0에 저장한 문자열 저장
		temp_1 += "\n";	//temp_1에 개행문자 추가
		S += temp_1;	//temp_1에 저장된 문자열을 최종 문자열인 S에 이어붙임
		//따라서 무조건 \n가 두개 붙어있더라..
	}
	
	//cout << S << endl;
	for(int i=0;i<S.length();i++){		//make frq_arr
		S_cnt[S.at(i)]++;	//S_cnt 각 문자의 아스키코드 번호의 index에 빈도수 체크
	}
	//cout << sizeof(S_cnt)/4 << endl;
	
	
//	for(int i=0;i<sizeof(S_cnt)/4;i++)	//debug output S_cnt[]
//		cout << S_cnt[i] << " ";
	

	vector<pair<int,char> > v;	

	for(int i=0;i<sizeof(S_cnt)/4;i++){		//read file_string and make pair_list
		if(S_cnt[i]!=0){
			pair<int,char> temp = make_pair(S_cnt[i],i);
			v.push_back(temp);
		}
	}
	
	sort(v.begin(),v.end(),greater<pair<int,char> >());	//vector_pair sorting

	
//	for(int i=0;i<v.size();i++){	//debug output vector
//		cout << v[i].first << " " << v[i].second << endl;
//	}

	binary_tree* huf_tree = new binary_tree();	//make_
	huf_tree = mk_huffman_tree(v);			//huffman_tree
	//cout << huf_tree->get_value(huf_tree->search(make_pair(4,'s'))) << endl;
	vector<pair<char,int> > code_vector;
//	cout << huf_tree->huf_code(make_pair(4,'e')) << endl;

//	cout << huf_tree->search(make_pair(4,'e')) << "fd" << endl;
	
	fill_V(huf_tree->get_root(),"");
	
	//check_V
	//cout << "V.at(0)" << V.at(0).first << " " << V.at(0).second << endl;
	//cout << "V.at(1)" << V.at(1).first << " " << V.at(1).second << endl;
	//cout << "V.at(2)" << V.at(2).first << " " << V.at(2).second << endl;
	//cout << "V.at(3)" << V.at(3).first << " " << V.at(3).second << endl;
	//cout << "V.at(4)" << V.at(4).first << " " << V.at(4).second << endl; 
	//cout << huf_tree->get_char(huf_tree->get_root()->right->right->right) << endl;
	
	string str;
	for(int i=0;i<S.length();i++){
		for(int j=0;j<V.size();j++){
			if(S[i]==V.at(j).first){
				str+=V.at(j).second;
			}
		}
	}

	//cout << str << endl;		//debug
	
	int padding_size = 8-(str.length()%7);
	for(int i=0;i<padding_size;i++){	//padding
		str+="0";
	}
	
	cout << str << endl;
	
	//cout << str << " " << str.length() << endl;
	//cout << trans_str("11111111") << endl;
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
	result+=mk_extract_info();
	//cout << result << endl;
	string out_name = argv[1];
	out_name.erase(out_name.length()-1,1);
	out_name.erase(out_name.length()-1,1);
	out_name.erase(out_name.length()-1,1);
	out_name += "kdg";
	ofstream out(out_name);
	out << result;
	out.close();
	
	//cout << mk_extract_info() << endl;
	}else{
		string S;
		char temp_0[1000000];
		cout << "압축 풀기" << endl;
		//vector<pair<char,string> > V;
		ifstream inFile(argv[1]);
		while(!inFile.eof()){
			inFile.getline(temp_0,1000000);
			string temp_1(temp_0);
			temp_1 += "\n";
			S += temp_1;
		}
		S.erase(S.size()-1,S.size());	//하나 추가된 개행문자 삭제
		cout << S << endl;
		vector<pair<char,string> > V = mk_extract_info_vec(S);
		/*
		vector<pair<char,string> > V;
		string str_temp;
		char ch_temp;
		//cout << S.size() << " "  << S.at(32) << endl;
		for(int i=1;;){
			while(S.at(S.size()-1-i) != '/'){
				str_temp += S.at(S.size()-1-i);
				i++;
			}
			i++;
			//cout << i << endl;
			while(S.at(S.size()-1-i) != '/'){
				ch_temp = S.at(S.size()-1-i);
				i++;
			}
			i++;
			reverse(str_temp.begin(),str_temp.end());
			V.insert(V.begin(),make_pair(ch_temp,str_temp));
			str_temp = "";
			//V.push_front(make_pair(ch_temp,str_temp));
			if(S.at(S.size()-1-i)=='/' && S.at(S.size()-2-i)!='/'){
				break;
			}
			else
				continue;
		}
		*/
		cout << "리스트 출력,vector 길이 : " << V.size() << endl;
		for(int i=0;i<V.size();i++){
			cout << V.at(i).first << "/" << V.at(i).second << endl;
		}
		//-----------------------------------------------------본격 디코딩 시작
		cout << mk_bit_stream('\n') << endl;
	}
	return 0;
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
	string str_temp;
	char ch_temp;
	for(int i=1;;){
		while(S.at(S.size()-1-i) != '/'){
			str_temp += S.at(S.size()-1-i);
			i++;
		}
		i++;
		while(S.at(S.size()-1-i) != '/'){
			ch_temp = S.at(S.size()-1-i);
			i++;
		}
		i++;
		reverse(str_temp.begin(),str_temp.end());
		V.insert(V.begin(),make_pair(ch_temp,str_temp)); 
		str_temp = "";
		if(S.at(S.size()-1-i)=='/' && S.at(S.size()-2-i)!='/'){
			break;
		}
		else
			continue;
	}
	return V;
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
