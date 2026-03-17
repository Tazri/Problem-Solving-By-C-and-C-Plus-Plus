// link : https://codeforces.com/problemset/problem/300/C
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
ll N = 1e6;
vector<ll> fact(N + 123);
vector<ll> ifact(N + 123);

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

void precal()
{
    fact[0] = 1;

    for (int i = 1; i <= N; i++)
        fact[i] = fact[i - 1] * i % mod;

    ifact[N] = bigmod(fact[N], mod - 2, mod);

    for (ll i = N - 1; i >= 0; i--)
        ifact[i] = ifact[i + 1] * (i + 1) % mod;
}

ll cnt(ll a, ll b)
{
    ll ans = fact[a + b];
    ans %= mod;
    ans *= ifact[a];
    ans %= mod;
    ans *= ifact[b];
    ans %= mod;
    return ans;
}

bool isGood(ll sum, ll a, ll b)
{
    while (sum)
    {
        ll d = sum % 10;
        if (d != a && d != b)
            return false;
        sum /= 10;
    }
    return true;
}

void _DIBBA(int _DIBBA_NO)
{
    ll a, b, n;
    cin >> a >> b >> n;
    ll ans = 0;

    for (ll acnt = 0; acnt <= n; acnt++)
    {
        ll bcnt = n - acnt;
        ll sum = (a * acnt) + (b * bcnt);

        if (!isGood(sum, a, b))
            continue;

        ans += cnt(acnt, bcnt);
        ans %= mod;
    }

    cout << ans << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();
    precal();
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}