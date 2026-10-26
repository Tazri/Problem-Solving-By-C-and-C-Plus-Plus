// link : https://cses.fi/problemset/task/1097/
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
vector<vector<int>> dp;
vector<vector<bool>> vis;
vector<int> v;

int solve(int turn, int l, int r)
{
    if (l > r)
        return 0;

    if (vis[l][r])
        return dp[l][r];
    int ans;
    if (turn)
    {
        int ans1 = v[l] + solve(!turn, l + 1, r);
        int ans2 = v[r] + solve(!turn, l, r - 1);
        ans = max(ans1, ans2);
    }
    else
    {
        int ans1 = solve(!turn, l + 1, r);
        int ans2 = solve(!turn, l, r - 1);
        ans = min(ans1, ans2);
    }

    vis[l][r] = true;
    dp[l][r] = ans;
    return ans;
}

void _DIBBA(int _DIBBA_NO)
{
    cin >> n;
    v = vector<int>(n);
    dp = vector<vector<int>>(n, vector<int>(n, -1));
    vis = vector<vector<bool>>(n, vector<bool>(n, false));
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