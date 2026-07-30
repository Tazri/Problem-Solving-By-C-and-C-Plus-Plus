// link : https://cses.fi/problemset/task/1639/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int n;
string a, b;
vector<vector<int>> dp;
int solve(int ai, int bi)
{
    if (ai >= a.size() || bi >= b.size())
    {
        if (ai >= a.size() && bi >= b.size())
            return 0;

        if (ai < a.size())
            return a.size() - ai;
        return b.size() - bi;
    }

    if (dp[ai][bi] != -1)
        return dp[ai][bi];

    int nxt = solve(ai + 1, bi + 1);
    int a1 = a[ai] == b[bi] ? nxt : 1 + nxt;
    int a2 = 1 + solve(ai, bi + 1);
    int a3 = 1 + solve(ai + 1, bi);

    dp[ai][bi] = min({a1, a2, a3});
    return dp[ai][bi];
}

void _DIBBA(int _DIBBA_NO)
{
    cin >> a >> b;
    dp = vector<vector<int>>(a.size(), vector<int>(b.size(), -1));

    cout << solve(0, 0) << endl;
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