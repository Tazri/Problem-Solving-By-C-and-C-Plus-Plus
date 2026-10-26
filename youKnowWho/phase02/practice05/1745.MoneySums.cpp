// link : https://cses.fi/problemset/task/1745/
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
vector<int> v;
vector<vector<bool>> vis;
vector<vector<bool>> dp;
bool solve(int i, int k)
{
    if (i >= n)
    {
        if (k == 0)
            return true;
        return false;
    }

    if (vis[i][k])
        return dp[i][k];

    bool ans = solve(i + 1, k);
    if (k - v[i] >= 0)
        ans |= solve(i + 1, k - v[i]);

    vis[i][k] = true;
    dp[i][k] = ans;
    return ans;
}

void _DIBBA(int _DIBBA_NO)
{
    cin >> n;
    v = vector<int>(n);

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }

    dp = vector<vector<bool>>(n, vector<bool>(sum + 1, false));
    vis = vector<vector<bool>>(n, vector<bool>(sum + 1, false));

    vector<int> ans;
    for (int i = 1; i <= sum; i++)
    {
        if (solve(0, i))
            ans.push_back(i);
    }

    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " \n"[i == ans.size() - 1];
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