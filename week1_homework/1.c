/*
* ��Ŀ1:����a,b��ֵ������a,b��ֵ
* author:����Դ
*/
#include<stdio.h>
int main()
{
	int a, b;
	printf("������a,b��ֵ\n");
	scanf_s("%d %d", &a, &b);
	int tmp;
	//������ʱ������¼a��ֵ
	tmp = a;
	a = b;
	b = tmp;
	printf("������a = %d,b = %d\n", a, b);
	return 0;
}