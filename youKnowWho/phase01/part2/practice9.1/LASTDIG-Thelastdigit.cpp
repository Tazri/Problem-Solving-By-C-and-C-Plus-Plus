#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll m = 10;
ll mp(ll a, ll b, ll m)
{
    ll r = 1;
    a %= m;
    while (b > 0)
    {
        if (b & 1)
            r = r * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return r;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;

        if (a == 0)
            cout << 0 << endl;
        else if (b == 0)
            cout << 1 << endl;
        else
        {
            cout << (mp(a, b, m) % 10) << '\n';
        }
    }
    return 0;
}