/*
* 题目3：输入数字a，判断能否被3和7整除
* author：刘凯源
*/
#include<stdio.h>
int main()
{
	long long a;
	puts("Input the number");
	scanf_s("%lld", &a);
	puts((a % 3 == 0 && a % 7 == 0) ? "可以整除" : "不可以整除");
}