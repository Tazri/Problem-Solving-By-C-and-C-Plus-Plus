// linK : https://atcoder.jp/contests/dp/tasks/dp_c
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

int inf = INT64_MIN;

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;

    vector<vector<int>> v(3, vector<int>(n + 1));

    for (int i = 1; i <= n; i++)
        cin >> v[0][i] >> v[1][i] >> v[2][i];

    vector<vector<int>> dp(3, vector<int>(n + 1));

    dp[0][1] = v[0][1];
    dp[1][1] = v[1][1];
    dp[2][1] = v[2][1];

    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            dp[j][i] = inf;

            for (int k = 0; k <= 2; k++)
            {
                if (j == k)
                    continue;
                dp[j][i] = max(dp[j][i], dp[k][i - 1] + v[j][i]);
            }
        }
    }

    cout << max({dp[0][n], dp[1][n], dp[2][n]}) << endl;
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