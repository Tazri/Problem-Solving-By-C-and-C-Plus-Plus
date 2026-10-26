// link : https://codeforces.com/problemset/problem/1418/C
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
    int n;

    cin >> n;
    vector<int> v(n + 3, 0);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<vector<int>> dp(2, vector<int>(n + 123));

    for (int i = n; i >= 0; i--)
    {
        for (int turn = 1; turn >= 0; turn--)
        {
            if (i >= n)
            {
                dp[turn][i] = 0;
                continue;
            }

            int ans;
            if (turn)
            {
                ans = min(dp[!turn][i + 1], dp[!turn][i + 2]);
            }
            else
            {
                ans = min(v[i] + dp[!turn][i + 1], v[i] + v[i + 1] + dp[!turn][i + 2]);
            }

            dp[turn][i] = ans;
        }
    }

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