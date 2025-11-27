// link : https://codeforces.com/problemset/problem/1051/B
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
    ll l, r;
    cin >> l >> r;

    cout << "YES" << endl;
    for (ll i = l; i <= r; i += 2)
    {
        cout << i << " " << i + 1 << endl;
    }
}

int main()
{
    optimize();
    program();
    return 0;
}