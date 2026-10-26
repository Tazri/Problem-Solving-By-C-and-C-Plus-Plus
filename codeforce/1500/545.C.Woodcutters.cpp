// link : https://codeforces.com/problemset/problem/545/C
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define RIGHT 0
#define MID 1
#define LEFT 2

int n;
vector<int> v;
vector<int> vh;
vector<pair<int, int>> vp;
vector<vector<int>> dp;
int solve(int i, int status)
{
    if (i == n - 1)
        return 1;

    if (i == 0)
    {
        return 1 + solve(i + 1, LEFT);
    }

    if (dp[status][i] != -1)
        return dp[status][i];

    int ans = solve(i + 1, MID);
    if (v[i] + vh[i] < v[i + 1])
        ans = max(ans, 1 + solve(i + 1, RIGHT));

    if (status == RIGHT)
    {
        if (v[i - 1] + vh[i - 1] < v[i] - vh[i])
            ans = max(ans, 1 + solve(i + 1, LEFT));
    }
    else
    {
        if (v[i - 1] < v[i] - vh[i])
            ans = max(ans, 1 + solve(i + 1, LEFT));
    }

    dp[status][i] = ans;

    return ans;
}

void _DIBBA(int _DIBBA_NO)
{
    cin >> n;
    v = vector<int>(n);
    vh = vector<int>(n);
    vp = vector<pair<int, int>>(n);
    dp = vector<vector<int>>(3, vector<int>(n, -1));
    for (int i = 0; i < n; i++)
        cin >> vp[i].first >> vp[i].second;

    sort(vp.begin(), vp.end());
    for (int i = 0; i < n; i++)
    {
        v[i] = vp[i].first;
        vh[i] = vp[i].second;
    }

    cout << solve(0, LEFT) << endl;
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