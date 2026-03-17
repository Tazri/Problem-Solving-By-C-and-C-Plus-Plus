// link : https://cses.fi/problemset/task/1712
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

ll mod = (ll)1e9 + 7;

long long bigmod(long long a, long long b, long long mod)
{
    long long res = 1;
    a %= mod;
    while (b > 0)
    {
        if (b & 1)
            res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}

void _DIBBA(int _DIBBA_NO)
{
    ll a, b, c;
    cin >> a >> b >> c;
    ll ex = bigmod(b, c, mod - 1);

    if (a == 0 && ex == 0)
    {
        cout << 1 << endl;
        return;
    }

    cout << bigmod(a, ex, mod) << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}