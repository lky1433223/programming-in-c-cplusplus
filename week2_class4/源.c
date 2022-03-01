#include<stdio.h>
const double YEAR = 3.156e7;
int main()
{
	int year = 0;
	puts("ÊäÈëÄêÁä");
	scanf_s("%d", &year);
	double sec = year * YEAR, minu = year * YEAR / 3, hou = year * YEAR / 3600;
	printf("second:%.3lf\nminute:%.3lf\nhour:%.3lf\n", sec, minu, hou);
}