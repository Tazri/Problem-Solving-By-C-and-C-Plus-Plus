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
    ll n, m, x, y;
    cin >> n >> m >> x >> y;

    vector<ll> vh(n);
    vector<ll> vv(m);

    for (ll &vi : vh)
        cin >> vi;
    for (ll &vi : vv)
        cin >> vi;

    cout << n + m << endl;
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