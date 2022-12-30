#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <math.h>
//int main()
//{
//
//	int a = getchar();
//	putchar(a);
//
//	return 0;
//}

//union D
//{
//	int d1;
//	float d2;
//}d;
//
//int main()
//{
//	d.d2 = 10;
//	printf("%zu\n", sizeof(d));
//	printf("%p\n", &(d.d1));
//	printf("%p\n", &(d.d2));
//	printf("%p\n", &d);
//	printf("%f\n", d.d2);
//	printf("%d\n", d.d1);
//	return 0;
//}

//char* compressString(char* S)
//{
//    if (S == "")
//    {
//        return S;
//    }
//    int n = strlen(S);
//    int i = 0;
//    int count = 1;
//    for (i = 1; i < n; i++)
//    {
//        if (S[i] != S[i - 1])
//        {
//            count++;
//        }
//    }
//    char s[8];
//    if (2 * count > n)
//    {
//        return S;
//    }
//    else
//    {
//        char s1[4];
//        char s2[4];
//        int x1 = 0;
//        int x2 = 0;
//        s1[x1++] = S[0];
//        for (i = 1; i < n; i++)
//        {
//            if (S[i] != S[i - 1])
//            {
//                s1[x1++] = S[i];
//            }
//        }
//        int num = 0;
//        for (i = 0; i < n; i++)
//        {
//            if (i == n - 1)
//            {
//                num++;
//                s2[x2++] = num + 48;
//                num = 0;
//            }
//            else
//            {
//                if (S[i] != S[i + 1])
//                {
//                    num++;
//                    s2[x2++] = num + 48;
//                    num = 0;
//                }
//                else
//                {
//                    num++;
//                }
//            }
//        }
//        x1 = 0;
//        x2 = 0;
//        for (i = 0; i < 2 * count; i++)
//        {
//            if (i % 2 == 0)
//            {
//                s[i] = s1[x1++];
//            }
//            else
//            {
//                s[i] = s2[x2++];
//            }
//        }
//    }
//    return s;
//}
char* compressString(char* S)
{
    int len = strlen(S);
    if (len <= 2)
    {
        return S;
    }
    char* str = (char*)malloc(sizeof(char) * len * 2);
    int i = 0, j = 0, k = 0;
    for (i = 0; i < len; i = j)
    {
        str[k++] = S[i];
        while (j < len && S[i] == S[j])
        {
            j++;
        }
        int num = j - i;
        int c = log10(num) + 1;
        k = k + c - 1;
        while (num)
        {
            str[k--] = num % 10 + '0';
            num /= 10;
        }
        k = k + c + 1;
    }
    str[k] = '\0';
    if (strlen(str) < len)
    {
        return str;
    }
    return S;
}
int main()
{
    char* S = "aabcccccaaa";
    char* sd = "1s2a5ad4d";
    char* s = compressString(S);
    printf("%s\n", s);
}