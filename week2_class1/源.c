#include<stdio.h>
int main()
{
	puts("input a number");
	int num = 0;
	scanf_s("%d", &num);
	double num_double = num;
	char num_c = num;
	printf("%d\n%f\n%c\n", num, num_double, num_c);
}