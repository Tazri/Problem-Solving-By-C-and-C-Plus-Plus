// link : https://cses.fi/problemset/task/1674
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);

int n;
vector<bool> visited;
vector<vector<int>> graph;
vector<int> ans;

void dfs(int i)
{
    if (visited[i])
        return;
    if (graph[i].empty())
    {
        ans[i] = 0;
        return;
    }

    for (int to : graph[i])
    {
        dfs(to);
    }

    ans[i] += graph[i].size();
    for (int to : graph[i])
        ans[i] += ans[to];
    visited[i] = true;
}

void program()
{
    cin >> n;

    graph = vector<vector<int>>(n + 1);
    visited = vector<bool>(n + 1, false);
    ans = vector<int>(n + 1, 0);

    for (int to = 2; to <= n; to++)
    {
        int from;
        cin >> from;
        graph[from].push_back(to);
    }

    for (int i = 1; i <= n; i++)
    {
        if (visited[i])
            continue;
        dfs(i);
    }

    for (int i = 1; i <= n; i++)
        cout << ans[i] << " \n"[i == n];
}

int main()
{
    optimize();
    program();
    return 0;
}