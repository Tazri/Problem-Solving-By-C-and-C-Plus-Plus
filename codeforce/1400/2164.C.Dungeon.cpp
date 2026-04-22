// link : https://codeforces.com/contest/2164/problem/C
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

struct DS
{
    multiset<int> mt;

    void initialize(vector<int> &v)
    {
        for (int vi : v)
            mt.insert(vi);
    }

    bool canTake(int x)
    {
        if (mt.empty())
            return false;
        multiset<int>::iterator it = mt.lower_bound(x);

        if (it == mt.end())
            return false;
        return true;
    }

    int take(int x)
    {
        multiset<int>::iterator it = mt.lower_bound(x);

        int v = *it;
        mt.erase(it);

        return v;
    }

    void insert(int x)
    {
        mt.insert(x);
    }
};

void _DIBBA(int _DIBBA_NO)
{
    int n, m;
    cin >> n >> m;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<pair<int, int>> b(m);

    for (int i = 0; i < m; i++)
        cin >> b[i].first;

    for (int i = 0; i < m; i++)
        cin >> b[i].second;

    DS ds;
    ds.initialize(a);
    sort(b.begin(), b.end(), [](pair<int, int> a, pair<int, int> b)
         {
        if(a.first == b.first){
            return a.second > b.second;
        } 
        return a.first < b.first; });

    int x = 0;
    int ans = 0;

    vector<int> ex;

    for (pair<int, int> p : b)
    {
        if (p.second == 0)
        {
            ex.push_back(p.first);
            continue;
        }
        if (ds.canTake(p.first))
        {
            ans++;
            int x = ds.take(p.first);

            ds.insert(max(p.second, x));
        }
    }

    for (int x : ex)
    {
        if (ds.canTake(x))
        {
            ans++;
            ds.take(x);
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