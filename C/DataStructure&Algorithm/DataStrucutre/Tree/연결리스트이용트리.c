#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
typedef struct TreeNode{
	char data;
	struct TreeNode* left; // node 의 주소를 가지고 있음
	struct TreeNode* right; // node 의 주소를 가지고 있음
} TreeNode;
/*     -
     /   \
    *     /
   / \   / \ 
  A   B  C  D     */
TreeNode* makeRootNode(char data, TreeNode* leftNode, TreeNode* rightNode)
{
	TreeNode* root = malloc(sizeof(TreeNode)); //노드 동적할당
	root -> data = data;
	root -> left = leftNode; // 80 그룸에서
	root -> right = rightNode; // 100 그룸에서
	return root;
}

void preorder(TreeNode* root)
{
	if(root != NULL){
		printf("%c",root->data); // 루트 직고 왼쪽
		preorder(root->left);
		preorder(root->right);
	}
}

void inorder(TreeNode* root)
{
	if(root != NULL)
	{
		inorder(root->left);
		printf("%c",root->data);
		inorder(root->right);
	}
}

void postorder(TreeNode* root)
{
	if(root != NULL)
	{
		postorder(root->left);
		postorder(root->right);
		printf("%c",root->data);
	}
}

void main()
{
	TreeNode* n7 = makeRootNode('D', NULL, NULL);
	TreeNode* n6 = makeRootNode('C', NULL, NULL);
	TreeNode* n5 = makeRootNode('B', NULL, NULL);
	TreeNode* n4 = makeRootNode('A', NULL, NULL);
	TreeNode* n3 = makeRootNode('/', n6, n7);
	TreeNode* n2 = makeRootNode('*', n4, n5);
	TreeNode* n1 = makeRootNode('-', n2, n3);

	printf("\n preorder  : ");
	preorder(n1);
	
	printf("\n inorder   : ");
	inorder(n1);
	
	printf("\n postorder : ");
	postorder(n1);
	free(n1);free(n2);free(n3);
	free(n4);free(n5);free(n6);
	free(n7); // 안하면 에러
	
}