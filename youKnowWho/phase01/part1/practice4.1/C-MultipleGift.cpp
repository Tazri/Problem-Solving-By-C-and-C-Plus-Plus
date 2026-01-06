// link : https://atcoder.jp/contests/arc088/tasks/arc088_a
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
    ll x, y;
    cin >> x >> y;

    ll ans = 0;

    while (x <= y)
    {
        ans++;
        x *= 2;
    }

    cout << ans << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}