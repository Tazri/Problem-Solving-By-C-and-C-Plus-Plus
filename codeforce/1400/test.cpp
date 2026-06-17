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

// Miller Rabin Primality Test
// deterministic for all 64-bit integers

// using merge sort
// ans[i].first  = number of bigger elements before i
// ans[i].second = number of smaller elements before i

struct SegTree
{
    struct Node
    {
        long long val;
    };

    int n;
    vector<Node> st;

    SegTree(int n)
    {
        this->n = n;
        st.assign(4 * n, {0});
    }

    // =========================
    // CHANGE HERE FOR OPERATION
    // =========================

    Node merge(Node a, Node b)
    {

        Node res;

        // SUM:
        // res.val = a.val + b.val;

        // MAX:
        // res.val = max(a.val, b.val);

        // MIN:
        // res.val = min(a.val, b.val);

        // XOR:
        // res.val = (a.val ^ b.val);

        return res;
    }

    // =========================
    // CHANGE HERE FOR LEAF INIT
    // =========================

    Node single(long long v)
    {
        Node res;

        // just store value
        res.val = v;

        return res;
    }

    void build(vector<long long> &a, int p, int l, int r)
    {
        if (l == r)
        {
            st[p] = single(a[l]);
            return;
        }

        int mid = (l + r) / 2;

        build(a, p * 2, l, mid);
        build(a, p * 2 + 1, mid + 1, r);

        st[p] = merge(st[p * 2], st[p * 2 + 1]);
    }

    void update(int p, int l, int r, int idx, long long val)
    {
        if (l == r)
        {
            st[p] = single(val);
            return;
        }

        int mid = (l + r) / 2;

        if (idx <= mid)
            update(p * 2, l, mid, idx, val);
        else
            update(p * 2 + 1, mid + 1, r, idx, val);

        st[p] = merge(st[p * 2], st[p * 2 + 1]);
    }

    Node query(int p, int l, int r, int i, int j)
    {
        if (j < l || r < i)
        {
            // =========================
            // CHANGE HERE (identity element)
            // =========================

            Node res;

            // SUM → 0
            // MAX → -INF
            // MIN → +INF
            // XOR → 0

            res.val = 0;
            return res;
        }

        if (i <= l && r <= j)
            return st[p];

        int mid = (l + r) / 2;

        Node left = query(p * 2, l, mid, i, j);
        Node right = query(p * 2 + 1, mid + 1, r, i, j);

        return merge(left, right);
    }

    // wrappers
    void build(vector<long long> &a)
    {
        build(a, 1, 0, n - 1);
    }

    void update(int idx, long long val)
    {
        update(1, 0, n - 1, idx, val);
    }

    long long query(int l, int r)
    {
        return query(1, 0, n - 1, l, r).val;
    }
};

int f1(vector<int> v, int k)
{
    int n = v.size();

    sort(v.begin(), v.end());

    if (k >= 3)
    {
        return 0;
    }

    if (k == 1)
    {
        int mn = v[0];

        for (int i = 1; i < n; i++)
            mn = min(mn, v[i] - v[i - 1]);

        return mn;
    }

    int mn = v[0];

    for (int i = 1; i < n; i++)
    {
        int d = abs(v[i] - v[i - 1]);
        mn = min(d, mn);
        vector<int>::iterator it = lower_bound(v.begin(), v.end(), d);
        mn = min(mn, abs(*it - d));

        if (it != v.begin())
        {
            it--;
            mn = min(mn, abs(*it - d));
        }
    }

    return mn;
}

int f2(vector<int> v, int k)
{
    int n = v.size();
    sort(v.begin(), v.end());

    if (k >= 3)
    {
        return 0;
    }

    if (k == 1)
    {
        int mn = v[0];

        for (int i = 1; i < n; i++)
            mn = min(mn, v[i] - v[i - 1]);

        return mn;
    }

    vector<int> d;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int di = abs(v[i] - v[j]);
            d.push_back(di);
        }
    }

    int mn = v[0];
    for (int di : d)
    {
        mn = min(mn, di);

        vector<int>::iterator it = lower_bound(v.begin(), v.end(), di);

        if (it != v.end())
        {
            mn = min(mn, abs(*it - di));
        }

        if (it != v.begin())
        {
            it--;
            mn = min(mn, abs(*it - di));
        }
    }

    return mn;
}

void _DIBBA(int _DIBBA_NO)
{
    int times = 0;
    for (int a = 1; a <= 10; a++)
    {
        for (int b = 1; b <= 10; b++)
        {
            for (int c = 1; c <= 10; c++)
            {
                vector<int> v = {a, b, c};
                int res1 = f1(v, 2);
                int res2 = f2(v, 2);

                if (res1 != res2)
                {
                    cout << "!! found : " << endl;
                    cout << "res1 : " << res1 << endl;
                    cout << "res2 : " << res2 << endl;
                    cout << a << " " << b << " " << c << endl;
                }
            }
        }
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