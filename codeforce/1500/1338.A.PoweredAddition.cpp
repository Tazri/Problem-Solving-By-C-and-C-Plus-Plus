// link : https://codeforces.com/problemset/problem/1338/A
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
    int n;
    cin >> n;

    vector<ll> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    int mx = 0;
    for (int i = 1; i < n; i++)
    {
        if (v[i - 1] <= v[i])
            continue;

        ll d = abs(v[i - 1] - v[i]);
        v[i] += d;

        int cnt = 0;
        while (d)
        {
            d >>= 1;
            cnt++;
        }
        mx = max(mx, cnt);
    }

    cout << mx << endl;
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