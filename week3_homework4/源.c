/*
* 题目4：输入年份月份，输出这个月多少天
* author：刘凯源
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//记录每月天数（2月特判）
int DAY[] = { 0, 31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//判断是不是闰年
inline int judge(int x)
{
	return x % 100 == 0 ? x % 400 == 0 : x % 4 == 0;
}
int main()
{
	int y, m;
	puts("请输入年月，用空格分隔");
	if(scanf("%d %d", &y, &m) == EOF)
		return 1;
	if (m == 2)
		printf("这个月有%d天", judge(y) ? 29 : 28);
	else
		printf("这个月有%d天", DAY[m]);
}