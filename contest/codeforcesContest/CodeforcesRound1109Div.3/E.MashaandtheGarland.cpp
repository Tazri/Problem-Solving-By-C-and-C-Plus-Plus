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
        return a + b;
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

string takeAl(int n, char ch)
{
    string s(n, ' ');

    for (int i = 0; i < n; i++)
    {
        s[i] = ch;
        ch = ch == '1' ? '0' : '1';
    }

    return s;
}

vector<pair<int, int>> takeSegments(vector<int> &v)
{
    int n = v.size();
    vector<pair<int, int>> segs;
    int left = -1;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0 && left != -1)
        {
            int l = left;
            int r = i - 1;
            segs.push_back({l, r});
            left = -1;
        }
        else if (v[i] == 1 && left == -1)
        {
            left = i;
        }
    }

    if (left != -1)
        segs.push_back({left, n - 1});

    return segs;
}

void _DIBBA(int _DIBBA_NO)
{
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    string rvs1 = takeAl(n, '0');
    string rvs2 = takeAl(n, '1');

    vector<int> v1(n, 0);
    vector<int> v2(n, 0);

    for (int i = 0; i < n; i++)
    {
        if (s[i] != rvs1[i])
            v1[i] = 1;
        if (s[i] != rvs2[i])
            v2[i] = 1;
    }

    vector<pair<int, int>> segs1 = takeSegments(v1);
    vector<pair<int, int>> segs2 = takeSegments(v2);
    vector<int> vforsg1(n, 0);
    vector<int> vforsg2(n, 0);

    vector<int> rm1(n, -1);
    vector<int> rm2(n, -1);
    for (pair<int, int> p : segs1)
    {
        int fi = p.first;
        int sec = p.second;
        rm1[sec] = fi;
        vforsg1[fi] = 1;
    }

    for (pair<int, int> p : segs2)
    {
        int fi = p.first;
        int sec = p.second;
        rm2[sec] = fi;
        vforsg2[fi] = 1;
    }
    SegTree sg1(vforsg1);
    sg1.startBuild();
    SegTree sg2(vforsg2);
    sg2.startBuild();

    vector<vector<pair<int, int>>> query(n);
    vector<int> qk(m);
    vector<int> ans(m);

    for (int i = 0; i < m; i++)
    {
        int l, r, k;
        cin >> l >> r >> k;
        l--, r--;
        qk[i] = k;
        query[r].push_back({l, i});
    }

    for (int r = 0; r < n; r++)
    {
        if (rm1[r] != -1)
        {
            int ri = rm1[r];
            sg1.doUpdate(ri, 0);
            sg1.doUpdate(r, 1);
        }

        if (rm2[r] != -1)
        {
            int ri = rm2[r];
            sg2.doUpdate(ri, 0);
            sg2.doUpdate(r, 1);
        }

        for (pair<int, int> p : query[r])
        {
            int l = p.first;
            int query_id = p.second;
            int take1 = sg1.doQuery(l, r);
            int take2 = sg2.doQuery(l, r);
            ans[query_id] = min(take1, take2);
        }
    }

    for (int i = 0; i < m; i++)
    {
        if (ans[i] <= qk[i])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
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