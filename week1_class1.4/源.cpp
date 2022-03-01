#include<iostream>
#include<algorithm>
using namespace std;
inline int max(int a, int b)
{
	return a > b ? a : b;
}
int main()
{
	int a[4];
	for (int i = 1; i <= 3; ++i)
		cin >> a[i];
	int mx = -INT_MAX;
	sort(a + 1, a + 3 + 1);
	//for (int i = 1; i <= 3; ++i)
	//	mx = max(a[i], mx);
	cout << mx << endl;
}