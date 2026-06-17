// link : https://cses.fi/problemset/task/1647/
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
    int indentityValue;

    SegTree(vector<int> v, int initialValue = 0)
    {
        arr = v;
        int n = v.size();
        indentityValue = initialValue;
        tree = vector<int>(4 * n + 123, initialValue);
    }

    int merge(int a, int b)
    {
        // return a ^ b;     // for xor
        // return max(a, b); // for max
        return min(a, b); // for min
        // return a + b;     // for sum
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
        {
            return tree[nd];
        }

        if (r < L || R < l)
        {
            return indentityValue;
        }

        int mid = l + (r - l) / 2;
        int leftValue = query(L, R, l, mid, nd * 2);
        int rightValue = query(L, R, mid + 1, r, nd * 2 + 1);

        return merge(leftValue, rightValue);
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
    int n, q;
    cin >> n >> q;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    SegTree sg(v, INT32_MAX);
    sg.startBuild();

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        cout << sg.doQuery(l, r) << endl;
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