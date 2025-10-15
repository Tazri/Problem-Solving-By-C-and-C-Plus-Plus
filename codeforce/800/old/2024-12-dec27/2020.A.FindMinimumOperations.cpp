// link : https://codeforces.com/problemset/problem/2020/A
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
    ll n, k;
    cin >> n >> k;
    ll op = 0;

    if (n < k)
    {
        cout << n << endl;
        return;
    }
    else if (n == k)
    {
        cout << 1 << endl;
        return;
    }
    else if (k == 1)
    {
        cout << n << endl;
        return;
    }

    while (n > 0)
    {
        ll r = n % k;
        op += r;
        n /= k;
    }
    cout << op << endl;
}

int main()
{
    optimize();
    ll t;
    cin >> t;
    while (t--)
        test();
    return 0;
}