// link : https://codeforces.com/problemset/problem/1830/A
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
    vector<vector<int>> graph(n + 1);

    map<pair<int, int>, int> mp;
    for (int i = 1; i <= n - 1; i++)
    {
        int from, to;
        cin >> from >> to;
        graph[from].push_back(to);
        graph[to].push_back(from);

        mp[{from, to}] = i;
        mp[{to, from}] = i;
    }

    vector<int> parents(n + 1);
    vector<bool> visited(n + 1, false);

    queue<int> q;
    q.push(1);
    visited[1] = true;

    while (q.size() > 0)
    {
        int from = q.front();
        q.pop();

        for (int to : graph[from])
        {
            if (visited[to])
                continue;

            parents[to] = from;
            visited[to] = true;
            q.push(to);
        }
    }

    visited = vector<bool>(n + 1, false);
    mp[{0, 1}] = 0;
    mp[{1, 0}] = 0;

    q.push(1);
    visited[1] = true;
    vector<int> readIt(n + 1, 0);
    readIt[1] = 1;

    while (q.size() > 0)
    {
        int from = q.front();
        q.pop();

        for (int to : graph[from])
        {
            if (visited[to])
                continue;

            visited[to] = true;
            int prIndex = mp[{parents[from], from}];
            int chIndex = mp[{from, to}];

            if (prIndex <= chIndex)
            {
                readIt[to] = readIt[from];
            }
            else
            {
                readIt[to] = readIt[from] + 1;
            }

            q.push(to);
        }
    }

    int mx = 1;
    for (int i = 1; i <= n; i++)
    {
        mx = max(mx, readIt[i]);
    }

    cout << mx << endl;
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