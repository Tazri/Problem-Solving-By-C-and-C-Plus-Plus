// link : https://codeforces.com/contest/2248/my
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

map<int, int> mp;
int n;
vector<int> v;
vector<int> dp;
int solve(int i)
{
    if (i > (2 * n))
        return 0;

    if (dp[i] != -1)
        return dp[i];

    int r = mp[v[i]];

    int ans = 0;
    if (r == i)
    {
        ans = 1 + solve(i + 1);
    }
    else
    {
        ans = 1 + solve(i + 1);
        int len = r - i + 1;
        ans = max(ans, (len * len) + solve(r + 1));
    }

    dp[i] = ans;
    return ans;
}

void _DIBBA(int _DIBBA_NO)
{
    cin >> n;
    v = vector<int>((2 * n) + 1);
    dp = vector<int>((2 * n) + 1, -1);
    for (int i = 1; i <= 2 * n; i++)
    {
        cin >> v[i];
        mp[v[i]] = i;
    }

    cout << solve(1) << endl;
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