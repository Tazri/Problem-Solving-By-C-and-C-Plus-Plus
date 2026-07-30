// link : https://lightoj.com/problem/neighbor-house
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

int inf = INT32_MAX;

void _DIBBA(int _DIBBA_NO)
{
    cout << "Case " << _DIBBA_NO << ": ";

    int n;
    cin >> n;
    vector<vector<int>> v(3, vector<int>(n + 1));
    for (int i = 1; i <= n; i++)
        cin >> v[0][i] >> v[1][i] >> v[2][i];

    vector<vector<int>> dp(3, vector<int>(n + 1, 0));

    for (int i = 1; i <= n; i++)
    {
        for (int k = 0; k <= 2; k++)
        {
            int mn = inf;
            for (int prev = 0; prev <= 2; prev++)
            {
                if (prev == k)
                    continue;
                mn = min(mn, dp[prev][i - 1] + v[k][i]);
            }

            dp[k][i] = mn;
        }
    }

    cout << min({dp[0][n], dp[1][n], dp[2][n]}) << endl;
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