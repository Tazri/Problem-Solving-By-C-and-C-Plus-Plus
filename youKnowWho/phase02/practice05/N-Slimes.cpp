// link : https://atcoder.jp/contests/dp/tasks/dp_n
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

int n;
vector<int> v;
vector<int> pre;
vector<vector<int>> dp;
int solve(int l, int r)
{
    if (l == r)
        return 0;
    if (l > r)
        return 0;

    if (dp[l][r] != -1)
        return dp[l][r];

    int mn = -1;
    for (int i = l + 1; i <= r; i++)
    {
        int ans = (pre[r] - pre[l - 1]) + solve(l, i - 1) + solve(i, r);
        if (mn == -1)
            mn = ans;
        mn = min(mn, ans);
    }

    dp[l][r] = mn;
    return mn;
}

void _DIBBA(int _DIBBA_NO)
{
    cin >> n;
    v = vector<int>(n + 1);
    pre = vector<int>(n + 1);
    dp = vector<vector<int>>(n + 1, vector<int>(n + 1, -1));

    for (int i = 1; i <= n; i++)
        cin >> v[i];
    for (int i = 1; i <= n; i++)
    {
        pre[i] = v[i];
        pre[i] += pre[i - 1];
    }

    cout << solve(1, n) << endl;
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