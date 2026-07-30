// link : https://cses.fi/problemset/task/1145/
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

    SegTree(vector<int> v, int initialValue = INT32_MIN)
    {
        arr = v;
        int n = v.size();
        identityValue = initialValue;
        tree = vector<int>(4 * n + 123, initialValue);
    }

    int merge(int a, int b)
    {
        return max(a, b);
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

    void doUpdate(int i, int v)
    {
        arr[i] = v;
        update(i, v, 0, arr.size() - 1, 1);
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
int n;
vector<int> v;
int mx;
void doCompress()
{
    set<int> st;
    map<int, int> mp;
    for (int vi : v)
        st.insert(vi);

    int id = 1;

    for (int si : st)
    {
        mp[si] = id++;
    }

    for (int i = 0; i < n; i++)
        v[i] = mp[v[i]];
    mx = id - 1;
}

void _DIBBA(int _DIBBA_NO)
{
    cin >> n;
    v = vector<int>(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    doCompress();

    // for (int vi : v)
    //     cout << vi << " ";
    // cout << endl;
    vector<int> cnt(mx + 1, 0);
    SegTree sg(cnt);
    sg.startBuild();

    for (int i = 0; i < n; i++)
    {
        int vi = v[i];
        int sum = sg.doQuery(0, vi - 1);
        int ans = sum + 1;
        sg.doUpdate(vi, ans);
    }

    cout << sg.doQuery(0, mx) << endl;
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