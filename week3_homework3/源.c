/*
* ��Ŀ3���ܷ񹹳������Σ��ǲ��ǵ���������/�ȱ������Σ��������
* author������Դ
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//�ж��ǲ���������,����֮�ʹ��ڵ����ߣ�����֮��С�ڵ�����
int judge_is_triangle(double a, double b, double c)
{
	return a + b > c && fabs(a - b) < c;
}
//�ж��ǲ�������������
int judge_is_special(double a, double b, double c)
{
	if (a == b && a == c)
		return puts("�ǵȱ�������");
	if (a == c || a == b || b == c)
		return puts("�ǵ���������");
	return puts("ֻ����ͨ��������");
}
//�������
double S(double a, double b, double c)
{
	double p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}
int main()
{
	double a, b, c;
	puts("�����������ε������ߣ��ÿո�ָ�");
	if (scanf("%lf %lf %lf", &a, &b, &c) == EOF)
		return -1;
	if (!judge_is_triangle(a, b, c))
		return puts("�ⲻ��������");
	judge_is_special(a, b, c);
	printf("�����ε������%.3lf\n", S(a, b, c));
}