// link : https://codeforces.com/problemset/problem/301/D
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
        // return max(a, b); // for max
        // return min(a, b); // for min
        return a + b; // for sum
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
            tree[nd] += v;
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
        arr[i] += v;
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
    int n, q;
    cin >> n >> q;

    vector<int> v(n);
    vector<int> pos(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        pos[v[i]] = i;
    }

    vector<vector<int>> leftv(n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j += i)
        {
            int l = min(pos[i], pos[j]);
            int r = max(pos[i], pos[j]);

            leftv[r].push_back(l);
        }
    }

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

    vector<int> cnt(n, 0);
    SegTree sg(cnt);

    for (int r = 0; r < n; r++)
    {
        for (int l : leftv[r])
        {
            sg.doUpdate(l, 1);
        }

        for (pair<int, int> pr : query[r])
        {
            int l = pr.first;
            int queryId = pr.second;
            int res = sg.doQuery(l, r);
            ans[queryId] = res;
        }
    }

    for (int ai : ans)
        cout << ai << endl;
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