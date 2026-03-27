// link : https://codeforces.com/contest/1879/problem/A
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

    int w, time;
    cin >> w >> time;

    bool can = true;
    for (int i = 0; i < n - 1; i++)
    {
        int s, e;
        cin >> s >> e;

        if (s >= w && e >= time)
            can = false;
    }

    if (can)
        cout << w << endl;
    else
        cout << -1 << endl;
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