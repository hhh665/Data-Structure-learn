#define _CRT_SECURE_NO_WARNINGS 1

typedef int TDataType;
struct Node
{
	struct Node* child;		//��һ�����ӽڵ�
	struct Node* brother;	//ָ������һ���ֵܽڵ�
	TDataType data;			//�ڵ��е�������
};

typedef int BTDataType;
//������
struct BinaryTreeNode
{
	struct BinaryTreeNode* left;	//ָ��ǰ�ڵ�����
	struct BinaryTreeNode* right;	//ָ��ǰ�ڵ��Һ���
	BTDataType data;				//��ǰ�ڵ�ֵ��
};

//������
struct BinaryTreeNode
{
	struct BinaryTreeNode* parent;	//ָ��ǰ�ڵ��˫��
	struct BinaryTreeNode* left;	//ָ��ǰ�ڵ�����
	struct BinaryTreeNode* right;	//ָ��ǰ�ڵ��Һ���
	BTDataType data;				//��ǰ�ڵ�ֵ��
};