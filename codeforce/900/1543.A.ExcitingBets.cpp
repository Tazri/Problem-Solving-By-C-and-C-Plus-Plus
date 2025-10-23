// link : https://codeforces.com/problemset/problem/1543/A
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
    ll a, b;
    cin >> a >> b;
    ll mn = min(a, b);
    ll mx = max(a, b);

    if (mn == mx)
    {
        cout << 0 << " " << 0 << endl;
        return;
    }

    ll d = mx - mn;

    ll r = mx % d;
    ll add = d - r;
    ll move = min(add, r);

    cout << d << " " << move << endl;
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