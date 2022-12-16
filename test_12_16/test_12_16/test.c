#define _CRT_SECURE_NO_WARNINGS 1

typedef int TDataType;
struct Node
{
	struct Node* child;		//第一个孩子节点
	struct Node* brother;	//指向其下一个兄弟节点
	TDataType data;			//节点中的数据域
};

typedef int BTDataType;
//二叉链
struct BinaryTreeNode
{
	struct BinaryTreeNode* left;	//指向当前节点左孩子
	struct BinaryTreeNode* right;	//指向当前节点右孩子
	BTDataType data;				//当前节点值域
};

//三叉链
struct BinaryTreeNode
{
	struct BinaryTreeNode* parent;	//指向当前节点的双亲
	struct BinaryTreeNode* left;	//指向当前节点左孩子
	struct BinaryTreeNode* right;	//指向当前节点右孩子
	BTDataType data;				//当前节点值域
};