// link : https://codeforces.com/problemset/problem/1916/B
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
    if (b % a == 0)
    {
        ll ans = (b * b) / a;
        cout << ans << endl;
    }
    else
    {
        cout << lcm(a, b) << endl;
    }
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