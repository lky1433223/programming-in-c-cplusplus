/*
* ��Ŀ1������3���ַ�����ASCLL��ֵ�Ӵ�С��˳��˳����������ַ�
* author������Դ
*/
#define _CRT_SECURE_NO_WARNINGS //����ȡ��scanf�ı���
#include<stdio.h>
//����a,b��ֵ
void swap(char* a, char* b)
{
	char tmp = *a;
	*a = *b;
	*b = tmp;
}
//��������
void sort(char a[])
{
	for (int i = 2; i <= 3; ++i)
	{
		for (int j = i - 1; j >= 1; --j)
		{
			if (a[j] < a[j + 1])
				swap(&a[j], &a[j + 1]);
			else
				break;
		}
	}
}
int main()
{
	char a[5];
	puts("���������ַ����Զ��ŷָ�");
	if (scanf("%c,%c,%c", &a[1], &a[2], &a[3]) == EOF)
		return 1;
	sort(a);
	puts("�������ַ��ǣ�");
	for (int i = 1; i <= 3; ++i)
		printf("%c ", a[i]);
}
