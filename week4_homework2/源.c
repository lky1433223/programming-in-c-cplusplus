/*
* ��Ŀ2����ӡ����С��256��ƽ���ǻ���������
* author������Դ
*/
#include<stdio.h>
#include<string.h>
//�ж��ǲ��ǻ�����
int judge(int x)
{
	int s[10];
	int pot = 0;
	//��λ
	while (x)
	{
		int tmp = x % 10;
		s[++pot] = tmp;
		x /= 10;
	}
	//ͷβ˫ָ��ɨ
	for (int i = 1, j = pot; i < j; ++i, --j)
	{
		if (s[i] != s[j])
			return 0;
	}
	return 1;
}
int main()
{
	puts("0-256��ƽ���ǻ����������У�");
	for (int i = 0; i <= 256; ++i)
	{
		if (judge(i * i))
			printf("%d\n", i);
	}
}