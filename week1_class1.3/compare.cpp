#include<iostream>
#include<cassert>
using namespace std;
//比较数字大小
int main()
{
	int a, b;
	puts("请输入a b");
	cin >> a >> b;
	//懒得写判断等于了，直接assert
	assert(a != b);
	puts(a > b ? "a > b" : "b > a");
}