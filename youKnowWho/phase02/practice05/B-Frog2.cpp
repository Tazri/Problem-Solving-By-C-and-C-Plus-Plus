// link : https://atcoder.jp/contests/dp/tasks/dp_b
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
    vector<int> v(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> v[i];

    vector<int> dp(n + 1, 0);

    for (int i = 2; i <= n; i++)
    {
        int mn = -1;
        for (int j = 1; j <= k; j++)
        {
            if (i - j < 1)
                continue;
            int cost = dp[i - j] + abs(v[i] - v[i - j]);
            if (mn == -1)
                mn = cost;
            mn = min(cost, mn);
        }

        dp[i] = mn;
    }

    cout << dp[n] << endl;
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