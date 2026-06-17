// link : https://lightoj.com/problem/equalizing-money
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'
#define int ll

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void _DIBBA(int _DIBBA_NO)
{
    cout << "Case " << _DIBBA_NO << ": ";
    int n, m;
    cin >> n >> m;

    vector<vector<int>> graph(n + 1);
    vector<int> cost(n + 1, 0);

    for (int i = 1; i <= n; i++)
        cin >> cost[i];

    for (int i = 1; i <= m; i++)
    {
        int from, to;
        cin >> from >> to;
        graph[from].push_back(to);
        graph[to].push_back(from);
    }

    vector<bool> visited(n + 1, false);

    set<int> st;
    for (int i = 1; i <= n; i++)
    {
        if (visited[i])
            continue;

        queue<int> q;
        visited[i] = true;
        int size = 1;
        int c = cost[i];
        q.push(i);

        while (q.size() > 0)
        {
            int from = q.front();
            q.pop();

            for (int to : graph[from])
            {
                if (visited[to])
                    continue;
                c += cost[to];
                visited[to] = true;
                size++;
                q.push(to);
            }
        }

        if (c % size != 0)
        {
            cout << "No" << endl;
            return;
        }

        st.insert(c / size);
    }

    if (st.size() > 1)
    {
        cout << "No" << endl;
    }
    else
        cout << "Yes" << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}