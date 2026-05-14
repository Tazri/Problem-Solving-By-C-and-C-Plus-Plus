// link : https://codeforces.com/problemset/problem/2171/D
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
    vector<int> v(n + 1);
    vector<pair<int, int>> edges;
    set<int> right;
    edges.reserve(n);

    map<int, int> mp;

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        right.insert(v[i]);
        mp[v[i]] = i;
    }

    vector<bool> visited(n + 1, false);

    int prevMaxIndex = 0;
    for (int i = 1; i <= n; i++)
    {
        right.erase(v[i]);
        if (visited[v[i]])
            continue;

        if (i != 1)
        {
            if (prevMaxIndex < i)
            {
                cout << "NO" << endl;
                return;
            }
            edges.push_back({v[i], v[prevMaxIndex]});
        }

        visited[v[i]] = true;
        vector<int> nds;

        while (right.size() > 0 && *right.rbegin() > v[i])
        {
            nds.push_back(*right.rbegin());
            right.erase(*right.rbegin());
        }

        for (int ni : nds)
        {
            visited[ni] = true;
            prevMaxIndex = max(mp[ni], prevMaxIndex);
            edges.push_back({v[i], ni});
        }
    }

    cout << "YES" << endl;
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