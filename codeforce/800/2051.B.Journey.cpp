// link : https://codeforces.com/problemset/problem/2051/B
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
    ll n, a, b, c;
    cin >> n >> a >> b >> c;
    ll abc = a + b + c;
    ll days = (n / abc) * 3;
    ll left = n % abc;

    if (left == 0)
    {
        cout << days << endl;
        return;
    }
    left -= a;
    if (left <= 0)
    {
        cout << days + 1 << endl;
        return;
    }

    left -= b;
    if (left <= 0)
    {
        cout << days + 2 << endl;
        return;
    }

    cout << days + 3 << endl;
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