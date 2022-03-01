/*
* 题目1：输入3个字符，按ASCLL码值从大到小的顺序顺序输出三个字符
* author：刘凯源
*/
#define _CRT_SECURE_NO_WARNINGS //用于取消scanf的报错
#include<stdio.h>
//交换a,b的值
void swap(char* a, char* b)
{
	char tmp = *a;
	*a = *b;
	*b = tmp;
}
//排序
void sort(char a[])
{
	for (int i = 2; i <= 3; ++i)
	{
		for (int j = i - 1; j >= 1; --j)
		{
			if (a[j] < a[j + 1])
				swap(&a[j], &a[j + 1]);
		}
	}
}
int main()
{
	char a[5];
	puts("输入三个字符，以逗号分隔");
	if (scanf("%c,%c,%c", &a[1], &a[2], &a[3]) == EOF)
		return 1;
	sort(a);
	puts("排序后的字符是：");
	for (int i = 1; i <= 3; ++i)
		printf("%c ", a[i]);
}
