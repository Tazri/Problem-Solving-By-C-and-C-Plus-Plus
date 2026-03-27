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

long long mulmod128(long long a, long long b, long long mod)
{
    return (long long)((__int128)a * b % mod);
}

long long mulmod(long long a, long long b, long long mod)
{
    a %= mod;
    long long res = 0;

    while (b > 0)
    {
        if (b & 1)
        {
            res += a;
            if (res >= mod)
                res -= mod;
        }

        a <<= 1;
        if (a >= mod)
            a %= mod;

        b >>= 1;
    }

    return res;
}

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

long long bigmulmod(long long a, long long b, long long mod)
{
    auto mul = [&](long long x, long long y)
    {
        long long res = 0;
        x %= mod;

        while (y)
        {
            if (y & 1)
                res = (res + x) % mod;

            x = (x + x) % mod;
            y >>= 1;
        }

        return res;
    };

    long long res = 1 % mod;
    a %= mod;

    while (b)
    {
        if (b & 1)
            res = mul(res, a);

        a = mul(a, a);
        b >>= 1;
    }

    return res;
}

void _DIBBA(int _DIBBA_NO)
{
    int a, b, p;
    cin >> a >> b >> p;

    int aeb = bigmulmod(a, b, p);
    int ab = mulmod(a, b, p);
    int binv = bigmulmod(b, p - 2, p);
    int adb = mulmod(a, binv, p);

    cout << aeb << endl;
    cout << ab << endl;
    cout << adb << endl;
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