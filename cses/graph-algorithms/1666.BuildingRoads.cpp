// linK : https://cses.fi/problemset/task/1666
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
vector<bool> visited;

void program()
{
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

    vector<int> component;

    for (int i = 1; i <= n; i++)
    {
        if (visited[i])
            continue;

        component.push_back(i);

        visited[i] = true;
        queue<int> q;
        q.push(i);

        while (q.size())
        {
            int qi = q.front();
            q.pop();

            for (int to : graph[qi])
            {
                if (visited[to])
                    continue;
                visited[to] = true;
                q.push(to);
            }
        }
    }

    cout << component.size() - 1 << endl;
    for (int i = 1; i < component.size(); i++)
        cout << component[i - 1] << " " << component[i] << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}