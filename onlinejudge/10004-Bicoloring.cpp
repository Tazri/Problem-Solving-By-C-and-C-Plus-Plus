// link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=945
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void _DIBBA(int n, int _DIBBA_NO)
{
    int m;
    cin >> m;
    vector<vector<int>> graph(n);

    for (int i = 0; i < m; i++)
    {
        int from, to;
        cin >> from >> to;
        graph[from].push_back(to);
        graph[to].push_back(from);
    }

    vector<int> color(n, -1);
    queue<int> q;
    q.push(0);
    color[0] = 0;

    while (q.size() > 0)
    {
        int from = q.front();
        q.pop();

        for (int to : graph[from])
        {
            if (color[to] != -1)
            {
                if (color[to] == color[from])
                {
                    cout << "NOT BICOLORABLE." << endl;
                    return;
                }
                continue;
            }

            color[to] = !color[from];
            q.push(to);
        }
    }

    cout << "BICOLORABLE." << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;

    int n;
    while (true)
    {
        int n;
        cin >> n;

        if (n == 0)
            break;

        _DIBBA(n, t);
        t++;
    }
    return 0;
}