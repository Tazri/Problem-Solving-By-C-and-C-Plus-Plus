#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void nope(int from, int to)
{
    cout << "Not possible to go from " << from << " to " << to << "." << endl;
}

void yeap(int from, int to, int cost)
{
    cout << "The shortest distance from " << from << " to " << to << " is " << cost << "." << endl;
}

void _DIBBA(int _DIBBA_NO)
{
    cout << "Case 1:" << endl;
    int n, r, c, q;
    cin >> n >> r >> c >> q;

    vector<vector<int>> graph(n + 1);

    for (int i = 0; i < r; i++)
    {
        int from, to;
        cin >> from >> to;
        graph[from].push_back(to);
    }

    vector<int> cost(n + 1, 0);
    vector<bool> visited(n + 1, false);
    queue<int> qu;
    qu.push(c);
    visited[c] = true;

    while (qu.size() > 0)
    {
        int from = qu.front();
        qu.pop();

        for (int to : graph[from])
        {
        }
    }
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