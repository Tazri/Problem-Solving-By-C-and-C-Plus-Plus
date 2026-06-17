// link : https://www.spoj.com/problems/GSS3/en/
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

int inf = INT64_MAX;

struct Nd
{
    int prefix = inf, suffix = inf;
    int curr = inf;
    int sum = inf;
};

struct SegTree
{
    vector<Nd> arr;
    vector<Nd> tree;
    Nd identityValue;

    SegTree(vector<Nd> v, Nd initialValue)
    {
        arr = v;
        int n = v.size();
        identityValue = initialValue;
        tree = vector<Nd>(4 * n + 123, initialValue);
    }

    Nd merge(Nd left, Nd right)
    {
        if (left.curr == inf)
            return right;
        if (right.curr == inf)
            return left;
        int mxSub = max({left.curr, right.curr, left.suffix + right.prefix});

        Nd res;
        res.curr = mxSub;
        res.prefix = max(left.prefix, left.sum + right.prefix);
        res.suffix = max(right.suffix, right.sum + left.suffix);
        res.sum = left.sum + right.sum;
        return res;
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

    Nd query(int L, int R, int l, int r, int nd)
    {
        if (L <= l && r <= R)
            return tree[nd];

        if (r < L || R < l)
            return identityValue;

        int mid = l + (r - l) / 2;
        Nd leftValue = query(L, R, l, mid, nd * 2);
        Nd rightValue = query(L, R, mid + 1, r, nd * 2 + 1);

        return merge(leftValue, rightValue);
    }

    void update(int i, int v, int l, int r, int nd)
    {
        if (l == r && i == l)
        {
            Nd vNd;
            vNd.curr = v;
            vNd.prefix = v;
            vNd.suffix = v;
            vNd.sum = v;
            tree[nd] = vNd;
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
        update(i, v, 0, arr.size() - 1, 1);
    }

    // calculate from left(l) to right (r)
    Nd doQuery(int l, int r)
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
    vector<Nd> v(n);

    for (int i = 0; i < n; i++)
    {
        int vi;
        cin >> vi;
        Nd res;
        res.curr = vi;
        res.prefix = vi;
        res.suffix = vi;
        res.sum = vi;
        v[i] = res;
    }

    Nd identity;
    SegTree sg(v, identity);
    sg.startBuild();
    int q;
    cin >> q;
    while (q--)
    {
        int type;
        cin >> type;

        if (type == 1)
        {
            int l, r;
            cin >> l >> r;
            Nd res = sg.doQuery(l - 1, r - 1);
            cout << res.curr << endl;
            continue;
        }

        int p, v;
        cin >> p >> v;
        sg.doUpdate(p - 1, v);
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