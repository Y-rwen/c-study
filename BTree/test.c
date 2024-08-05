#define   _CRT_SECURE_NO_WARNINGS

#include "Queue.h"

typedef char BTDataType;
typedef struct BinaryTreeNode
{
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
	BTDataType data;
}BTNode;

//����
void PrevOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	printf("%c ", root->data);
	PrevOrder(root->left);
	PrevOrder(root->right);
}
//����
void InOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	InOrder(root->left);
	printf("%c ", root->data);
	InOrder(root->right);
}
//����
void PostOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	PostOrder(root->left);
	PostOrder(root->right);
	printf("%c ", root->data);
}
//���Ĵ�С
int TreeSize(BTNode* root)
{
	return root == NULL ? 0 : TreeSize(root->left) + TreeSize(root->right) + 1;
}
//Ҷ�ӵĴ�С
int TreeLeafSize(BTNode* root)
{
	if (root == NULL)
		return 0;
	if (root->left == NULL && root->right == NULL)
		return 1;
	return TreeLeafSize(root->left) + TreeLeafSize(root->right);
}
//���ĸ߶�
void LevelOrder(BTNode* root)
{
	Queue q;
	QueueInit(&q);
	if (root)
		QueuePush(&q, root);
	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);
		QueuePop(&q);
		printf("%c", front->data);
		if (front->left)
		{
			QueuePush(&q, front->left);
		}
		if (front->right)
		{
			QueuePush(&q, front->right);
		}
	}
	printf("\n");
	QueueDestory(&q);
}

int main()
{
	BTNode* A = (BTNode*)malloc(sizeof(BTNode));	
	A->data = 'A';	
	A->left = NULL;	
	A->right = NULL;	
	BTNode* B = (BTNode*)malloc(sizeof(BTNode));	
	B->data = 'B';	
	B->left = NULL;	
	B->right = NULL;	
	BTNode* C = (BTNode*)malloc(sizeof(BTNode));	
	C->data = 'C';
	C->left = NULL;
	C->right = NULL;
	BTNode* D = (BTNode*)malloc(sizeof(BTNode));
	D->data = 'D';
	D->left = NULL;
	D->right = NULL;
	BTNode* E = (BTNode*)malloc(sizeof(BTNode));
	E->data = 'E';
	E->left = NULL;
	E->right = NULL;
	A->left = B;
	A->right = C;
	B->left = D;
	B->right = E;
	PrevOrder(A);
	printf("\n");
	InOrder(A);
	printf("\n");
	PostOrder(A);
	printf("\n");
	return 0;
}