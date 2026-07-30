// link: https://codeforces.com/contest/2125/problem/B
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

void program()
{
    ll x, y, k;
    cin >> x >> y >> k;

    ll g = gcd(x, y);
    x /= g;
    y /= g;

    if (x <= k && y <= k)
        cout << 1 << endl;
    else
        cout << 2 << endl;
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