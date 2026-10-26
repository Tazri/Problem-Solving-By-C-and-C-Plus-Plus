// link : https://cses.fi/problemset/task/1746/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'
#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int mod = ((ll)1e9) + 7;
int n, m;
vector<int> v;
vector<vector<int>> dp;
int solve(int i, int prev)
{
    if (i >= n)
    {
        return 1;
    }

    if (i > 0 && v[i] != 0 && abs(prev - v[i]) > 1)
    {
        return 0;
    }

    if (dp[i][prev] != -1)
    {
        return dp[i][prev];
    }

    if (v[i] != 0)
    {
        int ans = solve(i + 1, v[i]);
        dp[i][prev] = ans;
        return ans;
    }

    int ans = 0;
    if (i != 0)
    {
        vector<int> op = {prev - 1, prev, prev + 1};
        for (int oi : op)
        {
            if (1 <= oi && oi <= m)
            {
                ans += solve(i + 1, oi);
                ans %= mod;
            }
        }
    }
    else
    {
        for (int oi = 1; oi <= m; oi++)
        {
            ans += solve(i + 1, oi);
            ans %= mod;
        }
    }

    dp[i][prev] = ans;
    return ans;
}

void _DIBBA(int _DIBBA_NO)
{
    cin >> n >> m;
    v = vector<int>(n);
    dp = vector<vector<int>>(n, vector<int>(m + 1, -1));
    for (int i = 0; i < n; i++)
        cin >> v[i];

    cout << solve(0, 0) << endl;
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