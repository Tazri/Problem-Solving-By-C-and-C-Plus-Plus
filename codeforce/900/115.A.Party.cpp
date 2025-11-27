// link : https://codeforces.com/problemset/problem/115/A
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
    int n;
    cin >> n;
    vector<vector<int>> graph(n + 1);

    for (int i = 1; i <= n; i++)
    {
        int from = i;
        int to;
        cin >> to;

        if (to == -1)
        {
            continue;
        }
        graph[from].push_back(to);
    }
    int ans = 1;

    for (int i = 1; i <= n; i++)
    {
        vector<int> dist(n + 1, 0);
        vector<bool> visited(n + 1, false);

        queue<int> q;
        q.push(i);
        visited[i] = true;

        int mx = 0;
        while (q.size())
        {
            int from = q.front();
            q.pop();

            for (int to : graph[from])
            {
                if (visited[to])
                    continue;

                visited[to] = true;
                dist[to] = dist[from] + 1;
                mx = max(dist[to], mx);
                q.push(to);
            }
        }

        mx++;
        ans = max(mx, ans);
    }

    cout << ans << endl;
}

int main()
{
    optimize();

    program();
    return 0;
}