// link : https://codeforces.com/problemset/problem/1167/C
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

struct DSU
{
    vector<int> parent, sz;

    DSU(int n)
    {
        parent.resize(n + 1);
        sz.assign(n + 1, 1);

        for (int i = 0; i <= n; i++)
            parent[i] = i;
    }

    int find(int node)
    {
        if (parent[node] == node)
            return node;

        return parent[node] = find(parent[node]);
    }

    bool unite(int a, int b)
    {
        a = find(a);
        b = find(b);

        if (a == b)
            return false;

        if (sz[a] < sz[b])
            swap(a, b);

        parent[b] = a;
        sz[a] += sz[b];

        return true;
    }

    bool same(int a, int b)
    {
        return find(a) == find(b);
    }

    int size(int node)
    {
        return sz[find(node)];
    }

    int components()
    {
        int cnt = 0;

        for (int i = 1; i < parent.size(); i++)
        {
            if (find(i) == i)
                cnt++;
        }

        return cnt;
    }

    void reset(int node)
    {
        parent[node] = node;
        sz[node] = 1;
    }
};

void _DIBBA(int _DIBBA_NO)
{
    int n, m;
    cin >> n >> m;

    DSU dsu(n);

    for (int mi = 0; mi < m; mi++)
    {
        int k;
        cin >> k;

        vector<int> v(k);
        for (int i = 0; i < k; i++)
            cin >> v[i];

        for (int i = 1; i < k; i++)
            dsu.unite(v[i - 1], v[i]);
    }

    vector<int> ans(n + 1, 0);

    for (int i = 1; i <= n; i++)
        ans[i] = dsu.size(i);

    for (int i = 1; i <= n; i++)
        cout << ans[i] << " \n"[i == n];
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