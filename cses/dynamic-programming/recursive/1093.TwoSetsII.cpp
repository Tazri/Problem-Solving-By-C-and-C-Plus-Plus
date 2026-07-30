// link : https://cses.fi/problemset/task/1093/
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

int n;
int sum;
int mod = ((int)1e9) + 7;
vector<vector<int>> dp;
ll solve(int i, int x)
{
    if (x > sum)
        return 0;
    if (i > n)
    {
        if (x == sum)
            return 1LL;
        else
            return 0LL;
    }

    if (dp[i][x] != -1)
    {
        return dp[i][x];
    }

    ll ans = (solve(i + 1, x) + solve(i + 1, x + i)) % mod;
    dp[i][x] = ans;
    return ans;
}

void _DIBBA(int _DIBBA_NO)
{
    cin >> n;
    sum = (n * (n + 1)) / 2;

    if (sum & 1)
    {
        cout << 0 << endl;
        return;
    }
    sum = sum /= 2;

    dp = vector<vector<int>>(n + 1, vector<int>(sum + 1, -1));
    ll ans = solve(1, 0);

    ll d = bigmod(2, mod - 2, mod);
    cout << (((ans * d) + mod) % mod) << endl;
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