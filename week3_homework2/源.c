/*
* ��Ŀ2��ƽ��������λ������ͬ Ϊ����ȫƽ����
* author������Դ
*/
#define _CRT_SECURE_NO_WARNINGS
#define max(a, b) (a > b ? a : b)
#include<stdio.h>
#include<math.h>
int cnt[11];
int main()
{
	//�ֱ��¼�ǲ�����ȫƽ�������ǲ�����λ������ͬ
	int b1, b2;
	int x;
	puts("����������(100~999)");
	if(scanf("%d", &x) == EOF)
		return 1;
	//�ж��ǲ�����ȫƽ���� sqrtתint��ȡ����������ȫƽ�����˻�ȥ����ԭ��
	int tmp = sqrt(x);
	b1 = (tmp * tmp == x);
	//��λ����¼ÿһλ���ֳ��ָ���
	while (x)
	{
		int tmp = x % 10;
		++cnt[tmp];
		x /= 10;
	}
	//��¼�����������ָ���
	int mx = 0;
	for (int i = 0; i <= 9; ++i)
		mx = max(cnt[i], mx);
	b2 = (mx == 2);
	puts(b1 && b2 ? "������ȫƽ����" : "��������ȫƽ����");
}