#define _CRT_SECURE_NO_WARNINGS 1
#include "BinaryTree.h"

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