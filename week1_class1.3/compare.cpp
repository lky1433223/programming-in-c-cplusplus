#include<iostream>
#include<cassert>
using namespace std;
//�Ƚ����ִ�С
int main()
{
	int a, b;
	puts("������a b");
	cin >> a >> b;
	//����д�жϵ����ˣ�ֱ��assert
	assert(a != b);
	puts(a > b ? "a > b" : "b > a");
}