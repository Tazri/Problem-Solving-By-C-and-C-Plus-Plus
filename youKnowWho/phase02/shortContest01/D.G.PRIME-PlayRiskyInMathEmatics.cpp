// link : https://codeforces.com/gym/361788/problem/G
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
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;

    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;

    if (isPrime(n))
    {
        cout << 1 << endl;
        cout << n << endl;
        return;
    }

    if (isPrime(n - 2))
    {
        cout << 2 << endl;
        cout << 2 << " " << n - 2 << endl;
        return;
    }

    if (isPrime(n - 4))
    {
        cout << 3 << endl;
        cout << 2 << " " << 2 << " " << n - 4 << endl;
        return;
    }

    for (int p = 2; p <= n; p++)
    {
        if (isPrime(p) && isPrime(n - p - 3))
        {
            cout << 3 << endl;
            cout << p << " " << 3 << " " << n - p - 3 << endl;
            return;
        }
    }
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