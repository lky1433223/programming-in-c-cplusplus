/*
* 题目2：打印所有小于256的平方是回文数的数
* author：刘凯源
*/
#include<stdio.h>
#include<string.h>
//判断是不是回文数
int judge(int x)
{
	int s[10];
	int pot = 0;
	//拆位
	while (x)
	{
		int tmp = x % 10;
		s[++pot] = tmp;
		x /= 10;
	}
	//头尾双指针扫
	for (int i = 1, j = pot; i < j; ++i, --j)
	{
		if (s[i] != s[j])
			return 0;
	}
	return 1;
}
int main()
{
	puts("0-256间平方是回文数的数有：");
	for (int i = 0; i <= 256; ++i)
	{
		if (judge(i * i))
			printf("%d\n", i);
	}
}