/*
* ��Ŀ3����֤��°ͺղ����2000���ڵ�ż������
* author������Դ
*/
#include<stdio.h>
//�ж�����
int Is_prime(long long n)
{
	if (n == 1) return 0;
	if (n == 2 || n == 3) return 1;
	if (n % 6 != 1 && n % 6 != 5) return 0;
	for (register long long i = 5; i * i <= n; i += 6)
		if (n % i == 0 || n % (i + 2) == 0) return 0;
	return 1;
}
int main()
{
	int ans = 1;//��¼�����Ƿ����
	//�Ӵ���2����Сż��4��ʼ��ö��ֱ��2000������ż��
	for (int i = 4; i <= 2000; i += 2)
	{
		int yes = 0;//��¼������ܷ����
		//ö�ٿ��ܵ�����
		for (int j = 1; j <= i; ++j)
		{
			if (Is_prime(j) && Is_prime(i - j))
			{
				printf("����%-4d������%-4d��%-4d�ĺ�\n", i, j, i - j);
				yes = 1;
				break;
			}
		}
		if (yes == 0)
		{
			printf("����%-4d���ܱ�ʾΪ���������ĺ�\n", i);
			ans = 0;
		}
	}
	if (ans)
		printf("��°ͺղ����2000���ڵ�ż������");
	else
		printf("��°ͺղ����2000���ڵ�ż��������");
}