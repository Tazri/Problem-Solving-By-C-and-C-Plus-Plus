// link : https://codeforces.com/problemset/problem/484/A
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

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
    ll l, r;
    cin >> l >> r;

    ll x = l;

    for (int i = 0; i < 60; i++)
    {
        ll mask = (1LL << (ll)i);
        ll nx = x | mask;

        if (x & mask)
            continue;

        if (nx <= r && nx >= l)
            x = nx;
    }

    cout << x << endl;
}

int32_t main()
{
    optimize();

    int t = 1;
    cin >> t;
    while (t--)
        program();
    return 0;
}