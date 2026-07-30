// link : https://codeforces.com/problemset/problem/703/D
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

struct SegTree
{
    vector<int> arr;
    vector<int> tree;
    int identityValue;

    SegTree(vector<int> v, int initialValue = 0)
    {
        arr = v;
        int n = v.size();
        identityValue = initialValue;
        tree = vector<int>(4 * n + 123, initialValue);
    }

    int merge(int a, int b)
    {
        return a ^ b;
    }

    void build(int l, int r, int nd)
    {
        if (l == r)
        {
            tree[nd] = arr[l];
            return;
        }

        int mid = l + (r - l) / 2;

        build(l, mid, nd * 2);
        build(mid + 1, r, nd * 2 + 1);

        tree[nd] = merge(tree[nd * 2], tree[nd * 2 + 1]);
    }

    int query(int L, int R, int l, int r, int nd)
    {
        if (L <= l && r <= R)
            return tree[nd];

        if (r < L || R < l)
            return identityValue;

        int mid = l + (r - l) / 2;
        int leftValue = query(L, R, l, mid, nd * 2);
        int rightValue = query(L, R, mid + 1, r, nd * 2 + 1);

        return merge(leftValue, rightValue);
    }

    void update(int i, int v, int l, int r, int nd)
    {
        if (l == r && i == l)
        {
            tree[nd] = v;
            return;
        }

        int mid = l + (r - l) / 2;

        if (l <= i && i <= mid)
            update(i, v, l, mid, nd * 2);
        else
            update(i, v, mid + 1, r, nd * 2 + 1);

        tree[nd] = merge(tree[nd * 2], tree[nd * 2 + 1]);
    }

    // i = positiong, v = value
    void doUpdate(int i, int v)
    {
        arr[i] = v;
        update(i, v, 0, arr.size() - 1, 1);
    }

    // calculate from left(l) to right (r)
    int doQuery(int l, int r)
    {
        return query(l, r, 0, arr.size() - 1, 1);
    }

    void startBuild()
    {
        build(0, arr.size() - 1, 1);
    }
};

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int q;
    cin >> q;
    vector<int> ans(q);
    vector<vector<pair<int, int>>> query(n);
    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        query[r].push_back({l, i});
    }

    vector<int> arr(n, 0);
    SegTree sg(arr, 0);
    sg.startBuild();
    SegTree sgv(v, 0);
    sgv.startBuild();
    map<int, int> mp;

    for (int r = 0; r < n; r++)
    {
        int i = r;
        if (mp.count(v[i]))
        {
            int pi = mp[v[i]];
            mp[v[i]] = i;
            sg.doUpdate(pi, 0);
            sg.doUpdate(i, v[i]);
        }
        else
        {
            mp[v[i]] = i;
            sg.doUpdate(i, v[i]);
        }

        for (pair<int, int> p : query[r])
        {
            int l = p.first;
            int query_id = p.second;

            int unqxr = sg.doQuery(l, r);
            int xr = sgv.doQuery(l, r);

            ans[query_id] = unqxr ^ xr;
        }
    }

    for (int i = 0; i < q; i++)
        cout << ans[i] << endl;
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