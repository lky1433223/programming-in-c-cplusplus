/*
* 题目3：验证哥德巴赫猜想对2000以内的偶数成立
* author：刘凯源
*/
#include<stdio.h>
//判断素数
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
	int ans = 1;//记录猜想是否成立
	//从大于2的最小偶数4开始，枚举直到2000的所有偶数
	for (int i = 4; i <= 2000; i += 2)
	{
		int yes = 0;//记录这个数能否成立
		//枚举可能的数字
		for (int j = 1; j <= i; ++j)
		{
			if (Is_prime(j) && Is_prime(i - j))
			{
				printf("数字%-4d是素数%-4d和%-4d的和\n", i, j, i - j);
				yes = 1;
				break;
			}
		}
		if (yes == 0)
		{
			printf("数字%-4d不能表示为两个素数的和\n", i);
			ans = 0;
		}
	}
	if (ans)
		printf("哥德巴赫猜想对2000以内的偶数成立");
	else
		printf("哥德巴赫猜想对2000以内的偶数不成立");
}