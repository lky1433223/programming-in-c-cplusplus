/*
* ��Ŀ1�����ӳ��ң�ÿ��Ե�ǰ������x/2+1������n��ʣ1�������ʼ
* author������Դ
*/
/*
* ��ʽ�ӣ�y = x - (x/2 + 1) -> x = (y + 1) * 2
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	puts("����������");
	int n;
	if(scanf("%d", &n)==EOF)
		return 1;
	unsigned long long ans = 1;
	for (int i = 1; i < n; ++i)
		ans = (ans + 1) * 2;
	printf("��һ��ժ��%lld������", ans);
}