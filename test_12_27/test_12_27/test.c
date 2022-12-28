#include <stdio.h>
int f(int** p)
{
	printf("%d\n", *(*p));
}

int main()
{
	int a[4] = { 1,2,3,4 };
	int b[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	int* q[3] = { b[0],b[1],b[2] };
	f(b);
	return 0;
}