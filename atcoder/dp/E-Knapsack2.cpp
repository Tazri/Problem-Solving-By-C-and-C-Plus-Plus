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
int inf = 1e9;
int n, k;
vector<int> v;
vector<int> w;
vector<vector<int>> dp;
int solve(int i, int value)
{
    if (i >= n)
    {
        if (value == 0)
            return 0;
        else
            return inf;
    }

    if (dp[i][value] != -1)
        return dp[i][value];

    int a1 = solve(i + 1, value);
    if (value - v[i] >= 0)
    {
        int a2 = w[i] + solve(i + 1, value - v[i]);
        a1 = min(a2, a1);
    }

    dp[i][value] = a1;
    return a1;
}

void _DIBBA(int _DIBBA_NO)
{
    cin >> n >> k;
    int sum = 0;
    v = vector<int>(n);
    w = vector<int>(n);
    for (int i = 0; i < n; i++)
    {
        cin >> w[i] >> v[i];
        sum += v[i];
    }

    dp = vector<vector<int>>(n, vector<int>(sum + 123, -1));
    inf = k + 1;

    for (int vi = sum; vi >= 0; vi--)
        if (solve(0, vi) <= k)
        {
            cout << vi << endl;
            return;
        }
    cout << 0 << endl;
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