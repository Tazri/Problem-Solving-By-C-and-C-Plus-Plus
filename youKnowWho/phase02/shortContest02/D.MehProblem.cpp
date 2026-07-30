// link : https://codeforces.com/problemset/problem/1106/D
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int n;
vector<vector<int>> graph;
vector<bool> visited;
vector<int> perm;

void _DIBBA(int _DIBBA_NO)
{
    int n, m;
    cin >> n >> m;
    graph = vector<vector<int>>(n + 1);
    visited = vector<bool>(n + 1, false);

    for (int i = 0; i < m; i++)
    {
        int from, to;
        cin >> from >> to;
        graph[from].push_back(to);
        graph[to].push_back(from);
    }

    for (int i = 1; i <= n; i++)
    {
        sort(graph[i].begin(), graph[i].end());
    }

    priority_queue<int, vector<int>, greater<int>> pq;
    visited[1] = true;
    pq.push(1);

    while (pq.size() > 0)
    {
        int from = pq.top();
        pq.pop();
        perm.push_back(from);

        for (int to : graph[from])
        {
            if (visited[to])
                continue;
            pq.push(to);
            visited[to] = true;
        }
    }

    for (int i = 0; i < n; i++)
        cout << perm[i] << " \n"[i == n - 1];
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