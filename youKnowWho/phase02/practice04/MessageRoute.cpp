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

    vector<bool> visited(n + 1, false);
    vector<int> comeFrom(n + 1, -1);
    visited[1] = true;
    queue<int> q;
    q.push(1);

    while (q.size() > 0)
    {
        int from = q.front();
        q.pop();

        for (int to : graph[from])
        {
            if (visited[to])
            {
                continue;
            }

            visited[to] = true;
            comeFrom[to] = from;
            q.push(to);
        }
    }

    if (comeFrom[n] == -1)
    {
        cout << "IMPOSSIBLE" << endl;
        return;
    }

    int curr = n;
    vector<int> path;
    while (curr != -1)
    {
        path.push_back(curr);
        curr = comeFrom[curr];
    }

    reverse(path.begin(), path.end());

    cout << path.size() << endl;
    for (int i = 0; i < path.size(); i++)
        cout << path[i] << " \n"[path.size() - 1 == i];
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