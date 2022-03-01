#include<stdio.h>
char c;
int main()
{
	puts("input a charactor");
	if(scanf("%c", &c) != EOF)
		return 1;
	c += 38;
	printf("%c", c);
}