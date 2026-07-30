// linK: https://lightoj.com/problem/batman
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

string a, b, c;
vector<vector<vector<int>>> dp;
int solve(int i, int j, int k)
{

    if (i >= a.size() || j >= b.size() || k >= c.size())
    {
        return 0;
    }

    if (dp[i][j][k] != -1)
        return dp[i][j][k];

    int ans = solve(i + 1, j, k);
    ans = max(ans, solve(i, j + 1, k));
    ans = max(ans, solve(i, j, k + 1));

    if (a[i] == b[j] && b[j] == c[k])
    {
        ans = max(ans, 1 + solve(i + 1, j + 1, k + 1));
    }

    dp[i][j][k] = ans;
    return ans;
}

void _DIBBA(int _DIBBA_NO)
{
    cout << "Case " << _DIBBA_NO << ": ";
    cin >> a >> b >> c;
    dp = vector<vector<vector<int>>>(a.size(), vector<vector<int>>(b.size(), vector<int>(c.size(), -1)));

    cout << solve(0, 0, 0) << endl;
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