#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

ll mod = 10000007;

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

void _DIBBA(ll n, ll k)
{
    ll a = modpow(n, k, mod);
    ll b = modpow(n, n, mod);
    ll c = modpow(n - 1, n - 1, mod);
    ll d = modpow(n - 1, k, mod);

    ll ans = (2LL) * (c + d);
    ans %= mod;
    ans += a;
    ans %= mod;
    ans += b;
    ans %= mod;

    cout << ans << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    // cin >> t;
    while (true)
    {
        ll a, b;
        cin >> a >> b;
        if (a == 0 && b == 0)
            break;
        _DIBBA(a, b);
    }
    return 0;
}