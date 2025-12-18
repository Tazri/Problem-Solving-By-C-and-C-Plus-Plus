#define PI30 "3141592653589793238462643383279"
// link : https://cses.fi/problemset/task/1679/
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

int n, m;
vector<vector<int>> graph;
vector<int> mark;
vector<int> ans;
bool isCycle = false;

void dfs(int i)
{
    if (isCycle)
        return;

    if (mark[i] == 2)
        return;

    if (mark[i] == 1)
    {
        isCycle = true;
        return;
    }

    mark[i] = 1;
    for (int to : graph[i])
    {
        dfs(to);
    }
    mark[i] = 2;
    ans.push_back(i);
}

void program()
{
    cin >> n >> m;

    graph = vector<vector<int>>(n + 1);
    mark = vector<int>(n + 1, 0);
    ans.reserve(n);

    for (int i = 1; i <= m; i++)
    {
        int from, to;
        cin >> from >> to;
        graph[from].push_back(to);
    }

    for (int i = 1; i <= n; i++)
    {
        dfs(i);
    }

    if (isCycle)
    {
        cout << "IMPOSSIBLE" << endl;
        return;
    }

    reverse(ans.begin(), ans.end());

    for (int i = 0; i < n; i++)
        cout << ans[i] << " \n"[i == n - 1];
}

int main()
{
    optimize();

    program();
    return 0;
}