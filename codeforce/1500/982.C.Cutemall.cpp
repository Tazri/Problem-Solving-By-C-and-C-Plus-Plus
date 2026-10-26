// link : https://codeforces.com/problemset/problem/982/C
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int n;
vector<int> sz;
vector<vector<int>> graph;

int calSize(int par, int from)
{
    int size = 0;

    for (int to : graph[from])
    {
        if (to != par)
            size += calSize(from, to);
    }

    size += 1;
    sz[from] = size;
    return size;
}

int cut(int par, int from)
{
    int cnt = 0;
    int size = sz[from];
    for (int to : graph[from])
    {
        if (to == par)
            continue;
        int k = n - sz[to];
        if (k % 2 == 0)
            cnt++;
        cnt += cut(from, to);
    }

    return cnt;
}

void _DIBBA(int _DIBBA_NO)
{
    cin >> n;
    sz.resize(n + 1);
    graph.resize(n + 1);

    for (int i = 0; i < n - 1; i++)
    {
        int from, to;
        cin >> from >> to;
        graph[from].push_back(to);
        graph[to].push_back(from);
    }
    calSize(0, 1);

    if (n & 1)
        cout << -1 << endl;
    else
        cout << cut(0, 1) << endl;
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