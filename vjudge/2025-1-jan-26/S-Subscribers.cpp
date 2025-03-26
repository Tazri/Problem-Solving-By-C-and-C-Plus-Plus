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

int main()
{
    optimize();
    ll n;
    cin >> n;
    ll d = 1;

    if (n >= 1e8)
        d = 1000000;
    else if (n >= 1e7)
        d = 100000;
    else if (n >= 1e6)
        d = 10000;
    else if (n >= 1e5)
        d = 1000;
    else if (n >= 1e4)
        d = 100;
    else if (n >= 1e3)
        d = 10;
    else
        d = 1;

    n /= d;
    n *= d;

    cout << n << endl;
    return 0;
}