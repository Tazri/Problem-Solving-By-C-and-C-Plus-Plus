#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void _DIBBA(int _DIBBA_NO)
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> graph(n + 1);

    for (int i = 0; i < m; i++)
    {
        int from, to;
        cin >> from >> to;
        graph[from].push_back(to);
        graph[to].push_back(from);
    }
    vector<int> color(n + 1, 0);

    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (color[i])
            continue;

        vector<int> nds;

        queue<int> q;
        q.push(i);
        color[i] = 1;
        bool valid = true;

        while (q.size() > 0)
        {
            int from = q.front();
            nds.push_back(from);
            q.pop();
            int clr = color[from] == 1 ? 2 : 1;

            for (int to : graph[from])
            {
                if (color[to])
                {
                    if (color[to] == color[from])
                        valid = false;
                    continue;
                }

                color[to] = clr;
                q.push(to);
            }
        }

        if (!valid)
            continue;
        int one = 0;
        int two = 0;

        for (int ni : nds)
            if (color[ni] == 1)
                one++;
            else
                two++;

        ans += max(one, two);
    }

    cout << ans << endl;
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