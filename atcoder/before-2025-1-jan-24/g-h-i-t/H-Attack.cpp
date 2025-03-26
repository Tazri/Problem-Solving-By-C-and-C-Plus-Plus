// link : https://atcoder.jp/contests/abc302/tasks/abc302_a?lang=en
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
    ll a, b;
    cin >> a >> b;
    ll ans = a / b;

    if (a % b)
        ans++;
    cout << ans << endl;
    return 0;
}