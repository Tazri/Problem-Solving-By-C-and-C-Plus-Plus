// linK : https://codeforces.com/problemset/problem/1881/E
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
vector<int> dp;
int solve(int i)
{
    if (i >= n)
        return 0;

    if (dp[i] != -1)
        return dp[i];
    int ans = solve(i + 1);
    if (i + v[i] < n)
    {
        ans = max(v[i] + 1 + solve(i + v[i] + 1), ans);
    }

    dp[i] = ans;

    return ans;
}

void _DIBBA(int _DIBBA_NO)
{
    cin >> n;
    v = vector<int>(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    dp = vector<int>(n, -1);
    cout << n - solve(0) << endl;
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