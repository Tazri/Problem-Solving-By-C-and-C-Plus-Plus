// link : https://lightoj.com/problem/strongest-community
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
        // return a ^ b; // for xor
        return max(a, b); // for max
        // return min(a, b); // for min
        // return a + b; // for sum
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
    cout << "Case " << _DIBBA_NO << ":" << endl;
    int n, c, q;
    cin >> n >> c >> q;

    vector<pair<int, int>> range(c + 1, {-1, -1});
    vector<int> v(n);
    vector<int> cnt(c + 1, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        cnt[v[i]]++;

        if (range[v[i]].first == -1)
            range[v[i]].first = i;

        range[v[i]].second = i;
    }

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        arr[i] = cnt[v[i]];

    SegTree sg(arr, INT32_MIN);
    sg.startBuild();

    for (int qi = 0; qi < q; qi++)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;

        if (v[l] == v[r])
        {
            cout << r - l + 1 << endl;
            continue;
        }

        int leftSeg = range[v[l]].second - l + 1;
        int rightSeg = r - range[v[r]].first + 1;
        vector<int> cndt = {leftSeg, rightSeg};
        int ql = range[v[l]].second + 1;
        int qr = range[v[r]].first - 1;

        if (ql <= qr)
        {
            cndt.push_back(sg.doQuery(ql, qr));
        }

        cout << *max_element(cndt.begin(), cndt.end()) << endl;
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