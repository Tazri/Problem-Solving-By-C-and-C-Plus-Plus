// link : https://codeforces.com/problemset/problem/2043/A
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);

void test()
{
    ll n;
    cin >> n;

    if (n < 4)
    {
        cout << 1 << endl;
        return;
    }

    ll ans = 1;
    // ll term = 1;

    while (n > 3)
    {
        n /= 4;
        ans *= 2;
    }

    // ans = 1*pw(2,term-1);
    cout << ans << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        test();
    return 0;
}