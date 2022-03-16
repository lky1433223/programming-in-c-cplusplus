#include<iostream>
#include<string>
using namespace std;
int main()
{
	int x;
	cin >> x;
	string s = to_string(x);
	cout << s.length() << endl;
	for (int i = 0; i < s.size(); ++i)
		cout << s[i] << ",";
	cout << endl;
	for (int i = s.size() - 1; i >= 0; --i)
		cout << s[i] << ",";
	cout << endl;
}