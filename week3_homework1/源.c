/*
* ��Ŀ1������ <60:D 60<=x<80:C 80<=x<90:B 90<=x:A
* author������Դ
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int x;
	puts("���������");
	if(scanf("%d", &x) == EOF)
		return 1;
	if (x < 60)
		putchar('D');
	else if (x >= 60 && x < 80)
		putchar('C');
	else if (x >= 80 && x < 90)
		putchar('B');
	else if (x >= 90)
		putchar('A');
	else
		puts("�������");
}