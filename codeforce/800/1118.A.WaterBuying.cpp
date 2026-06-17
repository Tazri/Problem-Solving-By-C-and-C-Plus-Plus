// link : https://codeforces.com/contest/1118/problem/A
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
    int n, a, b;
    cin >> n >> a >> b;
    int t2 = n / 2;
    int t1 = n % 2;

    int mn2 = min(a + a, b);
    int ans = t2 * mn2;
    if (t1)
        ans += a;

    cout << ans << endl;
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