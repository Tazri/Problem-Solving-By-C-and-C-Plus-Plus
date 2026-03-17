// link : https://codeforces.com/problemset/problem/610/A
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

    if (n & 1)
    {
        cout << 0 << endl;
        return;
    }

    n /= 2;

    if (n % 2 == 0)
        n--;

    n /= 2;

    cout << n << endl;
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