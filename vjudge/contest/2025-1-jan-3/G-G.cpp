// link : https://codeforces.com/problemset/problem/1077/A
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

void test()
{
    ll a, b, k;
    cin >> a >> b >> k;
    ll pairMove = a - b;
    ll totalPairMove = k / 2;
    ll ans = pairMove * totalPairMove;
    if (k & 1)
    {
        ans += a;
    }
    cout << ans << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
    {
        test();
    }
    return 0;
}