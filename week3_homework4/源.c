/*
* ��Ŀ4����������·ݣ��������¶�����
* author������Դ
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//��¼ÿ��������2�����У�
int DAY[] = { 0, 31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//�ж��ǲ�������
inline int judge(int x)
{
	return x % 100 == 0 ? x % 400 == 0 : x % 4 == 0;
}
int main()
{
	int y, m;
	puts("���������£��ÿո�ָ�");
	if(scanf("%d %d", &y, &m) == EOF)
		return 1;
	if (m == 2)
		printf("�������%d��", judge(y) ? 29 : 28);
	else
		printf("�������%d��", DAY[m]);
}