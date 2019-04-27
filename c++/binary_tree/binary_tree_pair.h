#ifndef __BINARY_TREE_H__
#define __BINARY_TREE_H__

#include <iostream>
#include <utility>
using namespace std;
struct node{
	//int value;
	pair<int,char> value;
	node *left;
	node *right;
};
class binary_tree{
private:
	void destroy_tree(node *leaf){
		if(leaf!=NULL){
			destroy_tree(leaf->left);
			destroy_tree(leaf->right);
			delete leaf;	//al mang yee
		}	
	};
	void insert(pair<int,char> key,node *leaf){	//insert key(value)
		if(key.first<leaf->value.first){
			if(leaf->left!=NULL){
				cout << "level down_left" << endl;
				insert(key,leaf->left);
			}
			else{
				leaf->left = new node();
				leaf->left->left = NULL;
				leaf->left->right = NULL;
				leaf->left->value = key;
				cout << "create left" << endl;
			}
		}
		else{
			if(leaf->right!=NULL){
				cout << "level down_right" << endl;
				insert(key,leaf->right);
			}
			else{
				leaf->right = new node();
				leaf->right->left = NULL;
				leaf->right->right = NULL;
				leaf->right->value = key;
				cout << "create right" << endl;
			}
		}
	};
	node* search(pair<int,char> key, node *leaf){
		if(leaf!=NULL){
			if(key.first==leaf->value.first)
				return leaf;
			else if(key.first<leaf->value.first)
				return search(key,leaf->left);
			
			else
				return search(key,leaf->right);
		}
		else
			return NULL;
	};

	node *root;
public:
	binary_tree(){
		root=NULL;
	};
	~binary_tree(){
		destroy_tree();
	};

	void insert(pair<int,char> key){
		if(root!=NULL){
			insert(key,root);
		}
		else{
			root = new node();
			root->left = NULL;
			root->right = NULL;
			root->value = key;
			cout << "create root" << endl;
		}
	};
	node* search(pair<int,char> key){
		return search(key,root);
	};
	void destroy_tree(){
		destroy_tree(root);
	};
	int get_value(node *leaf){
		return leaf->value.first;
	}
};

#endif
