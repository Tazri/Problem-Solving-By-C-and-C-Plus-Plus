// link : https://atcoder.jp/contests/dp/tasks/dp_f
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define T1 1
#define T2 2
#define T3 3
#define T4 4

string a, b;
vector<int> step;
vector<vector<int>> track;
vector<vector<int>> dp;
int solve(int i, int j)
{
    if (i >= a.size() || j >= b.size())
        return 0;

    if (dp[i][j] != -1)
        return dp[i][j];

    int t1 = solve(i + 1, j);
    int t2 = solve(i, j + 1);
    int mx = t1;
    int select = 1;
    if (mx < t2)
    {
        mx = t2;
        select = 2;
    }

    if (a[i] == b[j])
    {
        int t3 = 1 + solve(i + 1, j + 1);
        if (mx < t3)
        {
            mx = t3;
            select = 3;
        }
    }
    else
    {
        int t4 = solve(i + 1, j + 1);
        if (mx < t4)
        {
            mx = t4;
            select = 4;
        }
    }

    track[i][j] = select;
    dp[i][j] = mx;
    return mx;
}

void _DIBBA(int _DIBBA_NO)
{
    cin >> a;
    cin >> b;
    track = vector<vector<int>>(a.size(), vector<int>(b.size(), -1));
    dp = vector<vector<int>>(a.size(), vector<int>(b.size(), -1));
    solve(0, 0);
    int i = 0;
    int j = 0;
    string ans;
    while (i < a.size() && j < b.size())
    {
        int stp = track[i][j];

        if (stp == 1)
            i++;
        else if (stp == 2)
            j++;
        else if (stp == 3)
        {
            ans.push_back(a[i]);
            i++;
            j++;
        }
        else if (stp == 4)
        {
            i++;
            j++;
        }
    }

    cout << ans << endl;
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