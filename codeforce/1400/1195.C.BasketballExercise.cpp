// link : https://codeforces.com/problemset/problem/1195/C
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
#define A 1
#define B 2
int n;
vector<int> a;
vector<int> b;

map<pair<int, pair<int, int>>, int> dp;

int solve(int prev, int i, int sum)
{
    if (i >= n)
    {
        return sum;
    }

    if (dp.count({prev, {i, sum}}))
    {
        return dp[{prev, {i, sum}}];
    }

    if (prev == 0)
    {
        int a1 = solve(A, i + 1, a[i]);
        int a2 = solve(B, i + 1, b[i]);
        int a3 = solve(0, i + 1, sum);
        int ans = max({a1, a2, a3});
        dp[{prev, {i, sum}}] = ans;
        return ans;
    }

    if (prev == A)
    {
        int a1 = solve(B, i + 1, sum + b[i]);
        int a2 = solve(A, i + 1, sum);
        int ans = max(a1, a2);
        dp[{prev, {i, sum}}] = ans;
        return ans;
    }

    int a1 = solve(A, i + 1, sum + a[i]);
    int a2 = solve(B, i + 1, sum);
    int ans = max(a1, a2);
    dp[{prev, {i, sum}}] = ans;
    return ans;
}

void _DIBBA(int _DIBBA_NO)
{
    cin >> n;
    a = vector<int>(n + 1);
    b = vector<int>(n + 1);
    vector<vector<int>> dp(3, vector<int>(n + 1, 0));
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = 1; i <= n; i++)
        cin >> b[i];

    for (int i = n; i >= 1; i--)
    {
        if (i == n)
        {
            dp[0][i] = max(a[i], b[i]);
            dp[A][i] = a[i];
            dp[B][i] = b[i];
            continue;
        }

        for (int op = 0; op <= 2; op++)
        {
            if (op == 0)
            {
                int a1 = dp[B][i + 1] + a[i];
                int a2 = dp[A][i + 1] + b[i];
                int a3 = dp[0][i + 1];
                dp[op][i] = max({a1, a2, a3});
            }
            else if (op == A)
            {
                int a1 = dp[B][i + 1] + a[i];
                int a2 = dp[A][i + 1];
                int ans = max(a1, a2);
                dp[op][i] = ans;
            }
            else if (op == B)
            {
                int a1 = dp[A][i + 1] + b[i];
                int a2 = dp[B][i + 1];
                int ans = max(a1, a2);
                dp[op][i] = ans;
            }
        }
    }

    int start = dp[0][1];
    int aop = dp[A][1];
    int bop = dp[B][1];

    int mx = max({start, aop, bop});
    cout << mx << endl;
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