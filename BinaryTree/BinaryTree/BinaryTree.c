#define _CRT_SECURE_NO_WARNINGS 1

#include "BinaryTree.h"
#include "Queue.h"
BTNode* BuyBTNode(BTDataType x)
{
	BTNode* node = (BTNode*)malloc(sizeof(BTNode));
	if (node == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}
	node->data = x;
	node->left = node->right = NULL;
	return node;
}

BTNode* BinaryTreeCreate(BTDataType* a, int n, int* pi)
{
	if (a[*pi] == '#')
	{
		(*pi)++;
		return NULL;
	}
	BTNode* node = BuyBTNode(a[(*pi)++]);
	node->left = BinaryTreeCreate(a, n, pi);
	node->right = BinaryTreeCreate(a, n, pi);
	return node;
}

void BinaryTreeDestroy(BTNode* root)
{
	if (root == NULL)
	{
		return;
	}
	BinaryTreeDestroy(root->left);
	BinaryTreeDestroy(root->right);
	free(root);
}

//bool isUnivalTree(BTNode* root) 
//{
//	if (root->left == NULL && root->right == NULL)
//	{
//		return true;
//	}
//	else if (root->left == NULL && root->right)
//	{
//		if (root->data == root->right->data)
//			return true && isUnivalTree(root->right);
//	}
//	else if (root->left && root->right == NULL)
//	{
//		if (root->data == root->left->data)
//			return true && isUnivalTree(root->left);
//	}
//	else if (root->left && root->right)
//	{
//		if (root->data == root->left->data && root->data == root->right->data)
//			return true && (isUnivalTree(root->left) && isUnivalTree(root->right));
//	}
//	return false;
//}

void PrevOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	printf("%d ", root->data);
	PrevOrder(root->left);
	PrevOrder(root->right);
}

void InOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	PrevOrder(root->left);
	printf("%d ", root->data);
	PrevOrder(root->right);
}

void PostOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	PrevOrder(root->left);
	PrevOrder(root->right);
	printf("%d ", root->data);
}

int TreeSize(BTNode* root)
{
	return root == NULL ? 0 :
		TreeSize(root->left) + TreeSize(root->right) + 1;
}

int TreeLeafSize(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	else
	{
		return root->left == NULL && root->right == NULL ? 1 :
			TreeLeafSize(root->left) + TreeLeafSize(root->right);
	}
}

int TreeHeight(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	else
	{
		int leftH = TreeHeight(root->left);
		int rightH = TreeHeight(root->right);
		return leftH > rightH ? leftH + 1 : rightH + 1;
	}
}

int TreeKLevelSize(BTNode* root, int k)
{
	if (root == NULL)
	{
		return 0;
	}
	if (k == 1)
	{
		return 1;
	}
	return TreeKLevelSize(root->left, k - 1)
		 + TreeKLevelSize(root->right, k - 1);
}

BTNode* TreeFind(BTNode* root, BTDataType x)
{
	if (root == NULL)
	{
		return NULL;
	}
	if (root->data == x)
	{
		return root;
	}
	BTNode* ret1 = TreeFind(root->left, x);
	if (ret1)
	{
		return ret1;
	}
	BTNode* ret2 = TreeFind(root->left, x);
	if (ret2)
	{
		return ret2;
	}
	return NULL;
}

void LevelOrder(BTNode* root)
{
	Queue pq;
	QueueInit(&pq);
	int levelsize = 0;
	if (root)
	{
		QueuePush(&pq, root);
		levelsize = 1;
	}
	while (!QueueEmpty(&pq))
	{
		while (levelsize--)
		{
			BTNode* front = QueueFront(&pq);
			printf("%c ", front->data);
			QueuePop(&pq);
			if (front->left)
			{
				QueuePush(&pq, front->left);
			}
			if (front->right)
			{
				QueuePush(&pq, front->right);
			}
		}
		printf("\n");
		levelsize = QueueSize(&pq);
	}
	printf("\n");
	QueueDestroy(&pq);
}

bool BinaryTreeComplete(BTNode* root)
{
	Queue pq;
	QueueInit(&pq);
	if (root)
	{
		QueuePush(&pq, root);
	}
	while (!QueueEmpty(&pq))
	{
		BTNode* front = QueueFront(&pq);
		QueuePop(&pq);
		if (front == NULL)
		{
			break;
		}
		else
		{
			QueuePush(&pq, front->left);
			QueuePush(&pq, front->right);
		}
	}
	while (!QueueEmpty(&pq))
	{
		BTNode* front = QueueFront(&pq);
		QueuePop(&pq);
		if (front != NULL)
		{
			QueueDestroy(&pq);
			return false;
		}
	}
	QueueDestroy(&pq);
	return true;
}