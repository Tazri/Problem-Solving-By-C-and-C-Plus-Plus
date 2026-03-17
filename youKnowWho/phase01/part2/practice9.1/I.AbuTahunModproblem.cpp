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
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> d;
    d.reserve(n);

    int l = 0;
    int r = n - 1;

    while (l <= r)
    {
        d.push_back(abs(v[l] - v[r]));
        l++;
        r--;
    }

    int g = 0;

    for (int i = 0; i < d.size(); i++)
        g = gcd(g, d[i]);

    if (g == 0)
        cout << -1 << endl;
    else
        cout << g << endl;
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