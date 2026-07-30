// link : https://codeforces.com/problemset/problem/1915/F
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'
#define int ll
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

int compressInput(vector<pair<int, int>> &v)
{
    int n = v.size();
    vector<int> values;
    for (int i = 0; i < n; i++)
    {
        values.push_back(v[i].first);
        values.push_back(v[i].second);
    }

    sort(values.begin(), values.end());

    map<int, int> mp;
    for (int i = 0; i < values.size(); i++)
    {
        mp[values[i]] = i;
    }

    for (int i = 0; i < n; i++)
    {
        v[i].first = mp[v[i].first];
        v[i].second = mp[v[i].second];
    }
    return values.size();
}

int f(vector<pair<int, int>> &v, int n)
{
    vector<int> vr(n, 0);
    vector<int> rm(n, -1);
    for (pair<int, int> &p : v)
    {
        vr[p.second] = 1;
        rm[p.first] = p.second;
    }

    SegTree sg(vr);
    sg.startBuild();
    int ans = 0;
    for (int l = 0; l < n; l++)
    {
        if (rm[l] == -1)
            continue;

        int r = rm[l];
        int sum = sg.doQuery(l, r - 1);
        ans += sum;
        sg.doUpdate(r, 0);
    }

    return ans;
}

void _DIBBA(int _DIBBA_NO)
{
    int totalSegment;
    cin >> totalSegment;
    vector<pair<int, int>> input(totalSegment);

    for (int i = 0; i < totalSegment; i++)
    {
        cin >> input[i].first >> input[i].second;
    }

    int n = compressInput(input);

    vector<pair<int, int>> ltor;
    vector<pair<int, int>> rtol;
    for (pair<int, int> p : input)
    {
        if (p.first < p.second)
            ltor.push_back(p);
        else
            rtol.push_back({p.second, p.first});
    }

    int ans = f(ltor, n);
    ans += f(rtol, n);

    for (int i = 0; i < rtol.size(); i++)
        swap(rtol[i].first, rtol[i].second);

    vector<int> vl(n, 0);
    vector<int> rml(n, -1);
    vector<int> vr(n, -1);

    for (pair<int, int> p : ltor)
    {
        vr[p.first] = p.second;
    }
    for (pair<int, int> p : rtol)
    {
        int l = p.first;
        int r = p.second;
        vl[l] = 1;
        rml[r] = l;
    }

    SegTree sg(vl);
    sg.startBuild();

    for (int l = 0; l < n; l++)
    {
        if (vr[l] != -1)
        {
            int r = vr[l];
            int sum = sg.doQuery(0, r);
            ans += sum;
        }

        if (rml[l] != -1)
        {
            int ri = rml[l];
            sg.doUpdate(ri, 0);
        }
    }

    cout << ans << endl;
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