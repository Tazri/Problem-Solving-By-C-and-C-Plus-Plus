// link : https://codeforces.com/problemset/problem/1353/C
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

    ll sum = 0;
    ll l = n / 2;
    ll cell = 1;
    ll side = 1;
    for (ll i = 1; i <= l; i++)
    {
        cell = side * 4 + 4;
        sum += (cell * i);
        side += 2;
    }

    cout << sum << endl;
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