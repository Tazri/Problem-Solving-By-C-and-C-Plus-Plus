// link : https://codeforces.com/contest/960/problem/B
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)

void _DIBBA()
{
    int n, k1, k2;
    cin >> n >> k1 >> k2;
    int k = k1 + k2;

    vector<int> d(n);

    for (int i = 0; i < n; i++)
        cin >> d[i];

    for (int i = 0; i < n; i++)
    {
        int vi;
        cin >> vi;
        d[i] = abs(vi - d[i]);
    }

    multiset<int> mt;
    for (int di : d)
        mt.insert(di);

    while (*mt.rbegin() != 0 && k > 0)
    {
        k--;
        int tp = *mt.rbegin();
        mt.erase(mt.find(tp));
        mt.insert(tp - 1);
    }

    ll ans = 0;
    while (mt.size() > 0)
    {
        int num = *mt.begin();
        ans += (1LL * num * num);
        mt.erase(mt.begin());
    }

    if (k == 0)
    {
        cout << ans << endl;
    }
    else
    {
        if (k & 1)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    // cin >> t;
    while (t--)
        _DIBBA();
    return 0;
}