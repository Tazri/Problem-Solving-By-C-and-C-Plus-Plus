// link : https://codeforces.com/problemset/problem/1720/A
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
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll bc = b * c;
    ll ad = a * d;

    if (bc == ad)
    {
        cout << 0 << endl;
    }
    else if (bc == 0 || ad == 0)
    {
        cout << 1 << endl;
    }
    else if (bc % ad == 0 || ad % bc == 0)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 2 << endl;
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