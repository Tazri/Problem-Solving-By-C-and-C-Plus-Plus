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

void _DIBBA(int _DIBBA_NO)
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    vector<int> w(n);
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> w[i] >> v[i];
        sum += v[i];
    }
    int inf = k + 1;
    vector<vector<int>> dp(n + 1, vector<int>(sum + 1, inf));

    for (int i = 0; i <= n; i++)
        dp[i][0] = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        for (int vi = 1; vi <= sum; vi++)
        {
            dp[i][vi] = dp[i + 1][vi];

            if (vi - v[i] >= 0)
                dp[i][vi] = min(dp[i][vi], w[i] + dp[i + 1][vi - v[i]]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int vi = sum; vi >= 0; vi--)
        {
            if (dp[i][vi] <= k)
            {
                cout << vi << endl;
                return;
            }
        }
    }

    cout << 0 << endl;
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