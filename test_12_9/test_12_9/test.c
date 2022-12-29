#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//
//extern int num;
//
//int main()
//{
//	printf("%d\n", num);
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
//
//char* replaceSpaces(char* S, int length)
//{
//    int n = 0;
//    for (int i = 0; i < length; i++)
//    {
//        if (S[i] == ' ')
//        {
//            n++;
//        }
//    }
//    if (n == 0)
//    {
//        return S;
//    }
//    int newlength = length + n * 2;
//    S[newlength] = '\0';
//    newlength--;
//    for (int i = length - 1; i >= 0; i--)
//    {
//        if (S[i] == ' ')
//        {
//            S[newlength--] = '0';
//            S[newlength--] = '2';
//            S[newlength--] = '%';
//        }
//        else
//        {
//            S[newlength--] = S[i];
//        }
//    }
//    return S;
//}
//
//int main()
//{
//    char a[100] = "Mr John Smith    ";
//    char *s = replaceSpaces(a, 13);
//    printf("%s\n", s);
//    return 0;
//}

//int main()
//{
//	char arr[2][4];
//	strcpy(arr[0], "you");
//	strcpy(arr[1], "me");
//	arr[0][3] = '&';
//	printf("%s \n", arr);
//	return 0;
//}

struct s
{
	int* p;
	int a;
	char b;
};
enum weekday
{
	sun,
	mon = 3,
	tue,
	wed
};

int main()
{
	enum weekday workday;
	workday = wed;
	printf("%d\n", workday);
}