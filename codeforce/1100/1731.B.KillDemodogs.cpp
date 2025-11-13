// link : https://codeforces.com/problemset/problem/1731/B
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

void program()
{
    ll n;
    cin >> n;
    ll ans = n * ((4 * n) - 1);
    ans %= mod;
    ans *= (n + 1);
    ans %= mod;
    ans *= 337;
    ans %= mod;
    cout << ans << endl;
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