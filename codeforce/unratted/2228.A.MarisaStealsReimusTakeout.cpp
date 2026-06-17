// link : https://codeforces.com/contest/2228/problem/A
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
    int zero = 0;
    int one = 0;
    int two = 0;

    for (int i = 0; i < n; i++)
    {
        int vi;
        cin >> vi;

        if (vi == 0)
            zero++;
        else if (vi == 1)
            one++;
        else
            two++;
    }

    int ans = zero;
    int mn = min(one, two);
    ans += mn;
    one -= mn;
    two -= mn;
    ans += (one / 3);
    ans += (two / 3);

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