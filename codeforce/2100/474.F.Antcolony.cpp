// link : https://codeforces.com/problemset/problem/474/F
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

struct Nd
{
    int g = 0;
    int mn;
    int cnt;
};

struct SegTreeForMin
{
    vector<Nd> arr;
    vector<Nd> tree;
    Nd identityValue;

    SegTreeForMin(vector<Nd> &v, Nd initialValue)
    {
        arr = v;
        int n = v.size();
        identityValue = initialValue;
        tree = vector<Nd>(4 * n + 123, initialValue);
    }

    Nd merge(Nd a, Nd b)
    {
        Nd res;
        res.g = gcd(a.g, b.g);

        if (a.mn < b.mn)
        {
            res.mn = a.mn;
            res.cnt = a.cnt;
        }
        else if (b.mn < a.mn)
        {
            res.mn = b.mn;
            res.cnt = b.cnt;
        }
        else
        {
            res.mn = a.mn;
            res.cnt = a.cnt + b.cnt;
        }

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
            Nd ndV;
            ndV.mn = v;
            ndV.cnt = 1;
            ndV.g = v;
            tree[nd] = ndV;
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
        arr[i] = {v, 1};
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

        Nd nd;
        nd.mn = vi;
        nd.cnt = 1;
        nd.g = vi;
        v[i] = nd;
    }

    Nd identity;
    identity.mn = INT32_MAX;
    identity.cnt = 1;
    identity.g = 0;
    SegTreeForMin SgMn(v, identity);
    SgMn.startBuild();

    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;

        Nd res = SgMn.doQuery(l, r);

        int total = r - l + 1;
        if (res.g != res.mn)
        {
            cout << total << endl;
            continue;
        }

        total -= res.cnt;
        cout << total << endl;
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