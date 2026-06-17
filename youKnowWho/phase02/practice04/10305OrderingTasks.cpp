// link : https://vjudge.net/problem/UVA-10305/origin
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int n, m;
vector<int> mark;
vector<vector<int>> graph;
vector<int> comeFrom;
bool isCycle = false;
vector<int> cycle;
vector<int> topSort;

void dfs(int i, int prev)
{
    if (isCycle)
        return;

    if (mark[i] == 2)
        return;

    if (mark[i] == 1)
    {
        isCycle = true;
        int curr = prev; // go backward curr to - prev
        while (curr != i)
        {
            cycle.push_back(curr);
            curr = comeFrom[curr];
        }

        cycle.push_back(curr);
        reverse(cycle.begin(), cycle.end());
        cycle.push_back(curr);
        return;
    }

    comeFrom[i] = prev;
    mark[i] = 1;
    for (int to : graph[i])
    {
        dfs(to, i);
        if (isCycle)
            return;
    }
    topSort.push_back(i);
    mark[i] = 2;
}

void _DIBBA(int _DIBBA_NO)
{
    graph = vector<vector<int>>(n + 1);
    mark = vector<int>(n + 1);
    comeFrom = vector<int>(n + 1);
    topSort.clear();
    cycle.clear();
    isCycle = false;

    for (int i = 0; i < m; i++)
    {
        int from, to;
        cin >> from >> to;
        graph[from].push_back(to);
    }

    for (int i = 1; i <= n; i++)
    {
        if (mark[i] == 2)
            continue;
        dfs(i, 0);
    }

    reverse(topSort.begin(), topSort.end());

    for (int i = 0; i < n; i++)
        cout << topSort[i] << " \n"[i == n - 1];
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    while (true)
    {
        cin >> n >> m;
        if (n == 0 && m == 0)
            break;

        _DIBBA(t++);
    }
    return 0;
}