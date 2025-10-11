#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)

vector<int> di = {1, -1, 0, 0};
vector<int> dj = {0, 0, 1, -1};

void program()
{
    int n, m, s;
    cin >> n >> m >> s;

    vector<string> g(n);

    for (int i = 0; i < n; i++)
        cin >> g[i];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int mn = min(i, j);
            int mnd = min(n - i - 1, m - j - 1);

            if (g[i][j] == '.' && (mn < s || mnd < s))
                g[i][j] = 'x';
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (g[i][j] == 'x' || g[i][j] == '.')
                continue;

            for (int t = 1; t <= s; t++)
            {
                for (int d = 0; d < 4; d++)
                {
                    int ni = i + (t * di[d]);
                    int nj = j + (t * dj[d]);

                    if (ni < n && ni >= 0 && nj < m && nj >= 0)
                    {
                        if (g[ni][nj] == '#')
                            continue;
                        g[ni][nj] = 'x';
                    }
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (g[i][j] == 'x' || g[i][j] == '#')
                continue;

            for (int d = 0; d < 4; d++)
            {
                int i1 = i + (1 * di[d]);
                int j1 = j + (1 * dj[d]);

                if (i1 < 0 || i1 >= n || j1 < 0 || j1 >= m)
                    continue;

                if (g[i1][j1] != 'x')
                    continue;

                for (int t = 1; t <= s; t++)
                {
                    int ni = i + (t * di[d]);
                    int nj = j + (t * dj[d]);

                    if (ni >= 0 && ni < n && nj >= 0 && nj < m)
                        g[ni][nj] = 'x';
                }
            }
        }
    }

    cout << "update grid : " << endl;
    for (string s : g)
        cout << s << endl;

    queue<pair<int, int>> q;
    int mx = 0;
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (g[i][j] != '.')
                continue;

            q.push({i, j});
            g[i][j] = 'x';

            while (q.size())
            {
                pair<int, int> p = q.front();
                q.pop();
                int qi = p.first;
                int qj = p.second;
                cnt++;
                for (int d = 0; d < 4; d++)
                {
                    int ni = qi + (1 * di[d]);
                    int nj = qj + (1 * dj[d]);

                    if (ni < 0 || ni >= n || nj < 0 || nj >= m)
                        continue;

                    if (g[ni][nj] != '.')
                        continue;

                    g[ni][nj] = 'x';
                    q.push({ni, nj});
                }
            }

            mx = max(cnt, mx);
            cnt = 0;
        }
    }

    // cout << "update grid : " << endl;
    // for (string s : g)
    //     cout << s << endl;

    cout << mx << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}