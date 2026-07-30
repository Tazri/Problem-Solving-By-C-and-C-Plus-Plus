// link : https://lightoj.com/problem/divisible-group-sums
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
vector<int> a;
int dp[201][11][22];
int n, q, m, d;

int solve(int i, int cnt, int sum)
{
    if (cnt > m)
        return 0;

    if (i >= n)
    {
        if (cnt == m && (sum % d == 0))
            return 1;
        else
            return 0;
    }
    vector<int> key = {i, cnt, sum};

    if (dp[i][cnt][sum] != -1)
    {
        return dp[i][cnt][sum];
    }

    int nxtSum = (sum + (((a[i] % d) + d) % d)) % d;
    int ans = solve(i + 1, cnt, sum) + solve(i + 1, cnt + 1, nxtSum);

    dp[i][cnt][sum] = ans;
    return ans;
}

void _DIBBA(int _DIBBA_NO)
{
    cout << "Case " << _DIBBA_NO << ":" << endl;
    cin >> n >> q;
    a = vector<int>(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int qi = 1; qi <= q; qi++)
    {
        cin >> d >> m;
        memset(dp, -1, sizeof dp);
        int ans = solve(0, 0, 0);
        cout << ans << endl;
    }
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