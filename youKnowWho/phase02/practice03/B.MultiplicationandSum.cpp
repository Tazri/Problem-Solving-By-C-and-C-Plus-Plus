// link : https://codeforces.com/edu/course/2/lesson/5/2/practice/contest/279653/problem/B
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
int mod = ((ll)1e9) + 7;

struct SegTree
{
    vector<int> arr;
    vector<int> tree;
    vector<int> lazy;
    int identityValue;

    SegTree(vector<int> v, int initialValue = 0)
    {
        arr = v;
        int n = v.size();
        identityValue = initialValue;
        tree = vector<int>(4 * n + 123, initialValue);
        lazy = vector<int>(4 * n + 123, 1);
    }

    int merge(int a, int b)
    {
        // return a ^ b; // for xor
        // return max(a, b); // for max
        // return min(a, b); // for min
        return (a + b) % mod; // for sum
    }

    int applyLazy(int treeValue, int l, int r, int v)
    {
        // return treeValue ^ ((r - l + 1) % 2 == 0 ? 0 : v); // for xor
        // return treeValue + v;                 // for min or max
        return (treeValue * v) % mod;
    }

    void push(int l, int r, int nd)
    {
        if (lazy[nd] == 1)
            return;

        tree[nd] = applyLazy(tree[nd], l, r, lazy[nd]);

        if (l != r)
        {
            lazy[nd * 2] *= lazy[nd];
            lazy[nd * 2] %= mod;
            lazy[nd * 2 + 1] *= lazy[nd];
            lazy[nd * 2 + 1] %= mod;
        }

        lazy[nd] = 1;
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
        push(l, r, nd);
        if (L <= l && r <= R)
            return tree[nd];

        if (r < L || R < l)
            return identityValue;

        int mid = l + (r - l) / 2;
        int leftValue = query(L, R, l, mid, nd * 2);
        int rightValue = query(L, R, mid + 1, r, nd * 2 + 1);

        return merge(leftValue, rightValue);
    }

    void update(int ql, int qr, int v, int nl, int nr, int nd)
    {
        push(nl, nr, nd);
        if (nr < ql || qr < nl)
            return;

        if (ql <= nl && nr <= qr)
        {
            lazy[nd] *= v;
            lazy[nd] %= mod;
            push(nl, nr, nd);
            return;
        }

        int mid = nl + (nr - nl) / 2;
        update(ql, qr, v, nl, mid, nd * 2);
        update(ql, qr, v, mid + 1, nr, nd * 2 + 1);

        tree[nd] = merge(tree[nd * 2], tree[nd * 2 + 1]);
    }

    void doUpdate(int ql, int qr, int v)
    {
        update(ql, qr, v, 0, arr.size() - 1, 1);
    }

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
    int n, m;
    cin >> n >> m;
    vector<int> v(n, 1);

    SegTree sg(v);
    sg.startBuild();

    while (m--)
    {
        int type;
        cin >> type;

        if (type == 2)
        {
            int l, r;
            cin >> l >> r;
            cout << sg.doQuery(l, r - 1) << endl;
            continue;
        }

        int l, r, v;
        cin >> l >> r >> v;
        sg.doUpdate(l, r - 1, v);
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