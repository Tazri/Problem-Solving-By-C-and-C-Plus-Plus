// link : https://codeforces.com/contest/1176/problem/E
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
    vector<int> dist(n + 1, 0);
    vector<bool> visited(n + 1, false);

    for (int i = 0; i < m; i++)
    {
        int from, to;
        cin >> from >> to;
        graph[from].push_back(to);
        graph[to].push_back(from);
    }

    queue<int> q;
    q.push(1);
    visited[1] = true;

    while (q.size())
    {
        int from = q.front();
        q.pop();

        for (int to : graph[from])
        {
            if (visited[to])
                continue;
            dist[to] = dist[from] + 1;
            visited[to] = true;
            q.push(to);
        }
    }

    vector<int> odd;
    odd.reserve(n);
    vector<int> even;
    odd.reserve(n);

    for (int i = 1; i <= n; i++)
        if (dist[i] & 1)
            odd.push_back(i);
        else
            even.push_back(i);

    if (odd.size() <= (n / 2))
    {
        cout << odd.size() << endl;
        for (int i = 0; i < odd.size(); i++)
            cout << odd[i] << " \n"[i == odd.size() - 1];
    }
    else
    {
        cout << even.size() << endl;
        for (int i = 0; i < even.size(); i++)
            cout << even[i] << " \n"[i == even.size() - 1];
    }
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}