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
    int n, m;
    cin >> n >> m;

    vector<vector<int>> graph(n + 1);
    vector<int> parent(n + 1, 0);
    vector<bool> visited(n + 1, false);
    for (int i = 0; i < m; i++)
    {
        int from, to;
        cin >> from >> to;
        graph[from].push_back(to);
        graph[to].push_back(from);
    }

    visited[1] = true;
    queue<int> q;
    q.push(1);

    while (q.size())
    {
        int from = q.front();
        q.pop();

        for (int to : graph[from])
        {
            if (visited[to])
            {
                if (parent[from] == to)
                    continue;
                cout << "NO" << endl;
                return;
            }

            visited[to] = true;
            parent[to] = from;
            q.push(to);
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (visited[i] == false)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}