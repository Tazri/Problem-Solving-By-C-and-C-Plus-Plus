#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

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

ll solve(ll a, ll x, ll mod)
{
    if (x == 1)
    {
        return 1 % mod;
    }

    if (x & 1)
    {
        ll res = solve(a, x - 1, mod) + bigmod(a, x - 1, mod);
        return res;
    }
    else
    {
        ll p = x / 2;
        ll left = solve(a, p, mod);
        ll res = (left + ((bigmod(a, p, mod) * left) % mod)) % mod;
        return res;
    }
}

void _DIBBA(int _DIBBA_NO)
{
    ll a, x, mod;
    cin >> a >> x >> mod;
    ll ans = solve(a, x, mod) % mod;
    cout << ans << endl;
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