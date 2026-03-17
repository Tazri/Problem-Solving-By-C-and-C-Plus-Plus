// link : https://lightoj.com/problem/iftar-party
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define int ll

void _DIBBA(int _DIBBA_NO)
{
    cout << "Case " << _DIBBA_NO << ": ";
    int p, l;
    vector<int> d;
    cin >> p >> l;
    int n = p - l;

    for (int i = 1; i * i <= n; i++)
    {
        if (n % i != 0)
            continue;

        if (i > l)
            d.push_back(i);

        int di = n / i;

        if (di != i)
        {
            if (di > l)
                d.push_back(di);
        }
    }

    sort(d.begin(), d.end());

    if (d.empty())
        cout << "impossible" << endl;
    else
    {
        for (int i = 0; i < d.size(); i++)
            cout << d[i] << " \n"[i == d.size() - 1];
    }
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