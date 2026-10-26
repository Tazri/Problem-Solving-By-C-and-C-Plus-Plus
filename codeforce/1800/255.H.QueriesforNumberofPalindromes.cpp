// link : https://codeforces.com/problemset/problem/245/H
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'
#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

ll bigmod(ll a, ll b, ll mod)
{
    ll res = 1;
    a %= mod;
    while (b > 0)
    {
        if (b & 1)
            res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}
constexpr int PWSIZE = ((int)5000) + 123;
// primes 293, 307,911323,972331
// mods 998244353, 1000000007, 1000000009, 1053818881. 1073741789

pair<int, int> pre[PWSIZE + 1];
pair<int, int> revpre[PWSIZE + 1];
int pw1[PWSIZE + 1], ipw1[PWSIZE + 1];
int pw2[PWSIZE + 1], ipw2[PWSIZE + 1];
constexpr int base1 = 293, base2 = 307;
constexpr int mod1 = 1004535809, mod2 = 1012924417;

void buildPowTable()
{
    int sz = PWSIZE;
    pw1[0] = pw2[0] = 1;
    for (int i = 1; i <= sz; i++)
    {
        pw1[i] = (1LL * base1 * pw1[i - 1]) % mod1;
        pw2[i] = (1LL * base2 * pw2[i - 1]) % mod2;
    }

    ipw1[sz] = bigmod(pw1[sz], mod1 - 2, mod1);
    ipw2[sz] = bigmod(pw2[sz], mod2 - 2, mod2);

    for (int i = sz - 1; i >= 0; i--)
    {
        ipw1[i] = (1LL * base1 * ipw1[i + 1]) % mod1;
        ipw2[i] = (1LL * base2 * ipw2[i + 1]) % mod2;
    }
}

void buildPrefixHash(const string &s, pair<int, int> (&pre)[])
{
    int n = s.size();
    int hash1 = 0, hash2 = 0;
    for (int i = 0; i < n; i++)
    {
        hash1 += (1LL * (ll)s[i] * pw1[i]) % mod1;

        if (hash1 >= mod1)
            hash1 -= mod1;

        hash2 += (1LL * (ll)s[i] * pw2[i]) % mod2;
        if (hash2 >= mod2)
            hash2 -= mod2;
        pre[i] = {hash1, hash2};
    }
}

pair<int, int> getHash(int l, int r, pair<int, int> (&pre)[])
{
    if (l == 0)
        return pre[r];

    int sum1 = pre[r].first - pre[l - 1].first;
    int sum2 = pre[r].second - pre[l - 1].second;

    if (sum1 < 0)
        sum1 += mod1;
    if (sum2 < 0)
        sum2 += mod2;

    sum1 = (1LL * sum1 * ipw1[l]) % mod1;
    sum2 = (1LL * sum2 * ipw2[l]) % mod2;
    return {sum1, sum2};
}

int getReverseIndex(int i, int n)
{
    int indx = i + 1;
    return (n - (indx - 1)) - 1;
}

pair<int, int> getReverseHash(int l, int r, int n)
{

    int li = getReverseIndex(r, n);
    int ri = getReverseIndex(l, n);
    return getHash(li, ri, revpre);
}

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

void precal()
{
    buildPowTable();
}

void _DIBBA(int _DIBBA_NO)
{
    string s;
    cin >> s;
    int n = s.size();
    string reverseString = s;
    int q;
    cin >> q;

    reverse(reverseString.begin(), reverseString.end());
    vector<pair<int, int>> range;

    buildPrefixHash(s, pre);
    buildPrefixHash(reverseString, revpre);

    pair<int, int> p1 = getHash(3, 5, pre);
    pair<int, int> p2 = getReverseHash(3, 5, n);

    for (int l = 0; l < n; l++)
    {
        for (int r = l; r < n; r++)
        {
            if (getHash(l, r, pre) == getReverseHash(l, r, n))
                range.push_back({l, r});
        }
    }

    vector<vector<int>> vl(n + 1);

    for (pair<int, int> p : range)
    {
        int l = p.first;
        int r = p.second;
        vl[r].push_back(l);
    }

    vector<vector<pair<int, int>>> query(n);
    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        query[r].push_back({l, i});
    }

    vector<int> v(n, 0);
    SegTree sg(v);
    sg.startBuild();
    vector<int> ans(q);
    for (int r = 0; r < n; r++)
    {
        for (int l : vl[r])
        {
            sg.doUpdate(l, 1);
        }

        for (pair<int, int> p : query[r])
        {
            int l = p.first;
            int query_id = p.second;
            int sum = sg.doQuery(l, r);
            ans[query_id] = sum;
        }
    }

    for (int ai : ans)
        cout << ai << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();
    precal();
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}