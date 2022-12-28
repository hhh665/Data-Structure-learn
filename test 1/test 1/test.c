#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
//int main()
//{
//	char* p = "asdasdasd";
//	char a[10];
//	scanf("%s", p);
//	/*char s[] = "china";
//	p = s;*/
//	printf("%s\n", p);
//}

//int main()
//{
//    int c;
//    puts("Enter text. Include a dot ('.') in a sentence to exit:");
//    do {
//        c = getchar();
//        putchar(c);
//    } while (c != '.');
//    return 0;
//}
bool canPermutePalindrome(char* s)
{
    int v = 0;
    int n = strlen(s);
    int i = 0;
    for (i = 0; i < n; i++)
    {
        int n1 = s[i] - 'a';
        if (n1 >= 0 && n1 <= 25)
        {
            v = v ^ n1;
        }
        int n2 = s[i] - 'A';
        if (n2 >= 0 && n2 <= 25)
        {
            v = v ^ n2;
        }
    }
    if (v == 0)
    {
        return true;
    }
    return false;
}
int main()
{
    char str[] = "tacotac";
    bool ret = canPermutePalindrome(str);
    return 0;
}