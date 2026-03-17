// link : https://codeforces.com/problemset/problem/1178/C
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

ll mod = 998244353;

long long modpow(long long a, long long b, long long mod)
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

void _DIBBA()
{
    ll w, h;
    cin >> w >> h;

    ll u = modpow(2, w + 1, mod);
    ll d = modpow(2, h - 1, mod);
    ll ans = u * d % mod;
    cout << ans << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    // cin >> t;
    while (t--)
        _DIBBA();
    return 0;
}