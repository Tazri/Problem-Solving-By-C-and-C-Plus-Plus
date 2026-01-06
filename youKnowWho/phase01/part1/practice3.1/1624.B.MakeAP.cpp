// https://codeforces.com/contest/1624/problem/B
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);

void test()
{
    int a, b, c;
    cin >> a >> b >> c;
    int bma = b - a;
    int cmb = c - b;

    if (bma == cmb)
    {
        cout << "YES" << endl;
        return;
    }

    int bb = b + b;
    int apc = a + c;
    int bbmc = bb - c;
    int bbma = bb - a;

    if (apc % bb == 0)
    {
        cout << "YES" << endl;
        return;
    }

    if (bbmc > 0 && bbmc % a == 0)
    {
        cout << "YES" << endl;
        return;
    }

    if (bbma > 0 && bbma % c == 0)
    {
        cout << "YES" << endl;
        return;
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