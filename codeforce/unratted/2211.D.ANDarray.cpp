// link : https://codeforces.com/contest/2211/problem/D
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

int mod = ((ll)1e9) + 7;

int N = (ll)1e5;

vector<int> fact(N + 123);
vector<int> ifact(N + 123);

void precal()
{
    fact[0] = 1;
    for (int i = 1; i <= N; i++)
        fact[i] = fact[i - 1] * i % mod;

    ifact[N] = bigmod(fact[N], mod - 2, mod);

    for (int i = N - 1; i >= 0; i--)
        ifact[i] = ifact[i + 1] * (i + 1) % mod;
}

int nCr(int n, int r)
{
    if (r > n)
        return 0;

    return ((fact[n] * ifact[n - r] % mod) * ifact[r] % mod) % mod;
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    vector<int> b(n + 1);
    vector<int> ans(n + 1);
    vector<int> cnt(29);

    for (int i = 1; i <= n; i++)
        cin >> b[i];

    int prev = 0;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 0; j < 29; j++)
        {
            int contrib = nCr(cnt[j], i);
            b[i] -= (contrib * (1LL << j) % mod);
            b[i] = ((b[i] % mod) + mod) % mod;
        }

        for (int j = 0; j < 29; j++)
        {
            if (b[i] & (1LL << j))
                cnt[j] = i;
        }

        prev |= b[i];
        ans[i] = prev;
    }

    for (int i = 1; i <= n; i++)
        cout << ans[i] << " \n"[i == n];
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