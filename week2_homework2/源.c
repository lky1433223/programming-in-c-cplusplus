/*
* 题目2：从键盘输入秒数，输出已经历的时间
* author：刘凯源
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	long long a = 0;
	if (scanf("%lld", &a) == EOF)
		return 1;
	--a;//根据题意会减一秒
	long long d = a / 86400; //计算天数，一天86400s
	a %= 86400;
	long long h = a / 3600; //计算小时数
	a %= 3600;
	long long m = a / 60; //计算分钟
	a %= 60;
	long long s = a; //余数剩下的秒数
	printf("已经过去了%lld天，现在的时间是%02lld:%02lld:%02lld", d, h, m, s);
}