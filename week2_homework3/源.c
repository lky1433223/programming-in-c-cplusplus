/*
* ��Ŀ3����������a���ж��ܷ�3��7����
* author������Դ
*/
#include<stdio.h>
int main()
{
	long long a;
	puts("Input the number");
	scanf_s("%lld", &a);
	puts((a % 3 == 0 && a % 7 == 0) ? "��������" : "����������");
}