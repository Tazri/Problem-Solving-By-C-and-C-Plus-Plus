// link : https://cses.fi/problemset/task/1634/
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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());
    vector<int> dp(x + 1, -1);
    dp[0] = 0;

    for (int i = 1; i <= x; i++)
    {
        for (int ci : v)
        {
            if (i - ci < 0)
                break;

            if (dp[i - ci] == -1)
                continue;

            int take = dp[i - ci] + 1;
            if (dp[i] == -1)
                dp[i] = take;
            dp[i] = min(dp[i], take);
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