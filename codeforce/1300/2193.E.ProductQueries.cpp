// link : https://codeforces.com/problemset/problem/2193/E
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
    vector<int> dp(n + 1, 0);
    vector<int> u;
    u.reserve(n);
    for (int i = 0; i < n; i++)
    {
        int vi;
        cin >> vi;
        dp[vi] = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        if (dp[i] == 1)
        {
            u.push_back(i);
            continue;
        }

        if (u.empty())
            continue;

        int mn = -1;

        for (int j = 0; u[j] * u[j] <= i && j < u.size(); j++)
        {
            if (i % u[j] != 0)
                continue;

            int d1 = u[j];
            int d2 = i / u[j];

            // if (i == 8)
            // {
            //     cout << "d1 : " << d1 << " d2 : " << d2 << endl;
            //     cout << "dp1 : " << dp[d1] << " dp2 : " << dp[d2] << endl;
            // }

            // if (dp[d1] != 0)
            // {
            //     if (mn == -1)
            //         mn = d1;
            //     mn = min(mn, dp[d1]);
            // }

            if (dp[d2] != 0)
            {
                if (mn == -1)
                    mn = d2;
                mn = min(mn, dp[d2]);
            }
        }

        if (mn == -1)
            continue;
        dp[i] = mn + 1;
    }

    for (int i = 1; i <= n; i++)
        cout << (dp[i] == 0 ? -1 : dp[i]) << " \n"[i == n];
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