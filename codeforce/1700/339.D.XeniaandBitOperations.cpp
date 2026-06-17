// link : https://codeforces.com/problemset/problem/339/D
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define OR 0
#define XOR 1

long long binpow(long long a, long long b)
{
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

struct SegTree
{
    vector<int> arr;
    vector<int> tree;
    int identityValue;
    int n;
    vector<int> type;
    SegTree(vector<int> v, int initialValue = 0)
    {
        arr = v;
        n = v.size();
        identityValue = initialValue;
        tree = vector<int>(4 * n + 123, initialValue);

        int totalLevel = takeLevel(n);

        if (totalLevel % 2 == 0)
            type = {XOR, OR};
        else
            type = {OR, XOR};
    }

    int takeLevel(int n)
    {
        int lvl = 0;
        while (n)
        {
            lvl++;
            n /= 2;
        }
        return lvl;
    }

    int merge(int a, int b, int nd)
    {
        int op = type[takeLevel(nd) % 2];

        if (op == OR)
            return a | b;
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

        tree[nd] = merge(tree[nd * 2], tree[nd * 2 + 1], nd);
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

        return merge(leftValue, rightValue, nd);
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

        tree[nd] = merge(tree[nd * 2], tree[nd * 2 + 1], nd);
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
    int ex, q;
    cin >> ex >> q;
    int n = binpow(2, ex);
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    SegTree sg(v);

    sg.startBuild();

    for (int qi = 0; qi < q; qi++)
    {
        int p, v;
        cin >> p >> v;
        p--;
        sg.doUpdate(p, v);

        cout << sg.doQuery(0, n - 1) << endl;
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