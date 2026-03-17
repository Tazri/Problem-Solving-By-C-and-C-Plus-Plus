#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

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
    ll n, k;
    cin >> n >> k;

    ll right = modpow(n, k, 1000);
    double lg10 = ((double)k * log10((double)n));
    double b = lg10 - (double)((int)lg10);
    double teneb = pow(10, b);
    teneb *= 100;
    ll left = teneb;

    cout << left << "...";
    if (right >= 100)
        cout << right << endl;
    else if (right >= 10)
        cout << 0 << right << endl;
    else
        cout << "00" << right << endl;
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