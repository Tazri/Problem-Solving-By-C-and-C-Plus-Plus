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

int mod = 100000007;

void _DIBBA(int _DIBBA_NO)
{
    cout << "Case " << _DIBBA_NO << ": ";
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    vector<int> cnt(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = 0; i < n; i++)
        cin >> cnt[i];

    vector<vector<int>> dp(n + 1, vector<int>(k + 1, 0));

    dp[n][k] = 1;

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <= k; j++)
        {
            for (int tm = 0; tm <= cnt[i]; tm++)
            {
                int take = (tm * v[i]);

                if (j + take <= k)
                {
                    dp[i][j] += dp[i + 1][j + take];
                    dp[i][j] %= mod;
                }
            }
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