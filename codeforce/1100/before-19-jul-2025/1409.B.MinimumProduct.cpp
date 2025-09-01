// link : https://codeforces.com/problemset/problem/1409/B
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)

ll getCal(ll a, ll b, ll x, ll y, ll n)
{
    ll na = max(x, a - n);
    ll d = a - na;
    n -= d;
    ll nb = b;
    if (n)
    {
        nb = max(y, b - n);
    }

    return na * nb;
}

void program()
{
    ll a, b, x, y, n;
    cin >> a >> b >> x >> y >> n;

    ll a1 = getCal(a, b, x, y, n);
    ll a2 = getCal(b, a, y, x, n);

    cout << min(a1, a2) << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}