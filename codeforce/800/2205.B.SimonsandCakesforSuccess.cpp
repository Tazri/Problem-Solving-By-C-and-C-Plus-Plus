// link : https://codeforces.com/contest/2205/problem/B
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
    int cn = n;
    int ans = 1;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i != 0)
            continue;

        ans *= i;

        while (n % i == 0)
            n /= i;
    }

    ans *= n;

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