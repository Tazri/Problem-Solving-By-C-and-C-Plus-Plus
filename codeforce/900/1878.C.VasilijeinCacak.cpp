// link : https://codeforces.com/problemset/problem/1878/C
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
    ll n, k, x;
    cin >> n >> k >> x;
    ll d = n - k;
    ll mn = (k * (k + 1)) / 2;
    ll ns = (n * (n + 1)) / 2;
    ll ds = (d * (d + 1)) / 2;
    ll mx = ns - ds;

    if (x >= mn && x <= mx)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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