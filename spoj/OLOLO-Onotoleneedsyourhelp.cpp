// linK : https://www.spoj.com/problems/OLOLO/
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
    ll n;
    cin >> n;
    ll xr = 0;

    while (n--)
    {
        ll vi;
        cin >> vi;
        xr ^= vi;
    }
    cout << xr << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}