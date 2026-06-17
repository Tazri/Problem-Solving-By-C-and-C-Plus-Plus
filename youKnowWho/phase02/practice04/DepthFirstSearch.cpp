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
vector<int> startTime, endTime;
vector<bool> visited;
int currentTime = 1;
void dfs(int from)
{
    if (visited[from])
        return;

    startTime[from] = currentTime;
    currentTime++;
    visited[from] = true;

    for (int to : graph[from])
    {
        dfs(to);
    }
    endTime[from] = currentTime;
    currentTime++;
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    graph = vector<vector<int>>(n + 1);
    startTime = vector<int>(n + 1);
    endTime = vector<int>(n + 1);
    visited = vector<bool>(n + 1, false);

    for (int i = 0; i < n; i++)
    {
        int u, k;
        cin >> u >> k;

        for (int j = 0; j < k; j++)
        {
            int v;
            cin >> v;
            graph[u].push_back(v);
        }

        sort(graph[u].begin(), graph[u].end());
    }

    for (int i = 1; i <= n; i++)
    {
        dfs(i);
    }

    for (int i = 1; i <= n; i++)
    {
        cout << i << " " << startTime[i] << " " << endTime[i] << endl;
    }
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