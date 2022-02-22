/*
* 题目2:输入圆的半径，输出圆的周长和面积 pi = 3.14
* author:刘凯源
*/
#include<stdio.h>
const double pi = 3.14;
int main()
{
	double r;
	printf("请输入圆的半径:");
	scanf_s("%lf", &r);
	double d = 2 * r * pi;
	double s = pi * r * r;
	printf("圆的周长是:%lf,圆的面积是:%lf\n",(double)d,(double)s);
}