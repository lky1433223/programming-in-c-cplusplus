#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
const double pie = 3.14;
int main()
{
	//double r;
	//scanf("%lf", &r);
	//printf("%.3lf", r * r * pie);
	//������򽻻�a,b
	int a, b;
	scanf("%d %d", &a, &b);
	a ^= b;
	b ^= a;
	a ^= b;
	//�ж��ǲ���2^x
	int x;
	int cnt = 0;
	scanf("%d", &x);
	puts((x & (x - 1)) == 0 ? "yes" : "no");
	while (x)
	{
		cnt += (x & 1);
		x >>= 1;
	}
	puts(cnt == 1 ? "yes" : "no");
}