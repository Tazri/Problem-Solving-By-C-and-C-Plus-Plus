// link : https://atcoder.jp/contests/abc121/tasks/abc121_d
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

long long xor_till(long long n)
{
    long long r = n % 4;
    if (r == 0)
        return n;
    else if (r == 1)
        return 1;
    else if (r == 2)
        return n + 1;
    return 0;
}

void program()
{
    ll a, b;
    cin >> a >> b;
    ll xrTillB = xor_till(b);
    ll xrrm = xor_till(a - 1 < 0 ? 0 : a - 1);
    xrTillB ^= xrrm;
    cout << xrTillB << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}