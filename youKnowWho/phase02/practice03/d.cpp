#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int n, m, c;
vector<vector<int>> v;
map<pair<vector<vector<int>>, int>, int> mp;

int fcnt()
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        bool allOne = true;
        for (int j = 0; j < m; j++)
        {
            if (v[i][j] == 0)
            {
                allOne = false;
                break;
            }
        }

        if (allOne)
            ans++;
    }

    return ans;
}

int solve(int c)
{
    if (c <= 0)
    {
        int res = fcnt();
        return fcnt();
    }

    pair<vector<vector<int>>, int> key = {v, c};

    if (mp.count(key))
    {
        return mp[key];
    }

    int mx = -1;
    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
            v[i][j] = !v[i][j];

        int res = solve(c - 1);
        for (int i = 0; i < n; i++)
            v[i][j] = !v[i][j];

        if (mx == -1)
            mx = res;
        mx = max(res, mx);
    }

    mp[key] = mx;

    return mx;
}

void _DIBBA(int _DIBBA_NO)
{
    cin >> n >> m >> c;
    v = vector<vector<int>>(n, vector<int>(m));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> v[i][j];

    cout << solve(c) << endl;
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