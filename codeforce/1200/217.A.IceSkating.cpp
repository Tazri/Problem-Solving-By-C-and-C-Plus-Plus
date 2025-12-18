// link : https://codeforces.com/contest/217/problem/A
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

bool conncect(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first == p2.first || p1.second == p2.second;
}

void program()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i].first >> v[i].second;

    vector<vector<int>> graph(n);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (conncect(v[i], v[j]))
            {
                graph[i].push_back(j);
                graph[j].push_back(i);
            }
        }
    }

    vector<bool> visited(n, false);

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (visited[i])
            continue;

        ans++;
        queue<int> q;
        visited[i] = true;

        q.push(i);

        while (q.size())
        {
            int from = q.front();
            q.pop();

            for (int to : graph[from])
            {
                if (visited[to])
                    continue;
                visited[to] = true;
                q.push(to);
            }
        }
    }

    cout << ans - 1 << endl;
}

int main()
{
    optimize();
    program();

    return 0;
}