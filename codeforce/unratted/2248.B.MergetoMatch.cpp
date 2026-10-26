// link : https://codeforces.com/contest/2248/problem/B
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void _DIBBA(int _DIBBA_NO)
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < m; i++)
        cin >> b[i];

    if (n < (2 * m))
    {
        cout << "NO" << endl;
        return;
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for (int i = 0; i < m; i++)
    {
        if (a[i] > b[i])
        {
            cout << "NO" << endl;
            return;
        }
    }

    multiset<int> mt;

    for (int i = m; i < n; i++)
        mt.insert(a[i]);

    for (int i = 0; i < m; i++)
    {
        int vi = b[i];

        multiset<int>::iterator it = mt.lower_bound(vi);

        if (it == mt.end())
        {
            cout << "NO" << endl;
            return;
        }
        mt.erase(it);
    }

    cout << "YES" << endl;
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