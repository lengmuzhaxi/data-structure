#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
typedef int BTDatatype;
typedef struct BinaryTreeNode
{
	BTDatatype data;
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
}BTNode;
BTNode*BuyNode(BTDatatype x)
{
	BTNode* node = (BTNode*)malloc(sizeof(BTNode));
	if (node == NULL)
	{
		perror("malloc fail");
		return NULL;
	}
	node->data = x;
	node->left = NULL;
	node->right = NULL;
	return node;
}
BTNode* CreatBinaryTree()
{
	BTNode* node1 = BuyNode(1);
	BTNode* node2 = BuyNode(2);
	BTNode* node3 = BuyNode(3);
	BTNode* node4 = BuyNode(4);
	BTNode* node5 = BuyNode(5);
	BTNode* node6 = BuyNode(6);
	node1->left = node2;
	node1->right = node4;
	node2->left = node3;
	node4->left = node5;
	node4->right = node6;
	return node1;
}
void PrevOrder(BTNode* root)//Ç°Ðò
{
	if (root == NULL)
	{
		printf("N ");
		return;
	}
	printf("%d ", root->data);
	PrevOrder(root->left);
	PrevOrder(root->right);
}
void InOrder(BTNode* root)//ÖÐÐò
{
	if (root == NULL)
	{
		printf("N ");
		return;
	}
	InOrder(root->left);
	printf("%d ", root->data);
	InOrder(root->right);
}
void PostOrder(BTNode* root)//ºóÐò
{
	if (root == NULL)
	{
		printf("N ");
		return;
	}
	PostOrder(root->left);
	PostOrder(root->right);
	printf("%d ", root->data);
}
int main()
{
	BTNode* root = CreatBinaryTree();
	PrevOrder(root);
	printf("\n");
	InOrder(root);
	printf("\n");
	PostOrder(root);
	printf("\n");
	return 0;
}
