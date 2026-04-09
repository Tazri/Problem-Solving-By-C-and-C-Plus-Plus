// link : https://codeforces.com/problemset/problem/1216/D
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
    int n;
    cin >> n;
    vector<int> v(n);

    int mx;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        if (i == 0)
            mx = v[i];

        mx = max(mx, v[i]);
    }

    int sum = 0;
    int g = 0;

    for (int i = 0; i < n; i++)
    {
        int d = mx - v[i];
        sum += d;
        g = gcd(d, g);
    }

    cout << (sum / g) << " " << g << endl;
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