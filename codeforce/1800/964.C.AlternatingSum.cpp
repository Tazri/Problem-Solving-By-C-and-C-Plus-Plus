// link : https://codeforces.com/problemset/problem/964/C

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
int mod = (int)1e9 + 9;
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

long long inverse(long long b, long long mod)
{
    return bigmod(b, mod - 2, mod);
}

void _DIBBA(int _DIBBA_NO)
{
    int n, a, b, k;
    string s;
    cin >> n >> a >> b >> k;
    cin >> s;

    int t = (n + 1) / k;
    int r = bigmod(b, k, mod) * inverse(bigmod(a, k, mod), mod);

    r = ((r % mod) + mod) % mod;

    int q;
    if (r == 1)
    {
        q = t;
    }
    else
    {
        int lwr = ((inverse(r - 1, mod) % mod) + mod) % mod;
        int uppr = (((bigmod(r, t, mod) - 1) % mod) + mod) % mod;

        q = (lwr * uppr) % mod;
    }

    int z = 0;

    for (int i = 0; i < k; i++)
    {
        int sign = s[i] == '-' ? -1 : 1;
        int res = (bigmod(a, n - i, mod) * bigmod(b, i, mod)) % mod;
        res *= sign;
        z += res;
        z %= mod;
    }

    int ans = (z * q) % mod;

    ans = ((ans % mod) + mod) % mod;
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