#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	unsigned long long x;
	scanf("%lld", &x);
	for (int i = 62; i >= 0; --i)
	{
		putchar('0' + ((x >> i) & 1));
	}
}
//