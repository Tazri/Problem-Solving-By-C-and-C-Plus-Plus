// link : https://codeforces.com/problemset/problem/519/C
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
    int N, M;
    cin >> N >> M;

    int totalA = min(N, M / 2);
    int mx = 0;
    for (int a = 0; a <= totalA; a++)
    {
        int team = a;
        int n = N, m = M;

        n -= (a);
        m -= (a * 2);

        team += min(n / 2, m);

        mx = max(mx, team);
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