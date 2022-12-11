#pragma once
#include <stdio.h>
#include <stdlib.h>

typedef int BTDataType;
typedef struct BinaryTreeNode
{
	BTDataType data;
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
}BTNode;

void PrevOrder(BTNode* root);

void InOrder(BTNode* root);

void PostOrder(BTNode* root);

int TreeSize(BTNode* root);

int TreeLeafSize(BTNode* root);

int TreeHeight(BTNode* root);

int TreeKLevelSize(BTNode* root, int k);

BTNode* BuyBTNode(BTDataType x);