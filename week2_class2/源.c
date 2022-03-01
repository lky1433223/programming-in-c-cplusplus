#include<stdio.h>
char c;
int main()
{
	puts("input a charactor");
	scanf_s("%c", &c);
	c += 38;
	printf("%c", c);
}