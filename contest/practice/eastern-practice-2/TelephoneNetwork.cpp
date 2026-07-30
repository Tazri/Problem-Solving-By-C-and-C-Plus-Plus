// link : https://www.codechef.com/problems/TELNET
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

int f(pair<int, int> p1, pair<int, int> p2)
{
    int ans = abs(p1.first - p2.first) + abs(p1.second - p2.second);

    return ans;
}

void _DIBBA(int _DIBBA_NO)
{
    int n, k;
    cin >> n >> k;

    vector<vector<pair<int, int>>> v(k + 1);
    vector<vector<int>> cost(n + 1, vector<int>(n + 1, 0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int h;
            cin >> h;
            v[h].push_back({i, j});
        }
    }

    int ans = 0;

    for (int i = 2; i <= k; i++)
    {
        for (pair<int, int> p : v[i])
        {
            for (pair<int, int> prev : v[i - 1])
            {
                int d = f(p, prev);
                int px = prev.first;
                int py = prev.second;
                int c = cost[px][py] + d;
                int x = p.first;
                int y = p.second;

                if (cost[x][y] == 0)
                    cost[x][y] = c;
                else
                    cost[x][y] = min(cost[x][y], c);
            }
        }
    }

    vector<int> vd;
    for (pair<int, int> p : v[k])
    {
        vd.push_back(cost[p.first][p.second]);
    }

    int mn = vd[0];
    for (int i = 1; i < vd.size(); i++)
        mn = min(mn, vd[i]);

    cout << mn << endl;
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