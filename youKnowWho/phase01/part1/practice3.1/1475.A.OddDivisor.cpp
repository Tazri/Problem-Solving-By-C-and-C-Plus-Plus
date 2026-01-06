// link : https://codeforces.com/problemset/problem/1475/A
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
    ll n;
    cin >> n;

    if (n & 1)
    {
        cout << "YES" << endl;
        return;
    }

    while (n != 1)
    {
        if (n & 1)
        {
            cout << "YES" << endl;
            return;
        }
        n /= 2;
    }

    cout << "NO" << endl;
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