// link : https://codeforces.com/problemset/problem/456/B
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int mod(string s)
{
    int ans = 0;
    vector<int> v;
    v.reserve(s.size());

    for (char ch : s)
    {
        v.push_back((int)ch - (int)'0');
    }

    reverse(v.begin(), v.end());
    int m = 4;
    int r = 0;
    while (v.size())
    {
        if (r >= m)
        {
            r %= m;
        }
        else
        {
            r *= 10;
            r += v.back();
            v.pop_back();
        }
    }

    r %= m;
    return r;
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

void _DIBBA(int _DIBBA_NO)
{
    string s;
    cin >> s;
    ll ex = mod(s);

    ll ans = 0;

    for (int i = 1; i <= 4; i++)
    {
        ans += bigmod(i, ex, 5);
        ans %= 5;
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