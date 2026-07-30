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
    int n, w;
    cin >> n >> w;
    vector<int> v(n);
    vector<int> vw(n);
    for (int i = 0; i < n; i++)
        cin >> vw[i] >> v[i];

    vector<vector<int>> dp(n + 1, vector<int>(w + 123, 0));

    for (int i = n - 1; i >= 0; i--)
    {
        for (int wi = 0; wi <= w; wi++)
        {
            dp[i][wi] = dp[i + 1][wi];
            if (wi + vw[i] <= w)
            {
                dp[i][wi] = max(dp[i][wi], v[i] + dp[i + 1][wi + vw[i]]);
            }
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