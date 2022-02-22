/*
* 题目1:输入a,b的值，交换a,b的值
* author:刘凯源
*/
#include<stdio.h>
int main()
{
	int a, b;
	printf("请输入a,b的值\n");
	scanf_s("%d %d", &a, &b);
	int tmp;
	//利用临时变量记录a的值
	tmp = a;
	a = b;
	b = tmp;
	printf("交换后a = %d,b = %d\n", a, b);
	return 0;
}