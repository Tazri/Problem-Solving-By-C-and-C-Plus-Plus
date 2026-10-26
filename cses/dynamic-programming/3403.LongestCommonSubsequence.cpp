// link: https://cses.fi/problemset/task/3403/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int n, m;
vector<int> a, b;
vector<vector<int>> dp;
vector<vector<int>> dir;
int solve(int i, int j)
{
    if (i >= n || j >= m)
        return 0;

    if (dp[i][j] != -1)
        return dp[i][j];

    dir[i][j] = 1;
    int ans1 = solve(i + 1, j);
    int ans = ans1;
    int ans2 = solve(i, j + 1);

    if (ans2 > ans1)
    {
        dir[i][j] = 2;
        ans = ans2;
    }

    if (a[i] == b[j])
    {
        int ans3 = 1 + solve(i + 1, j + 1);
        if (ans3 > ans)
        {
            dir[i][j] = 3;
            ans = ans3;
        }
    }

    dp[i][j] = ans;
    return ans;
}

void _DIBBA(int _DIBBA_NO)
{
    cin >> n >> m;
    a = vector<int>(n);
    b = vector<int>(m);
    dp = vector<vector<int>>(n, vector<int>(m, -1));
    dir = vector<vector<int>>(n, vector<int>(m, 1));
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    solve(0, 0);
    vector<int> sub;
    int i = 0;
    int j = 0;
    while (i < n && j < m)
    {
        if (dir[i][j] == 1)
            i++;
        else if (dir[i][j] == 2)
            j++;
        else if (dir[i][j] == 3)
        {
            sub.push_back(a[i]);
            i++;
            j++;
        }
    }

    cout << sub.size() << endl;
    for (int i = 0; i < sub.size(); i++)
        cout << sub[i] << " \n"[i == sub.size() - 1];
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