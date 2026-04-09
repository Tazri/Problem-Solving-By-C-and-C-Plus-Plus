// link : https://codeforces.com/contest/2196/problem/A
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

#define int ll

void _DIBBA()
{
    int p, q;
    cin >> p >> q;

    int k = 3 * p - 2 * q;

    if (p < 2 || q < 3)
    {
        cout << "Alice" << endl;
        return;
    }

    int u = p - k;
    int d = q - k;
    int g = gcd(u, d);
    // cout << "k : " << k << endl;

    if (k >= 0 && u >= 2 && d >= 3 && g != 0 && u / g == 2 && d / g == 3)
    {
        cout << "Bob" << endl;
        return;
    }

    cout << "Alice" << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    cin >> t;
    while (t--)
        _DIBBA();
    return 0;
}