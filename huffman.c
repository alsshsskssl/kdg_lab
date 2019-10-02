#include <stdio.h>
#include <stdlib.h>
#define MAX_ELEMENT 200
 
typedef struct TreeNode {
	int weight;
	char ch;
	struct TreeNode* left;
	struct TreeNode* right;
}TreeNode;
 
typedef struct {
	TreeNode* ptree;
	char ch;
	int key;
}element;
 
typedef struct {
	element heap[MAX_ELEMENT];
	int heap_size;
}HeapType;
 
HeapType* create() {
	return (HeapType*)malloc(sizeof(HeapType));
}
 
void init(HeapType* h) {
	h->heap_size = 0;
}
 
//삽입
void insert_min_heap(HeapType* h, element item) {
	int i = ++(h->heap_size);
 
	while (i != 1 && (item.key < h->heap[i / 2].key)) {
		h->heap[i] = h->heap[i / 2];
		i /= 2;
	}
	h->heap[i] = item;
}
 
//삭제 함수
element delete_min_heap(HeapType* h) {
	int parent = 1, child = 2;
	element item, temp;
 
	item = h->heap[1];
	temp = h->heap[(h->heap_size)--];
 
	while (child <= h->heap_size) {
		if (child < h->heap_size && (h->heap[child].key < h->heap[child + 1].key))
			child++;
		if (temp.key < h->heap[child].key) break;
		h->heap[parent] = h->heap[child];
		parent = child;
		child *= 2;
	}
	h->heap[parent] = temp;
	return item;
}
 
//이진트리 생성함수
TreeNode* make_tree(TreeNode* left, TreeNode* right) {
	TreeNode* node = (TreeNode*)malloc(sizeof(TreeNode));
	node->left = left;
	node->right = right;
	return node;
}
 
//이진트리 제거함수
void destroy_tree(TreeNode* root) {
	if (root == NULL) return;
	destroy_tree(root->left);
	destroy_tree(root->right);
	free(root);
 
}
 
//단말노드 검사
int is_leaf(TreeNode* root) {
	return !(root->left) && !(root->right);
}
 
void print_array(int codes[], int n) {
	for (int i = 0; i < n; i++)
		printf("%d", codes[i]);
	printf("\n");
}
 
void print_codes(TreeNode* root, int codes[], int top) {
	// 1을 저장하고 순환호출한다. 
	if (root->left) {
		codes[top] = 1;
		print_codes(root->left, codes, top + 1);
	}
 
	// 0을 저장하고 순환호출한다. 
	if (root->right) {
		codes[top] = 0;
		print_codes(root->right, codes, top + 1);
	}
 
	// 단말노드이면 코드를 출력한다. 
	if (is_leaf(root)) {
		printf("		%c -> ", root->ch);
		print_array(codes, top);
	}
}
 
//순회
void inorder(HeapType* h,int index) {
	if ((h->heap[index * 2].key)!=NULL) inorder(h, index * 2);
	printf("%c ", h->heap[index].ch);
	if ((h->heap[index * 2+1].key)!=NULL) inorder(h, index * 2 + 1);
}
 
//허프만 코드
void huffman_tree(int freq[], char ch_list[], int n)
{
	int i;
	TreeNode* node, * x;
	HeapType* heap;
	element e, e1, e2;
	int codes[100];
	int top = 0,index =1;
 
	heap = create();
	init(heap->heap);
 
	printf("최소 히프를 루트부터 자손까지 순차적 넘버링과 중위순회 방식으로 출력하면...\n");
	for (i = 0; i < n; i++) {
		node = make_tree(NULL, NULL);
		e.ch = node->ch = ch_list[i];
		e.key = node->weight = freq[i];
		e.ptree = node;
		insert_min_heap(heap, e);
		//순차적 넘버링 출력
		for (int j = 0; j <= i; j++)
			printf("%c ", heap->heap[j + 1].ch);
		printf("\n");
 
		inorder(heap, index);
		printf("\n");
	}
		inorder(heap, index);
 
	for (i = 1; i < n; i++) {
		// 최소값을 가지는 두개의 노드를 삭제
		e1 = delete_min_heap(heap);
		e2 = delete_min_heap(heap);
		// 두개의 노드를 합친다.
		x = make_tree(e1.ptree, e2.ptree);
		e.key = x->weight = e1.key + e2.key;
		//여기서 W-n부여 x->key=i; 이러면 부여될거같음..
		e.ptree = x;
		insert_min_heap(heap, e);
	}
 
	e = delete_min_heap(heap); // 최종 트리
	printf("\n\n*******************************************\n\n");
	printf("	    	허프만(가변길이) 코드 \n");
	print_codes(e.ptree, codes, top);
	printf("\n*******************************************\n\n");
	destroy_tree(e.ptree);
 
	free(heap);
}
 
int main() {
	int SIZE=0,sum=0;
	printf("**************** 허프만 트리 생성 ***************\n\n");
	printf("입력할 문자 개수 : ");
	scanf_s("%d",&SIZE);
 
	char *ch = (char*)malloc(sizeof(char)* SIZE);
	int *freq = (int*)malloc(sizeof(int) * SIZE);
 
 
	//문자정보 입력 및 문자빈도수합 계산
	for (int i = 0; i < SIZE; i++) {
		printf("\n문자정보 -> ");
		scanf_s(" %c", &ch[i]);
		for (int j = 0; j < i; j++) 
			if (ch[j] == ch[i])
				ch[i] = NULL;
		if (ch[i] == NULL) {
			printf("잘못입력했슴둥\n"); i--;  continue;
		}
		printf("빈도수 정보 -> ");
		scanf_s(" %d", &freq[i]);
		sum += freq[i];
	}
	printf("문자 개수 : %d		문자 빈도수 합 : %d\n", SIZE, sum);
	huffman_tree(freq, ch, SIZE);
	free(ch);
	free(freq);
	return 0;
}