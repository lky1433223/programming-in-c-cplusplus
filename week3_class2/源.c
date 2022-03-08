#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int x;
	scanf("%d", &x);
	puts(x & 1 ? "yes" : "no");
}