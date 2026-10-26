// link : https://atcoder.jp/contests/dp/tasks/dp_l
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
vector<vector<vector<int>>> dp;

int solve(int turn, int l, int r)
{
    if (l > r)
    {
        return 0;
    }

    if (dp[turn][l][r] != -1)
        return dp[turn][l][r];

    if (turn)
    {
        int ans1 = v[l] + solve(!turn, l + 1, r);
        int ans2 = v[r] + solve(!turn, l, r - 1);
        dp[turn][l][r] = max(ans1, ans2);
        return max(ans1, ans2);
    }
    else
    {
        int ans1 = -v[l] + solve(!turn, l + 1, r);
        int ans2 = -v[r] + solve(!turn, l, r - 1);
        dp[turn][l][r] = min(ans1, ans2);
        return min(ans1, ans2);
    }
}

void _DIBBA(int _DIBBA_NO)
{
    cin >> n;
    v = vector<int>(n);
    dp = vector<vector<vector<int>>>(2, vector<vector<int>>(n, vector<int>(n, -1)));
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cout << solve(1, 0, n - 1) << endl;
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