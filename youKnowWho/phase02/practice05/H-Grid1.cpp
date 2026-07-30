// link : https://atcoder.jp/contests/dp/tasks/dp_h
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
int mod = ((ll)1e9) + 7;
int n, m;
vector<string> grid;
vector<vector<int>> dp;

int solve(int i, int j)
{
    if (i >= n || j >= m)
        return 0;

    if (grid[i][j] == '#')
        return 0;

    if (i == n - 1 && j == m - 1)
        return 1;

    if (dp[i][j] != -1)
        return dp[i][j];

    dp[i][j] = solve(i + 1, j) + solve(i, j + 1);
    dp[i][j] %= mod;
    return dp[i][j];
}

void _DIBBA(int _DIBBA_NO)
{
    cin >> n >> m;
    grid = vector<string>(n);
    dp = vector<vector<int>>(n, vector<int>(m, -1));
    for (int i = 0; i < n; i++)
        cin >> grid[i];

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