// link : https://codeforces.com/edu/course/2/lesson/4/1/practice/contest/273169/problem/B
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define int ll

struct SegTree
{
    vector<int> arr;
    vector<pair<int, int>> tree;
    pair<int, int> identityValue;

    SegTree(vector<int> v, pair<int, int> initialValue)
    {
        arr = v;
        int n = v.size();
        identityValue = initialValue;
        tree = vector<pair<int, int>>(4 * n + 123, initialValue);
    }

    pair<int, int> merge(pair<int, int> a, pair<int, int> b)
    {
        if (a.first < b.first)
            return a;
        else if (b.first < a.first)
            return b;

        pair<int, int> res = {a.first, a.second + b.second};
        return res;
    }

    void build(int l, int r, int nd)
    {
        if (l == r)
        {
            tree[nd] = {arr[l], 1};
            return;
        }

        int mid = l + (r - l) / 2;

        build(l, mid, nd * 2);
        build(mid + 1, r, nd * 2 + 1);

        tree[nd] = merge(tree[nd * 2], tree[nd * 2 + 1]);
    }

    pair<int, int> query(int L, int R, int l, int r, int nd)
    {
        if (L <= l && r <= R)
            return tree[nd];

        if (r < L || R < l)
            return identityValue;

        int mid = l + (r - l) / 2;
        pair<int, int> leftValue = query(L, R, l, mid, nd * 2);
        pair<int, int> rightValue = query(L, R, mid + 1, r, nd * 2 + 1);

        return merge(leftValue, rightValue);
    }

    void update(int i, int v, int l, int r, int nd)
    {
        if (l == r && i == l)
        {
            tree[nd] = {v, 1};
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
    pair<int, int> doQuery(int l, int r)
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
    int n, q;
    cin >> n >> q;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    SegTree sg(v, {INT32_MAX, 1});
    sg.startBuild();
    for (int qi = 0; qi < q; qi++)
    {
        int type;
        cin >> type;

        if (type == 1)
        {
            int pos, v;
            cin >> pos >> v;

            sg.doUpdate(pos, v);
            continue;
        }

        int l, r;
        cin >> l >> r;
        pair<int, int> res = sg.doQuery(l, r - 1);

        cout << res.first << " " << res.second << endl;
    }
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