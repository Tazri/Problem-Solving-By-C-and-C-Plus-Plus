// link : https://lightoj.com/problem/coin-change-i
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

int mod = 100000007;
vector<int> a;
vector<int> v;
int n, k;
vector<vector<int>> dp;
int solve(int i, int coin)
{
    if (i == n)
    {
        return coin == k ? 1 : 0;
    }

    if (dp[i][coin] != -1)
        return dp[i][coin];

    int ans = 0;

    for (int j = 0; j <= a[i]; j++)
    {
        int take = (j * v[i]);
        if (coin + take <= k)
            ans += solve(i + 1, coin + take);
        ans %= mod;
    }

    dp[i][coin] = ans;
    return ans;
}

void _DIBBA(int _DIBBA_NO)
{
    cout << "Case " << _DIBBA_NO << ": ";
    cin >> n >> k;
    a = vector<int>(n);
    v = vector<int>(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = 0; i < n; i++)
    {
        sum += (a[i] * v[i]);
        cin >> a[i];
    }

    dp = vector<vector<int>>(n, vector<int>(k + 123, -1));
    cout << solve(0, 0) << endl;
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