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
    vector<ll> v = {1};
    vector<ll> ugly = {2, 3, 5};
    ll limit = 1500;
    set<ll> done;
    done.insert(1);
    while (v.size() < limit)
    {
        ll mn = -1;

        for (ll &vi : v)
            for (ll &ui : ugly)
            {
                ll d = vi * ui;
                if (done.count(d))
                    continue;

                if (mn == -1)
                    mn = d;
                mn = min(vi * ui, mn);
            }
        v.push_back(mn);
        done.insert(mn);
    }

    // for (int i = 0; i < 11; i++)
    //     cout << v[i] << " ";
    // cout << endl;

    cout << "The 1500'th ugly number is " << v[limit - 1] << "." << endl;
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