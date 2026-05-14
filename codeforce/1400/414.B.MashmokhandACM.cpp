// link : https://codeforces.com/problemset/problem/414/B
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define int ll
int mod = ((ll)1e9) + 7;
// vector<vector<int>> dp;
// int n, k;

// int solve(int prev, int i)
// {
//     if (i >= k)
//     {
//         return (n / prev);
//     }

//     if (dp[prev][i] != -1)
//         return dp[prev][i];

//     int sum = 0;
//     for (int j = prev; j <= n; j += prev)
//     {
//         sum += solve(j, i + 1);
//         sum %= mod;
//     }

//     dp[prev][i] = sum;
//     return sum;
// }

void _DIBBA(int _DIBBA_NO)
{
    int n, k;
    cin >> n >> k;
    vector<vector<int>> dp(n + 1, vector<int>(k + 1));

    for (int prev = 1; prev <= n; prev++)
    {
        dp[prev][k] = n / prev;
    }

    for (int i = k - 1; i >= 1; i--)
    {
        for (int prev = 1; prev <= n; prev++)
        {
            int sum = 0;
            for (int j = prev; j <= n; j += prev)
            {
                sum += dp[j][i + 1];
                sum %= mod;
            }
            dp[prev][i] = sum;
        }
    }

    cout << dp[1][1] << endl;
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