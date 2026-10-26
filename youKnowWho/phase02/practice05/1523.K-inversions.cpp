// link : https://acm.timus.ru/problem.aspx?space=1&num=1523
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int mod = 1e9;

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
        return (a + b) % mod;
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

void _DIBBA(int _DIBBA_NO)
{
    int n, k;
    vector<int> v;
    cin >> n >> k;
    v = vector<int>(n + 1);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<vector<int>> dp(k + 1, vector<int>(n + 1));

    for (int ik = 1; ik <= k; ik++)
    {
        vector<int> rv(n + 2, 0);
        SegTree sg(rv);
        sg.startBuild();
        for (int j = 0; j < n; j++)
        {
            if (ik == 1)
            {
                dp[ik][j] = 1;
                continue;
            }

            dp[ik][j] = sg.doQuery(v[j] + 1, n + 1);
            sg.doUpdate(v[j], dp[ik - 1][j]);
            // for (int i = 0; i < j; i++)
            // {
            //     if (v[i] > v[j])
            //     {
            //         dp[ik][j] += dp[ik - 1][i];
            //         dp[ik][j] %= mod;
            //     }
            // }
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += dp[k][i];
        sum %= mod;
    }

    cout << sum << endl;
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