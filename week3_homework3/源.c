/*
* 题目3：能否构成三角形，是不是等腰三角形/等边三角形，计算面积
* author：刘凯源
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//判断是不是三角形,两边之和大于第三边，两边之差小于第三边
int judge_is_triangle(double a, double b, double c)
{
	return a + b > c && fabs(a - b) < c;
}
//判断是不是特殊三角形
int judge_is_special(double a, double b, double c)
{
	if (a == b && a == c)
		return puts("是等边三角形");
	if (a == c || a == b || b == c)
		return puts("是等腰三角形");
	return puts("只是普通的三角形");
}
//计算面积
double S(double a, double b, double c)
{
	double p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}
int main()
{
	double a, b, c;
	puts("请输入三角形的三条边，用空格分隔");
	if (scanf("%lf %lf %lf", &a, &b, &c) == EOF)
		return -1;
	if (!judge_is_triangle(a, b, c))
		return puts("这不是三角形");
	judge_is_special(a, b, c);
	printf("三角形的面积是%.3lf\n", S(a, b, c));
}