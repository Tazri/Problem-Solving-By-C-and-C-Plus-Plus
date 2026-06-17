// link : https://codeforces.com/contest/2236/problem/A
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
    int mn = 0;
    int mx = 0;

    for (int i = 0; i < n; i++)
    {
        int vi;
        cin >> vi;

        if (i == 0)
        {
            mn = vi;
            mx = vi;
        }

        mn = min(vi, mn);
        mx = max(vi, mx);
    }

    cout << mx - mn + 1 << endl;
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