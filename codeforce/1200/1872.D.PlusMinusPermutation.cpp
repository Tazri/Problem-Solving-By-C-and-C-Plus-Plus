// link : https://codeforces.com/contest/1872/problem/D
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
    ll n, x, y;
    cin >> n >> x >> y;

    ll LCM = (x * y) / gcd(x, y);
    ll rm = n / LCM;
    ll plus = n / x;
    ll minus = n / y;
    plus -= rm;
    minus -= rm;

    ll right = ((minus + 1) * minus) / 2;
    ll l = n - plus + 1;
    ll r = n;
    ll term = r - l + 1;
    ll left = ((r + l) * term) / 2;

    ll ans = left - right;

    cout << ans << endl;
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