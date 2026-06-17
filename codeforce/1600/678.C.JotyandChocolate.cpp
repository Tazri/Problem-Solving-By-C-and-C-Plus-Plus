// link : https://codeforces.com/problemset/problem/678/C
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
    int n, a, b, p, q;

    cin >> n >> a >> b >> p >> q;

    int l = lcm(a, b);

    int cntab = n / l;
    int cnta = (n / a) - cntab;
    int cntb = (n / b) - cntab;

    int ans = (cnta * p) + (cntb * q) + cntab * max(p, q);

    cout << ans << endl;
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