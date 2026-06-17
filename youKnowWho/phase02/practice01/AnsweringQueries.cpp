// link : https://lightoj.com/problem/answering-queries
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define int ll

void _DIBBA(int _DIBBA_NO)
{
    cout << "Case " << _DIBBA_NO << ":" << endl;

    int n, q;
    cin >> n >> q;
    vector<int> v(n);

    int sum = 0;
    vector<int> vj(n);
    for (int i = 0, j = n - 1; i < n; i++, j--)
    {
        vj[i] = j;

        cin >> v[i];

        sum += (j * v[i]);
        sum -= (i * v[i]);
    }

    while (q--)
    {
        int type;
        cin >> type;

        if (type == 1)
        {
            cout << sum << endl;
            continue;
        }

        int i, vi;
        cin >> i >> vi;

        sum += (i * v[i]);
        sum -= (vj[i] * v[i]);
        v[i] = vi;
        sum -= (i * v[i]);
        sum += (vj[i] * v[i]);
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