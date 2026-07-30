// link : https://atcoder.jp/contests/dp/tasks/dp_i?lang=en
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)
#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int n;
vector<double> v;
vector<vector<double>> dp;
vector<vector<bool>> vis;
double solve(int i, int head)
{
    if (i >= n)
    {
        int tail = n - head;

        if (tail >= head)
            return 0.0;
        else
            return 1.0;
    }

    if (vis[i][head])
    {
        return dp[i][head];
    }

    vis[i][head] = true;
    double ans = (1.0 - v[i]) * solve(i + 1, head);
    ans += v[i] * solve(i + 1, head + 1);

    dp[i][head] = ans;
    return ans;
}

void _DIBBA(int _DIBBA_NO)
{
    cin >> n;
    v = vector<double>(n);
    dp = vector<vector<double>>(n, vector<double>(n + 1));
    vis = vector<vector<bool>>(n, vector<bool>(n + 1, false));

    for (int i = 0; i < n; i++)
        cin >> v[i];

    cout << solve(0, 0) << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();
    fraction();
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}