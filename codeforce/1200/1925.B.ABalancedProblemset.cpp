// link : https://codeforces.com/contest/1925/problem/B
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)

int f(int x, int n, int d)
{

    int times = x / d;
    int per = times / n;

    if (per > 0)
        return d;
    return 0;
}

void _DIBBA()
{
    int x, n;
    cin >> x >> n;
    int mx = 1;
    for (int i = 1; i * i <= x; i++)
    {
        if (x % i != 0)
            continue;

        mx = max(mx, f(x, n, i));
        mx = max(mx, f(x, n, x / i));
    }

    cout << mx << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    cin >> t;
    while (t--)
        _DIBBA();
    0;
}