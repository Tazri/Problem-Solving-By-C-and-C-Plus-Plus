// link : https://codeforces.com/contest/2094/problem/B
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
    int n, m, l, r;
    cin >> n >> m >> l >> r;
    int left = abs(l);
    int right = r;

    int al = 0, ar = 0;

    int mn = min(right, m);
    m -= mn;
    ar += mn;

    mn = min(left, m);
    al -= mn;

    cout << al << " " << ar << endl;
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