// link : https://codeforces.com/problemset/problem/242/E
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
int LEN = 20;

struct Num
{
    vector<int> v = vector<int>(LEN, 0);
    int totalNumber = 0;

    Num() {}

    Num(int a)
    {
        totalNumber = 1;

        for (int i = 0; i < LEN; i++)
        {
            if (a & (1LL << i))
                v[i]++;
        }
    }

    void inverseBy(int x)
    {
        for (int i = 0; i < LEN; i++)
        {
            int mask = 1LL << i;

            if (x & mask)
            {
                int one = v[i];
                int zero = totalNumber - v[i];
                v[i] = zero;
            }
        }
    }

    void vPrint()
    {
        for (int vi : v)
            cout << vi << " ";
        cout << endl;
    }

    int takeValue()
    {
        int n = 0;
        for (int i = 0; i < LEN; i++)
        {
            int contrib = (1LL << i);
            n += (contrib * v[i]);
        }
        return n;
    }
};

Num fsum(Num &a, Num &b)
{
    Num res;
    res.totalNumber = a.totalNumber + b.totalNumber;

    for (int i = 0; i < LEN; i++)
    {
        res.v[i] = a.v[i] + b.v[i];
    }

    return res;
}

struct SegTree
{
    vector<Num> arr;
    vector<Num> tree;
    vector<int> lazy;
    Num identityValue;

    SegTree(vector<Num> v, Num initialValue)
    {
        arr = v;
        int n = v.size();
        identityValue = initialValue;
        tree = vector<Num>(4 * n + 123, initialValue);
        lazy = vector<int>(4 * n + 123, 0);
    }

    Num merge(Num a, Num b)
    {
        // return a ^ b; // for xor
        // return max(a, b); // for max
        // return min(a, b); // for min
        return fsum(a, b); // for sum
    }

    Num applyLazy(Num treeValue, int l, int r, int v)
    {
        // return treeValue ^ ((r - l + 1) % 2 == 0 ? 0 : v); // for xor
        // return treeValue + v;                 // for min or max
        treeValue.inverseBy(v);
        return treeValue;
    }

    void push(int l, int r, int nd)
    {
        if (lazy[nd] == 0)
            return;

        tree[nd] = applyLazy(tree[nd], l, r, lazy[nd]);

        if (l != r)
        {
            lazy[nd * 2] ^= lazy[nd];
            lazy[nd * 2 + 1] ^= lazy[nd];
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

    Num query(int L, int R, int l, int r, int nd)
    {
        push(l, r, nd);
        if (L <= l && r <= R)
            return tree[nd];

        if (r < L || R < l)
            return identityValue;

        int mid = l + (r - l) / 2;
        Num leftValue = query(L, R, l, mid, nd * 2);
        Num rightValue = query(L, R, mid + 1, r, nd * 2 + 1);

        return merge(leftValue, rightValue);
    }

    void update(int ql, int qr, int v, int nl, int nr, int nd)
    {
        push(nl, nr, nd);
        if (nr < ql || qr < nl)
            return;

        if (ql <= nl && nr <= qr)
        {
            lazy[nd] ^= v;
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

    Num doQuery(int l, int r)
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
    vector<Num> v(n);

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v[i] = Num(a);
    }

    Num identity;
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
            l--;
            r--;

            Num res = sg.doQuery(l, r);
            cout << res.takeValue() << endl;
            continue;
        }

        int l, r, v;
        cin >> l >> r >> v;
        l--;
        r--;
        sg.doUpdate(l, r, v);
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