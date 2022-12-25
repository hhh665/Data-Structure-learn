#define _CRT_SECURE_NO_WARNINGS 1
#include "BinaryTree.h"

//int main()
//{
	//BTNode* n1 = BuyBTNode(1);
	//BTNode* n2 = BuyBTNode(2);
	//BTNode* n3 = BuyBTNode(3);
	//BTNode* n4 = BuyBTNode(4);
	//BTNode* n5 = BuyBTNode(5);
	//BTNode* n6 = BuyBTNode(6);
	//BTNode* n7 = BuyBTNode(4);
	//n1->left = n2;
	//n1->right = n4;
	//n2->left = n3;
	//n4->left = n5;
	//n4->right = n6;
	//n3->left = n7;
//	PrevOrder(n1);
//	printf("\n");
//	InOrder(n1);
//	printf("\n");
//	PostOrder(n1);
//	printf("\n");
//	int size = TreeSize(n1);
//	printf("%d\n", size);
//	int leafsize = TreeLeafSize(n1);
//	printf("%d\n", leafsize);
//	int height = TreeHeight(n1);
//	printf("%d\n", height);
//	int n = TreeKLevelSize(n1, 3);
//	printf("%d\n", n);
//	return 0;
//}
//bool isSameTree(BTNode* p, BTNode* q) {
//    if (p == NULL && q == NULL)
//    {
//        return true;
//    }
//    else if (p == NULL && q)
//    {
//        return false;
//    }
//    else if (p && q == NULL)
//    {
//        return false;
//    }
//    else if (p && q)
//    {
//        if (p->data == q->data)
//            return true && isSameTree(p->left, q->right) && isSameTree(p->right, q->left);
//    }
//    return false;
//}
int main()
{
	/*BTNode* n1 = BuyBTNode(1);
	BTNode* n2 = BuyBTNode(2);
	BTNode* n3 = BuyBTNode(3);
	n1->left = n2;
	n1->right = n3;
	bool ret = isSameTree(n1,n1);
	return 0;*/
	char arr[20] = "123##4#5###";
	int n = 20;
	int i = 0;
	BTNode* root = BinaryTreeCreate(arr, n, &i);
	LevelOrder(root);
	bool ret = BinaryTreeComplete(root);
}