/*
* ��Ŀ2:����Բ�İ뾶�����Բ���ܳ������ pi = 3.14
* author:����Դ
*/
#include<stdio.h>
const double pi = 3.14;
int main()
{
	double r;
	printf("������Բ�İ뾶:");
	scanf_s("%lf", &r);
	double d = 2 * r * pi;
	double s = pi * r * r;
	printf("Բ���ܳ���:%lf,Բ�������:%lf\n",(double)d,(double)s);
}