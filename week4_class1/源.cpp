#include<iostream>
#include<cstdio>
using namespace std;
bool Is_prime(long long n)
{
    if (n == 1) return false;
    if (n == 2 || n == 3) return true;
    if (n % 6 != 1 && n % 6 != 5) return false;
    for (register long long i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0) return false;
    return true;
}
int main()
{
    int x;
    cin >> x;
    if (Is_prime(x))
        cout << "yes" << endl;
    else
        cout << "no" << endl;
}