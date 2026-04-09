// link : https://codeforces.com/problemset/problem/735/D
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

bool isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;

    return true;
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;

    if (n == 2)
    {
        cout << 1 << endl;
        return;
    }

    if (n % 2 == 0)
    {
        cout << 2 << endl;
        return;
    }

    if (isPrime(n))
    {
        cout << 1 << endl;
        return;
    }

    if (isPrime(n - 2))
    {
        cout << 2 << endl;
        return;
    }

    cout << 3 << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}