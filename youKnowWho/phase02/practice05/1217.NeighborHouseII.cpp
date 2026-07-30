// link : https://lightoj.com/problem/neighbor-house-ii
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
int dp[1012][2][2];
int solve(int i, int last, int first)
{
    if (i >= n)
    {
        return 0;
    }

    if (dp[i][last][first] != -1)
    {
        return dp[i][last][first];
    }

    if (i == n - 1)
    {
        if ((!last) && (!first))
        {
            int a1 = solve(i + 1, 0, first);
            int a2 = v[i] + solve(i + 1, 1, first);
            dp[i][last][first] = max(a1, a2);
            return max(a1, a2);
        }
        else
        {
            dp[i][last][first] = solve(i + 1, 0, first);
            return dp[i][last][first];
        }
    }
    int ans = solve(i + 1, 0, first);
    if (last == 0)
        ans = max(ans, v[i] + solve(i + 1, 1, first));
    dp[i][last][first] = ans;
    return ans;
}

void _DIBBA(int _DIBBA_NO)
{
    cout << "Case " << _DIBBA_NO << ": ";
    cin >> n;
    v = vector<int>(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];
    memset(dp, -1, sizeof dp);
    int ans = solve(1, 0, 0);
    ans = max(ans, v[0] + solve(1, 1, 1));

    cout << ans << endl;
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