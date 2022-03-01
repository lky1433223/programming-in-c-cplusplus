#include<stdio.h>
int main()
{
	puts("Input the ASCLL");
	int a;
	scanf_s("%d", &a);
	char c = a + 1;
	printf("%d %c", a, c);
}