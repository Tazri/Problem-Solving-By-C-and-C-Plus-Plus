// link : https://codeforces.com/contest/2230/problem/A
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

    int mn3 = min(a * 3, b);
    int threeGroup = n / 3;
    n %= 3;

    int ans = threeGroup * mn3;

    if (n == 2)
    {
        int mn = min(b, a * 2);
        ans += mn;
    }
    else if (n == 1)
    {
        int mn = min(a, b);
        ans += mn;
    }

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