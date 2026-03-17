// link : https://cses.fi/problemset/task/1715/
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

ll mod = (ll)1e9 + 7;
ll N = 1e6;

vector<ll> fact(N + 123);
vector<ll> ifact(N + 123);

void precal()
{
    fact[0] = 1;
    for (ll i = 1; i <= N; i++)
        fact[i] = fact[i - 1] * i % mod;

    ifact[N] = bigmod(fact[N], mod - 2, mod);

    for (ll i = N - 1; i >= 0; i--)
        ifact[i] = ifact[i + 1] * (i + 1) % mod;
}

void _DIBBA(int _DIBBA_NO)
{
    precal();
    string s;
    cin >> s;
    map<char, ll> mp;

    for (char ch : s)
        mp[ch]++;

    ll ans = fact[s.size()] % mod;

    for (pair<char, ll> p : mp)
    {
        ll t = p.second;
        ans *= ifact[t];
        ans %= mod;
    }
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