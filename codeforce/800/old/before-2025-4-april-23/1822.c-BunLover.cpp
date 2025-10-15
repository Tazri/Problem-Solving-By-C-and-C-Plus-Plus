// link : https://codeforces.com/problemset/problem/1822/C
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

ll nSum(ll n)
{
    return (n * (n + 1)) / 2;
}

void program()
{
    ll n;
    cin >> n;
    ll ans = (4 * n) + 1;
    ans += nSum(n - 1);
    ans += nSum(n - 2);

    cout << ans << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}