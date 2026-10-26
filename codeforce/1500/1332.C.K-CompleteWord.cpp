// link : https://codeforces.com/problemset/problem/1332/C
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
    int n, k;
    cin >> n >> k;
    DSU dsu(n);
    string s;
    cin >> s;
    s = " " + s;

    for (int i = 1; i <= k; i++)
    {
        for (int j = i; j <= n; j += k)
        {
            dsu.unite(i, j);
        }
    }

    int l = 1, r = n;
    while (l <= r)
    {
        dsu.unite(l, r);
        l++;
        r--;
    }

    int comp = dsu.components();
    vector<vector<int>> graph(n + 1);

    for (int i = 1; i <= n; i++)
    {
        int p = dsu.find(i);
        graph[p].push_back(i);
    }

    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        int size = graph[i].size();
        map<char, int> mp;
        for (int p : graph[i])
        {
            mp[s[p]]++;
        }

        int mx = 0;
        for (pair<char, int> pr : mp)
            mx = max(mx, pr.second);

        ans += (size - mx);
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