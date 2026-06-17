// link : https://codeforces.com/problemset/problem/2131/D
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

    for (int i = 0; i < n - 1; i++)
    {
        int from, to;
        cin >> from >> to;
        graph[from].push_back(to);
        graph[to].push_back(from);
    }

    if (n <= 3)
    {
        cout << 0 << endl;
        return;
    }

    vector<int> leafnd;
    leafnd.reserve(n);

    for (int i = 1; i <= n; i++)
    {
        if (graph[i].size() == 1)
            leafnd.push_back(i);
    }

    int mx = leafnd.size();
    int ans = leafnd.size();
    vector<int> v(n + 1);

    for (int nd : leafnd)
    {
        v[graph[nd][0]]++;
    }

    for (int i = 1; i <= n; i++)
    {
        ans = min(mx - v[i], ans);
    }

    cout << ans << endl;
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