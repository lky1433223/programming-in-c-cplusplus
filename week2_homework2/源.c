/*
* ��Ŀ2���Ӽ�����������������Ѿ�����ʱ��
* author������Դ
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	long long a = 0;
	if (scanf("%lld", &a) == EOF)
		return 1;
	--a;//����������һ��
	long long d = a / 86400; //����������һ��86400s
	a %= 86400;
	long long h = a / 3600; //����Сʱ��
	a %= 3600;
	long long m = a / 60; //�������
	a %= 60;
	long long s = a; //����ʣ�µ�����
	printf("�Ѿ���ȥ��%lld�죬���ڵ�ʱ����%02lld:%02lld:%02lld", d, h, m, s);
}