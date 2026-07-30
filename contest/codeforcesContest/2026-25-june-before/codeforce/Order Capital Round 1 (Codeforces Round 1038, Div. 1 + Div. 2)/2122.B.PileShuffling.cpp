// link : https://codeforces.com/contest/2122/problem/B
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);

void program()
{
    ll n;
    cin >> n;
    ll cnt = 0;

    for (ll i = 0; i < n; i++)
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;

        if (b > d)
        {
            ll take = b - d;
            ll mn = min(a, c);
            cnt += mn;
            cnt += take;
        }

        if (a > c)
        {
            cnt += a - c;
        }
    }

    cout << cnt << endl;
}

int main()
{
    optimize();
    ll t;
    cin >> t;
    while (t--)
        program();
    return 0;
}