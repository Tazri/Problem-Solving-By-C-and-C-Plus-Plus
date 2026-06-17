// link : https://cses.fi/problemset/task/1666/
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

    vector<int> takeParents()
    {
        vector<int> ans;

        for (int i = 1; i < parent.size(); i++)
        {
            if (find(i) == i)
                ans.push_back(i);
        }

        return ans;
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

    for (int i = 0; i < m; i++)
    {
        int from, to;
        cin >> from >> to;
        dsu.unite(from, to);
    }

    vector<int> p = dsu.takeParents();

    cout << p.size() - 1 << endl;

    for (int i = 1; i < p.size(); i++)
        cout << p[i - 1] << " " << p[i] << endl;
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