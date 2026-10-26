// link : https://www.spoj.com/problems/MIXTURES/en/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'
#define int ll
#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int n;
vector<int> v;
vector<int> pre;
vector<vector<int>> dp;
int mod = 100;
int solve(int l, int r)
{
    if (l == r)
    {
        return 0;
    }
    if (l > r)
        return 0;
    if (dp[l][r] != -1)
        return dp[l][r];
    int mn = -1;
    for (int i = l; i < r; i++)
    {
        int left = (pre[i] - pre[l - 1]) % mod;
        left = (left + mod) % mod;

        int right = (pre[r] - pre[i + 1 - 1]) % mod;
        right = (right + mod) % mod;
        int ans = (left * right) + solve(l, i) + solve(i + 1, r);

        if (mn == -1)
            mn = ans;
        mn = min(ans, mn);
    }

    dp[l][r] = mn;
    return mn;
}

void _DIBBA(int _DIBBA_NO, int n)
{
    v = vector<int>(n + 1);
    pre = vector<int>(n + 1);
    dp = vector<vector<int>>(n + 1, vector<int>(n + 1, -1));
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        pre[i] = v[i];
        pre[i] += pre[i - 1];
        pre[i] %= mod;
    }

    cout << solve(1, n) << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    // cin >> t;
    int n;
    while (cin >> n)
        _DIBBA(t++, n);
    return 0;
}