// link : https://codeforces.com/contest/2256/problem/D
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
ll SZ = 1e6 + 5;

vector<ll> fact(SZ);
vector<ll> ifact(SZ);

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

void build()
{
    fact[0] = 1;
    for (int i = 1; i < SZ; i++)
    {
        fact[i] = fact[i - 1] * i % mod;
    }

    ifact[SZ - 1] = bigmod(fact[SZ - 1], mod - 2, mod);

    for (int i = SZ - 2; i >= 0; i--)
    {
        ifact[i] = ifact[i + 1] * (i + 1) % mod;
    }
}

ll nCr(ll n, ll r)
{
    if (r > n || r < 0)
        return 0;
    return (fact[n] * ifact[r] % mod) * ifact[n - r] % mod;
}

ll fcnt(ll sum, ll k)
{
    return nCr(sum - 1, k - 1);
}

void precal()
{
    build();
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> v;
    int len = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            len++;
        }
        else
        {
            v.push_back(len);
            len = 1;
        }
    }

    v.push_back(len);

    int oddSum = 0;
    int oddCnt = 0;
    int evenSum = 0;
    int evenCnt = 0;
    ll ans = 1;
    for (int i = 0; i < v.size(); i++)
    {
        if (i & 1)
        {
            oddSum += v[i];
            oddCnt++;
        }
        else
        {
            evenSum += v[i];
            evenCnt++;
        }
    }

    if (oddSum)
        ans = 1LL * fcnt(oddSum, oddCnt) % mod;
    if (evenSum)
        ans = 1LL * ans * fcnt(evenSum, evenCnt) % mod;

    cout << ans << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();
    precal();
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}