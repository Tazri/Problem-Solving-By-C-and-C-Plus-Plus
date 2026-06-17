// link : https://codeforces.com/problemset/problem/24/A
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;

    vector<vector<int>> cost(n + 1, vector(n + 1, 0));
    vector<vector<int>> graph(n + 1);

    for (int i = 1; i <= n; i++)
    {
        int from, to, c;
        cin >> from >> to >> c;
        graph[from].push_back(to);
        graph[to].push_back(from);
        cost[to][from] = c;
    }

    vector<int> option = {graph[1][0], graph[1][1]};
    vector<int> rev = {graph[1][1],
                       graph[1][0]};

    int mn = -1;
    for (int i = 0; i < 2; i++)
    {
        int oi = option[i];
        int ri = rev[i];
        vector<bool> visited(n + 1, false);
        int ans = cost[1][oi] + cost[ri][1];
        visited[1] = true;
        visited[oi] = true;
        queue<int> q;
        q.push(oi);

        while (q.size() > 0)
        {
            int from = q.front();
            q.pop();

            for (int to : graph[from])
            {
                if (visited[to])
                    continue;

                visited[to] = true;
                ans += cost[from][to];
                q.push(to);
            }
        }

        if (mn == -1)
            mn = ans;
        mn = min(ans, mn);
    }

    cout << mn << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}