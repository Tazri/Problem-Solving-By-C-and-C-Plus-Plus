// link : https://codeforces.com/problemset/problem/1689/C
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

vector<vector<int>> graph;
vector<int> subTreeSize;

int goriberDP(int n, int pr)
{
    vector<int> v;

    for (int nds : graph[n])
    {
        if (nds != pr)
            v.push_back(nds);
    }

    if (v.size() == 0)
    {

        return 0;
    }

    if (v.size() == 1)
    {
        return subTreeSize[v[0]] - 1;
    }

    int left = v[0];
    int right = v[1];

    int a1 = subTreeSize[left] - 1 + goriberDP(right, n);
    int a2 = subTreeSize[right] - 1 + goriberDP(left, n);

    int mx = max(a1, a2);

    return mx;
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    graph = vector<vector<int>>(n + 1);

    for (int i = 0; i < n - 1; i++)
    {
        int from, to;
        cin >> from >> to;

        graph[from].push_back(to);
        graph[to].push_back(from);
    }

    vector<int> dist(n + 1);

    vector<bool> visited(n + 1, false);

    queue<int> q;
    q.push(1);
    visited[1] = true;
    dist[1] = 0;
    int mxLevel = 0;
    while (q.size() > 0)
    {
        int from = q.front();
        q.pop();

        for (int to : graph[from])
        {
            if (visited[to])
                continue;

            visited[to] = true;
            dist[to] = dist[from] + 1;
            mxLevel = max(mxLevel, dist[to]);
            q.push(to);
        }
    }

    vector<vector<int>> levels(mxLevel + 1);

    for (int i = 1; i <= n; i++)
        levels[dist[i]].push_back(i);

    visited = vector<bool>(n + 1, false);
    subTreeSize = vector<int>(n + 1, 0);
    for (int i = mxLevel; i >= 0; i--)
    {
        for (int nds : levels[i])
        {
            subTreeSize[nds]++;

            for (int to : graph[nds])
            {
                if (visited[to])
                    continue;

                subTreeSize[to] += subTreeSize[nds];
            }
            visited[nds] = true;
        }
    }

    cout << goriberDP(1, 0) << endl;
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