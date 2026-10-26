// link : https://cses.fi/problemset/task/1158/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void _DIBBA(int _DIBBA_NO)
{
    int n, x;
    cin >> n >> x;
    vector<int> pr(n);
    vector<int> cost(n);

    for (int i = 0; i < n; i++)
        cin >> pr[i];
    for (int i = 0; i < n; i++)
        cin >> cost[i];

    vector<vector<int>> dp(n + 2, vector<int>(x + 123, 0));

    for (int i = n + 1; i >= 0; i--)
    {
        for (int j = 0; j <= x; j++)
        {
            if (i >= n)
            {
                dp[i][j] = 0;
                continue;
            }

            dp[i][j] = dp[i + 1][j];

            if (j + pr[i] <= x)
                dp[i][j] = max(dp[i][j], cost[i] + dp[i + 1][j + pr[i]]);
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