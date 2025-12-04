// link : https://cses.fi/problemset/task/1131
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

void program()
{
    int n;
    cin >> n;
    vector<vector<int>> graph(n + 1);
    vector<int> dist(n + 1, 0);
    vector<bool> visited(n + 1, false);

    for (int i = 1; i <= n - 1; i++)
    {
        int from, to;
        cin >> from >> to;
        graph[from].push_back(to);
        graph[to].push_back(from);
    }

    queue<int> q;
    q.push(1);
    visited[1] = true;

    while (q.size())
    {
        int from = q.front();
        q.pop();

        for (int to : graph[from])
        {
            if (visited[to])
                continue;
            dist[to] = dist[from] + 1;
            visited[to] = true;
            q.push(to);
        }
    }

    int mxNode = 1;

    for (int i = 1; i <= n; i++)
    {
        if (dist[i] > dist[mxNode])
            mxNode = i;
    }

    visited = vector<bool>(n + 1, false);
    dist = vector<int>(n + 1, 0);

    visited[mxNode] = true;
    q.push(mxNode);
    while (q.size())
    {
        int from = q.front();
        q.pop();

        for (int to : graph[from])
        {
            if (visited[to])
                continue;
            dist[to] = dist[from] + 1;
            visited[to] = true;
            q.push(to);
        }
    }

    int ans = 0;
    for (int i = 1; i <= n; i++)
        ans = max(ans, dist[i]);

    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}