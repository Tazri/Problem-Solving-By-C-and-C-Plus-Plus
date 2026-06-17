// link : https://lightoj.com/problem/count-the-multiples-of-3
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
    int v[3] = {0, 0, 0};

    Nd() {}

    Nd operator+(const Nd &right)
    {
        Nd d;

        for (int i = 0; i < 3; i++)
        {
            d.v[i] = this->v[i] + right.v[i];
        }
        return d;
    }

    void shift(int times)
    {
        int md = times % 3;
        if (md == 0)
            return;

        if (md == 1)
        {
            int li = v[2];
            for (int i = 2; i > 0; i--)
                v[i] = v[i - 1];
            v[0] = li;
            return;
        }

        int a = this->v[0];
        int b = this->v[1];
        int c = this->v[2];
        this->v[0] = b;
        this->v[1] = c;
        this->v[2] = a;
    }

    void print()
    {
        for (int vi : v)
            cout << vi << " ";
        cout << endl;
    }
};

struct SegTree
{
    vector<Nd> arr;
    vector<Nd> tree;
    vector<int> lazy;
    Nd identityValue;

    SegTree(vector<Nd> v, Nd initialValue)
    {
        arr = v;
        int n = v.size();
        identityValue = initialValue;
        tree = vector<Nd>(4 * n + 123, initialValue);
        lazy = vector<int>(4 * n + 123, 0);
    }

    Nd merge(Nd a, Nd b)
    {
        // return a ^ b; // for xor
        // return max(a, b); // for max
        // return min(a, b); // for min
        return a + b; // for sum
    }

    Nd applyLazy(Nd treeValue, int l, int r, int v)
    {
        // return treeValue ^ ((r - l + 1) % 2 == 0 ? 0 : v); // for xor
        // return treeValue + v;                 // for min or max
        treeValue.shift(v); // for sum
        return treeValue;
    }

    void push(int l, int r, int nd)
    {
        if (lazy[nd] == 0)
            return;

        tree[nd] = applyLazy(tree[nd], l, r, lazy[nd]);

        if (l != r)
        {
            lazy[nd * 2] += lazy[nd];
            lazy[nd * 2] %= 3;
            lazy[nd * 2 + 1] += lazy[nd];
            lazy[nd * 2 + 1] %= 3;
        }

        lazy[nd] = 0;
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
        push(l, r, nd);
        if (L <= l && r <= R)
            return tree[nd];

        if (r < L || R < l)
            return identityValue;

        int mid = l + (r - l) / 2;
        Nd leftValue = query(L, R, l, mid, nd * 2);
        Nd rightValue = query(L, R, mid + 1, r, nd * 2 + 1);

        return merge(leftValue, rightValue);
    }

    void update(int ql, int qr, int v, int nl, int nr, int nd)
    {
        push(nl, nr, nd);
        if (nr < ql || qr < nl)
            return;

        if (ql <= nl && nr <= qr)
        {
            lazy[nd] += v;
            lazy[nd] %= 3;
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

    cout << "Case " << _DIBBA_NO << ":" << endl;
    int n, q;
    cin >> n >> q;
    vector<Nd> v(n);

    for (int i = 0; i < n; i++)
    {
        v[i].v[0] = 1;
    }

    Nd identity;

    SegTree sg(v, identity);
    sg.startBuild();

    while (q--)
    {
        int type;
        cin >> type;

        if (type == 1)
        {
            int l, r;
            cin >> l >> r;
            Nd res = sg.doQuery(l, r);
            cout << res.v[0] << endl;
            continue;
        }

        int l, r;
        cin >> l >> r;
        sg.doUpdate(l, r, 1);
    }
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