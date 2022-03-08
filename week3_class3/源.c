#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int x;
	scanf("%d", &x);
	int tmp = x;
	int sum = 0;
	while (tmp)
	{
		int d = tmp % 10;
		sum += d * d * d;
		tmp /= 10;
	}
	puts(sum == x ? "yes" : "no");
}