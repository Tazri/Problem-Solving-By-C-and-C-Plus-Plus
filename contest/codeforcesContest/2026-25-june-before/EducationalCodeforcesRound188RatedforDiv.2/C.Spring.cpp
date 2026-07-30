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
    return (a * b) / gcd(a, b);
}

void _DIBBA(int _DIBBA_NO)
{
    int a, b, c, m;
    cin >> a >> b >> c >> m;

    int labc = lcm(a, lcm(b, c));
    int lab = lcm(a, b);
    int lac = lcm(a, c);
    int lbc = lcm(b, c);

    int aTake = (6 * (m / a)) - (6 * (m / labc)) + (2 * (m / labc)) - (6 * ((m / lab) - (m / labc))) + (3 * ((m / lab) - (m / labc))) - (6 * ((m / lac) - (m / labc))) + (3 * ((m / lac) - (m / labc)));

    int bTake = (6 * (m / b)) - (6 * (m / labc)) + (2 * (m / labc)) - (6 * ((m / lab) - (m / labc))) + (3 * ((m / lab) - (m / labc))) - (6 * ((m / lbc) - (m / labc))) + (3 * ((m / lbc) - (m / labc)));

    int cTake = (6 * (m / c)) - (6 * (m / labc)) + (2 * (m / labc)) - (6 * ((m / lac) - (m / labc))) + (3 * ((m / lac) - (m / labc))) - (6 * ((m / lbc) - (m / labc))) + (3 * ((m / lbc) - (m / labc)));

    cout << aTake << " " << bTake << " " << cTake << endl;
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