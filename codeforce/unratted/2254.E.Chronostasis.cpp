// link : https://codeforces.com/contest/2254/problem/E
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

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    vector<int> v(n);
    multiset<int> mt;
    int mn = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mt.insert(v[i]);

        if (v[i] > 0)
        {
            if (mn == -1)
                mn = v[i];
            mn = min(v[i], mn);
        }
    }

    if (mn == -1)
    {
        cout << -1 << endl;
        return;
    }

    vector<int> ans(n);
    ans[0] = mn;
    mt.erase(mt.find(mn));

    for (int i = 1; i < n; i++)
    {
        int prv = ans[i - 1];
        prv *= -1;

        multiset<int>::iterator it = mt.upper_bound(prv);

        if (it == mt.end())
        {
            cout << -1 << endl;
            return;
        }

        ans[i] = ans[i - 1] + (*it);
        mt.erase(it);
    }

    for (int i = 0; i < n; i++)
        cout << ans[i] << " \n"[i == n - 1];
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