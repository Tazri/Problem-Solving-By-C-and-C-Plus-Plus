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
string s;
vector<vector<int>> dp;
int solve(int l, int r)
{
    if (l == r)
    {
        return 1;
    }

    if (l > r)
        return 0;

    if (dp[l][r] != -1)
        return dp[l][r];
    int ans = 0;
    if (s[l] == s[r])
    {
        ans = 2 + solve(l + 1, r - 1);
    }
    else
    {
        ans = max(solve(l + 1, r), solve(l, r - 1));
    }

    dp[l][r] = ans;
    return ans;
}

void _DIBBA(int _DIBBA_NO)
{
    getline(cin, s);
    n = s.size();
    dp = vector<vector<int>>(n, vector<int>(n, -1));
    cout << solve(0, n - 1) << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    cin >> t;
    cin.ignore();
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}