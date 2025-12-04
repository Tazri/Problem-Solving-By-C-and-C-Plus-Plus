// link : https://cses.fi/problemset/task/1668
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
    vector<int> color(n + 1, 0);
    vector<int> ans(n + 1, 0);
    for (int i = 0; i < m; i++)
    {
        int from, to;
        cin >> from >> to;

        graph[from].push_back(to);
        graph[to].push_back(from);
    }

    for (int i = 1; i <= n; i++)
    {
        if (color[i])
            continue;
        color[i] = 1;
        queue<int> q;

        q.push(i);

        while (q.size())
        {
            int from = q.front();
            q.pop();

            for (int to : graph[from])
            {
                if (color[to])
                {
                    if (color[to] == color[from])
                    {
                        cout << "IMPOSSIBLE" << endl;
                        return;
                    }
                    continue;
                }

                color[to] = color[from] == 1 ? 2 : 1;
                q.push(to);
            }
        }
    }

    for (int i = 1; i <= n; i++)
        cout << color[i] << " \n"[i == n];
}

int main()
{
    optimize();
    program();
    return 0;
}