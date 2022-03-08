/*
* 题目2：平方数且两位数字相同 为新完全平方数
* author：刘凯源
*/
#define _CRT_SECURE_NO_WARNINGS
#define max(a, b) (a > b ? a : b)
#include<stdio.h>
#include<math.h>
int cnt[11];
int main()
{
	//分别记录是不是完全平方数，是不是两位数字相同
	int b1, b2;
	int x;
	puts("请输入数字(100~999)");
	if(scanf("%d", &x) == EOF)
		return 1;
	//判断是不是完全平方数 sqrt转int下取整，不是完全平方数乘回去不是原数
	int tmp = sqrt(x);
	b1 = (tmp * tmp == x);
	//拆位，记录每一位数字出现个数
	while (x)
	{
		int tmp = x % 10;
		++cnt[tmp];
		x /= 10;
	}
	//记录出现最多的数字个数
	int mx = 0;
	for (int i = 0; i <= 9; ++i)
		mx = max(cnt[i], mx);
	b2 = (mx == 2);
	puts(b1 && b2 ? "是新完全平方数" : "不是新完全平方数");
}