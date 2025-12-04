// link : https://lightoj.com/problem/best-picnic-ever
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
    int k, n, m;
    cin >> k >> n >> m;

    vector<int> fr(k);

    for (int i = 0; i < k; i++)
        cin >> fr[i];

    vector<vector<int>> graph(n + 1);

    for (int i = 0; i < m; i++)
    {
        int from, to;
        cin >> from >> to;
        graph[from].push_back(to);
    }
    vector<int> reach(n + 1, 0);
    for (int f : fr)
    {
        vector<bool> visited(n + 1, false);

        queue<int> q;
        q.push(f);
        visited[f] = true;

        while (q.size())
        {
            int from = q.front();
            q.pop();
            reach[from]++;
            for (int to : graph[from])
            {
                if (visited[to])
                    continue;
                visited[to] = true;
                q.push(to);
            }
        }
    }

    int cnt = 0;

    for (int i = 1; i <= n; i++)
    {
        if (reach[i] == k)
            cnt++;
    }

    cout << cnt << endl;
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