// link : https://codeforces.com/problemset/problem/698/A
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
vector<vector<int>> dp;

int solve(int i, int prev)
{
    if (i > n - 1)
        return 0;

    if (dp[i][prev] != -1)
    {
        return dp[i][prev];
    }

    vector<int> choose = {0};

    if (v[i] == 1 && prev != 1)
        choose.push_back(1);
    else if (v[i] == 2 && prev != 2)
        choose.push_back(2);
    else if (v[i] == 3)
    {
        for (int i = 1; i <= 2; i++)
            if (i != prev)
                choose.push_back(i);
    }

    int mn = -1;
    for (int ci : choose)
    {
        int ans = ci == 0 ? 1 : 0;
        ans += solve(i + 1, ci);

        if (mn == -1)
            mn = ans;
        mn = min(ans, mn);
    }

    dp[i][prev] = mn;
    return mn;
}

void _DIBBA(int _DIBBA_NO)
{
    cin >> n;
    v = vector<int>(n);
    dp = vector<vector<int>>(n, vector<int>(3, -1));

    for (int i = 0; i < n; i++)
        cin >> v[i];

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