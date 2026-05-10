// link : https://codeforces.com/problemset/problem/1320/A
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
    map<int, int> mp;

    for (int i = 1; i <= n; i++)
    {
        int vi;
        cin >> vi;
        mp[i - vi] += vi;
    }

    int mx = 0;
    for (pair<int, int> p : mp)
    {
        mx = max(mx, p.second);
    }

    cout << mx << endl;
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