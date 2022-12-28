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

//int num = 1000;//全局变量
//
//int main()
//{
//	int num = 10;//局部变量
//	//局部变量和全局变量名字冲突的情况下，局部优先
//	printf("%d\n", num);//?
//
//	return 0;
//}

//写一个代码，求2个整数的和
//printf函数是输出
//scanf函数是输入

int main()
{
	int num1 = 0;
	int num2 = 0;//初始化
	int sum = 0;

	//输入2个整数
	scanf("%d %d", &num1, &num2);
	
	//相加
	sum = num1 + num2;
	
	//输出
	printf("%d\n", sum);
	
	return 0;
}