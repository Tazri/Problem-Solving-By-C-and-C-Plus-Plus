#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

struct Segment
{
    int l, r, mark;
};

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

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    vector<int> v((2 * n) + 1);

    vector<bool> done((2 * n) + 1, false);

    for (int i = 1; i <= 2 * n; i++)
        cin >> v[i];

    map<int, int> mp;
    vector<int> vforsg((2 * n) + 1, 1);
    vforsg[0] = 0;
    SegTree sg(vforsg);
    sg.startBuild();

    vector<pair<int, int>> track(n + 1);
    multiset<pair<int, int>> mt;

    for (int i = 1; i <= 2 * n; i++)
    {
        if (mp.count(v[i]))
        {
            track[v[i]].first = mp[v[i]];
            track[v[i]].second = i;
            pair<int, int> p = track[v[i]];
            int len = p.second - p.first + 1;
            mt.insert({len, v[i]});
        }
        else
        {
            mp[v[i]] = i;
        }
    }

    int ans = 0;
    while (mt.size() > 0)
    {
        pair<int, int> p = *mt.rbegin();
        int mark = p.second;
        int l = track[mark].first;
        int r = track[mark].second;

        int len = sg.doQuery(l, r);
        ans += (len * len);

        set<int> done;
        for (int i = l; i <= r; i++)
        {
            sg.doUpdate(i, 0);
            int mark = v[i];
            if (done.count(mark))
                continue;

            pair<int, int> p = track[mark];

            int pl = p.first;
            int pr = p.second;

            if (l <= pl && pr <= r)
            {
                mt.erase(mt.find(p));
                sg.doUpdate(pr, 0);
                done.insert(mark);
                continue;
            }
            else if (r < pr)
            {
                mt.erase(mt.find(p));
                track[mark].first = pr;
                track[mark].second = pr;
                mt.insert({1, mark});
                done.insert(mark);
            }
            else if (l < pl)
            {
                mt.erase(mt.find(p));
                track[mark].first = pl;
                track[mark].second = pl;
                mt.insert({1, mark});
                done.insert(mark);
            }
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