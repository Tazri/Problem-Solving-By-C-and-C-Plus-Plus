// link : https://codeforces.com/contest/2217/problem/C
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

int lcm(int a, int b)
{
    return (a * b) / __gcd(a, b);
}

void _DIBBA(int _DIBBA_NO)
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    if (gcd(n, a) != 1 || gcd(m, b) != 1)
    {
        cout << "NO" << endl;
        return;
    }

    if (2 * lcm(n, m) >= n * m)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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