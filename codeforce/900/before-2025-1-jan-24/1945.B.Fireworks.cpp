// link : https://codeforces.com/problemset/problem/1945/B
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

ll divide(ll a, ll b)
{
    if (a % b)
    {
        return (a / b) + 1;
    }
    else
    {
        return a / b;
    }
}

void test()
{
    ll a, b, m;
    cin >> a >> b >> m;
    m++;

    ll ans = divide(m, a) + divide(m, b);
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