#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	printf("Hello World!");
//	return 0;
//}




//
//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}

//int num = 1000;//ȫ�ֱ���
//
//int main()
//{
//	int num = 10;//�ֲ�����
//	//�ֲ�������ȫ�ֱ������ֳ�ͻ������£��ֲ�����
//	printf("%d\n", num);//?
//
//	return 0;
//}

//дһ�����룬��2�������ĺ�
//printf���������
//scanf����������

int main()
{
	int num1 = 0;
	int num2 = 0;//��ʼ��
	int sum = 0;

	//����2������
	scanf("%d %d", &num1, &num2);
	
	//���
	sum = num1 + num2;
	
	//���
	printf("%d\n", sum);
	
	return 0;
}