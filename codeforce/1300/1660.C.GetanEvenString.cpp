// link : https://codeforces.com/problemset/problem/1660/C
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
    string s;
    cin >> s;
    n = s.size();

    vector<int> v(n + 1, -1);
    vector<int> mp(200, -1);

    for (int i = n - 1; i >= 0; i--)
    {
        v[i] = mp[s[i]];
        mp[s[i]] = i;
    }

    vector<int> dp(n + 1, 0);
    dp[n] = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        dp[i] = dp[i + 1];
        if (v[i] != -1)
        {
            int can = 2 + dp[v[i] + 1];
            dp[i] = max(dp[i], can);
        }
    }

    cout << n - dp[0] << endl;
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