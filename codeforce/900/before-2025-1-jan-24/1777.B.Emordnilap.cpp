// https: // codeforces.com/problemset/problem/1777/B
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

const ll mod = 1e9 + 7;

void test()
{
    ll n;
    cin >> n;

    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }

    ll ans = n * (n - 1);

    for (ll i = 1; i <= n; i++)
    {
        ans *= i;
        ans %= mod;
    }

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