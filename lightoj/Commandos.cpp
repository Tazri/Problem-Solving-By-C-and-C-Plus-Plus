// link : https://lightoj.com/problem/commandos
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

void program(int caseno)
{
    cout << "Case " << caseno << ": ";

    int n, m;
    cin >> n >> m;
    vector<vector<int>> graph(n);

    for (int i = 0; i < m; i++)
    {
        int from, to;
        cin >> from >> to;
        graph[from].push_back(to);
        graph[to].push_back(from);
    }

    int end, start;
    cin >> start >> end;
    vector<int> startdist(n, 0);
    vector<int> enddist(n, 0);
    vector<bool> visited(n, false);

    queue<int> q;
    q.push(start);
    visited[start] = true;

    while (q.size())
    {
        int from = q.front();
        q.pop();

        for (int to : graph[from])
        {
            if (visited[to])
                continue;
            visited[to] = true;
            startdist[to] = startdist[from] + 1;
            q.push(to);
        }
    }

    q.push(end);
    visited = vector<bool>(n, false);
    visited[end] = true;

    while (q.size())
    {
        int from = q.front();
        q.pop();

        for (int to : graph[from])
        {
            if (visited[to])
                continue;

            visited[to] = true;
            enddist[to] = enddist[from] + 1;
            q.push(to);
        }
    }

    vector<int> ans;
    ans.reserve(n);

    for (int i = 0; i < n; i++)
    {
        int take = startdist[i] + enddist[i];
        ans.push_back(take);
    }

    int mx = ans[0];
    for (int ai : ans)
        mx = max(ai, mx);

    cout << mx << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
        program(i);
    return 0;
}