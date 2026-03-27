// link : https://codeforces.com/problemset/problem/1879/C
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

int N = 2 * (1e5);

vector<int> fact(N + 1);
vector<int> ifact(N + 1);

int mod = 998244353;

void precal()
{
    fact[0] = 1;
    for (int i = 1; i <= N; i++)
    {
        fact[i] = fact[i - 1] * i;
        fact[i] %= mod;
    }
}

int cal(int n)
{
    int r = n - 1;

    int res = fact[n] * ifact[n - r];
    return res;
}

void _DIBBA(int _DIBBA_NO)
{
    string s;
    cin >> s;

    int n = s.size();

    vector<int> v;
    v.reserve(n);
    v.push_back(1);

    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
            v.back()++;
        else
            v.push_back(1);
    }

    int sum = 0;
    int res = 1;

    for (int vi : v)
    {
        sum += vi - 1;
        res *= vi;
        res %= mod;
    }

    res = res * fact[sum] % mod;

    cout << sum << " " << res << endl;
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