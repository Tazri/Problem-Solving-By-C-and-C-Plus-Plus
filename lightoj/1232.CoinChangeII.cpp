// link : https://lightoj.com/problem/coin-change-ii
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int mod = 100000007;
int n, k;
vector<int> v;
vector<vector<int>> dp;
int solve(int i, int coin)
{
    if (i >= n)
    {
        return coin == k ? 1 : 0;
    }

    if (coin > k)
        return 0;

    if (dp[i][coin] != -1)
        return dp[i][coin];
    int ans = 0;
    for (int t = 0; t <= k; t++)
    {
        ans += solve(i + 1, coin + (t * v[i]));
        ans %= mod;
    }

    dp[i][coin] = ans;
    return ans;
}

void _DIBBA(int _DIBBA_NO)
{
    cout << "Case " << _DIBBA_NO << ": ";
    cin >> n >> k;
    v = vector<int>(n);
    dp = vector<vector<int>>(n + 1, vector<int>(k + 1, 0));

    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = n; i >= 0; i--)
    {
        for (int coin = k; coin >= 0; coin--)
        {
            if (i >= n)
            {
                dp[i][coin] = (coin == k) ? 1 : 0;
                continue;
            }

            int ans = dp[i + 1][coin];
            if (coin + v[i] <= k)
                ans += dp[i][coin + v[i]];

            if (ans >= mod)
                ans -= mod;
            dp[i][coin] = ans;
        }
    }

    // cout << endl;
    // for (int i = 0; i < dp.size(); i++)
    // {
    //     for (int j = 0; j < dp[i].size(); j++)
    //         cout << dp[i][j] << " \n"[dp[i].size() - 1 == j];
    // }

    cout << dp[0][0] << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}