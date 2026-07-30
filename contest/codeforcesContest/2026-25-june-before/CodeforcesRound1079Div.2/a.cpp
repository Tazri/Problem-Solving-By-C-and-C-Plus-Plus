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

ll d(ll n)
{
    ll sum = 0;

    while (n)
    {
        ll l = n % 10;
        sum += l;
        n /= 10;
    }

    return sum;
}

void program()
{
    ll x;
    cin >> x;
    ll cnt = 0;
    for (ll i = x; i <= x + 1e3; i++)
    {
        if (i - d(i) == x)
            cnt++;
    }

    cout << cnt << endl;
}

int32_t main()
{
    optimize();
    ll t;
    cin >> t;
    while (t--)
        program();
    return 0;
}