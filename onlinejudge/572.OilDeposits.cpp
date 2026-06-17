// link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=0&problem=513&mosmsg=Submission+received+with+ID+31179268
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

// 8 direction
vector<int> di = {1, -1, 0, 0, 1, 1, -1, -1}; // dx
vector<int> dj = {0, 0, 1, -1, 1, -1, 1, -1}; // dy

void _DIBBA(int n, int m, int _DIBBA_NO)
{
    vector<string> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<vector<bool>> visited(n, vector<bool>(m, false));

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (visited[i][j])
                continue;

            if (v[i][j] == '*')
                continue;

            queue<pair<int, int>> q;
            q.push({i, j});
            visited[i][j] = true;

            while (q.size() > 0)
            {
                pair<int, int> p = q.front();
                int fi = p.first;
                int fj = p.second;
                q.pop();

                for (int d = 0; d < 8; d++)
                {
                    int toi = fi + di[d];
                    int toj = fj + dj[d];

                    if (toi < 0 || toi >= n || toj < 0 || toj >= m)
                        continue;

                    if (v[toi][toj] == '*')
                        continue;

                    if (visited[toi][toj])
                        continue;
                    visited[toi][toj] = true;
                    q.push({toi, toj});
                }
            }

            ans++;
        }
    }

    cout << ans << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    int n, m;
    while (true)
    {
        cin >> n >> m;
        if (n == 0 || m == 0)
            break;

        _DIBBA(n, m, t);
        t++;
    }
    return 0;
}