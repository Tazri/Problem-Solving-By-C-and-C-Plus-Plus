#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long llu;
typedef unsigned __int128 u128;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

u128 takeU128()
{
    string s;
    cin >> s;
    u128 res = 0;
    for (char ch : s)
    {
        res *= 10;
        res += (ch - '0');
    }

    return res;
}

llu mul(llu a, llu b, u128 mod)
{
    llu res = (u128)a * b % mod;
    return res;
}

llu modpow(llu a, llu b, u128 mod)
{
    llu res = 1;
    a %= mod;
    while (b > 0)
    {
        if (b & 1)
            res = mul(res, a, mod);
        a = mul(a, a, mod);
        b >>= 1;
    }
    return res;
}
void _DIBBA()
{
    llu a, b;
    u128 c;
    cin >> a >> b;
    c = takeU128();
    cout << modpow(a, b, c) << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    cin >> t;
    while (t--)
        _DIBBA();
    return 0;
}