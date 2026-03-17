// link : https://lightoj.com/problem/combinations
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define int ll

ll N = 1e6;
ll mod = 1000003;
vector<ll> fact(N + 123);
vector<ll> ifact(N + 123);

long long divmod(long long a, long long b, long long p)
{
    long long r = 1;
    long long e = p - 2;
    b %= p;
    a %= p;

    while (e)
    {
        if (e & 1)
            r = (r * b) % p;
        b = (b * b) % p;
        e >>= 1;
    }

    return (a * r) % p;
}

ll inverse(ll a, ll mod)
{
    return divmod(1, a, mod);
}

void preCal()
{
    fact[0] = 1;
    for (ll i = 1; i <= N; i++)
    {
        fact[i] = i * fact[i - 1];
        fact[i] %= mod;
    }
    ifact[N] = inverse(fact[N], mod);
    for (ll i = N - 1; i >= 0; i--)
    {
        ifact[i] = (ifact[i + 1] * (i + 1)) % mod;
    }
}

ll nCr(ll n, ll r)
{
    if (r <= 0)
        return 1;

    ll ans = (fact[n] * ifact[n - r] % mod) * ifact[r] % mod;
    return ans;
}

void _DIBBA(int _DIBBA_NO)
{
    cout << "Case " << _DIBBA_NO << ": ";
    ll n, r;
    cin >> n >> r;
    cout << nCr(n, r) << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();
    preCal();
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}