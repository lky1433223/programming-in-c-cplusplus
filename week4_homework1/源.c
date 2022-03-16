/*
* 题目1：猴子吃桃，每天吃当前天数的x/2+1个，第n天剩1个，求初始
* author：刘凯源
*/
/*
* 推式子，y = x - (x/2 + 1) -> x = (y + 1) * 2
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	puts("请输入天数");
	int n;
	if(scanf("%d", &n)==EOF)
		return 1;
	unsigned long long ans = 1;
	for (int i = 1; i < n; ++i)
		ans = (ans + 1) * 2;
	printf("第一天摘了%lld个桃子", ans);
}