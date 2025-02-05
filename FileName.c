#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a = 10;
	int* p = &a;
	int b = 20;
	printf("%d", *p);
	return 0;
}