// linK : https://atcoder.jp/contests/dp/tasks/dp_m
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
int mod = ((ll)1e9) + 7;
int n, k;
vector<int> v;
vector<vector<int>> dp;

int called = 0;
int solve(int i, int cand)
{
    if (cand > k)
        return 0;
    if (i >= n)
    {
        if (cand == k)
            return 1;
        return 0;
    }
    if (dp[i][cand] != -1)
        return dp[i][cand];

    int ans = 0;

    for (int j = 0; j <= v[i]; j++)
    {
        ans += solve(i + 1, cand + j);
        ans %= mod;
    }

    dp[i][cand] = ans;
    return ans;
}

void _DIBBA(int _DIBBA_NO)
{
    cin >> n >> k;
    v = vector<int>(n);

    dp = vector<vector<int>>(n + 1, vector<int>(k + 1, 0));
    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = n; i >= 0; i--)
    {
        for (int cand = 0; cand <= k; cand++)
        {
            if (i >= n)
            {
                if (cand == k)
                    dp[i][cand] = 1;
                else
                    dp[i][cand] = 0;
                continue;
            }
            dp[i][cand] = 0;
            int l = cand;
            int r = min(k, cand + v[i]);

            dp[i][cand] = (dp[i + 1][r] - (l == 0 ? 0 : dp[i + 1][l - 1]));
            dp[i][cand] %= mod;
            dp[i][cand] += mod;
            dp[i][cand] %= mod;
        }
        for (int cand = 1; cand <= k; cand++)
        {
            dp[i][cand] += dp[i][cand - 1];
            dp[i][cand] %= mod;
        }
    }

    cout << dp[0][0] << endl;
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