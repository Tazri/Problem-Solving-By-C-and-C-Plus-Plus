// link : https://cses.fi/problemset/task/1635/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'
#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int mod = ((ll)1e9) + 7;

void _DIBBA(int _DIBBA_NO)
{
    int n, x;
    cin >> n >> x;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());
    vector<int> dp(x + 1);
    dp[0] = 1;
    for (int i = 1; i <= x; i++)
    {
        for (int vi : v)
        {
            if (i - vi < 0)
            {
                break;
            }

            dp[i] += dp[i - vi];
            if (dp[i] >= mod)
                dp[i] -= mod;
        }
    }

    cout << dp[x] << endl;
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