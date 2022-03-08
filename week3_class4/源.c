#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int DAY[] = { 0, 31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
inline int judge(int x)
{
	return x % 100 == 0 ? x % 400 == 0 : x % 4 == 0;
}
int main()
{
	int y, m, d;
	int day = 0;
	if(scanf("%d %d %d", &y, &m, &d) == EOF)
		return 1;
	for (int i = 2000; i < y; ++i)
	{
		day += judge(i) ? 366 : 365;
	}
	int ye = judge(y);
	for (int i = 1; i < m; ++i)
	{
		if (i == 2)
			day += ye ? 28 : 29;
		else
			day += DAY[i];
	}
	day += d;
	day %= 5;
	printf("%d", day);
	puts(day < 3 ? "´òÓã" : "É¹Íø");
}