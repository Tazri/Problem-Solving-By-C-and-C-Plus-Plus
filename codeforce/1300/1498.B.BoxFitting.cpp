// link : https://codeforces.com/problemset/problem/1498/B
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
        {
            mt.insert(vi);
        }
    }

    bool canTake(int x)
    {
        if (mt.empty())
            return false;

        multiset<int>::iterator it = mt.upper_bound(x);

        if (it == mt.begin())
            return false;

        return true;
    }

    int take(int x)
    {
        multiset<int>::iterator it = mt.upper_bound(x);

        it--;
        int xs = *it;
        mt.erase(it);
        return xs;
    }
};

void _DIBBA(int _DIBBA_NO)
{
    int n, w;
    cin >> n >> w;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    DS ds;
    ds.initialize(v);

    int curr = w;
    int count = 1;

    for (int i = 0; i < n; i++)
    {
        if (ds.canTake(curr))
        {
            int x = ds.take(curr);
            curr -= x;
            continue;
        }

        count += 1;
        curr = w;
        int x = ds.take(curr);
        curr -= x;
    }

    cout << count << endl;
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