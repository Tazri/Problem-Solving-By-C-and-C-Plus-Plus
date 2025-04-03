// link : https://codeforces.com/problemset/problem/1521/A
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
    ll ab = a * b;

    if (b == 1)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    ll z = ab + a;
    ll x = a;
    ll y = ab;

    cout << x << " " << y << " " << z << endl;
    return;
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