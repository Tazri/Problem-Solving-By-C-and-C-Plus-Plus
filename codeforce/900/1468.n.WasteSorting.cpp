// link : https://codeforces.com/problemset/problem/1468/N
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

void program()
{
    int c1, c2, c3;
    int a1, a2, a3, a4, a5;
    cin >> c1 >> c2 >> c3;
    cin >> a1 >> a2 >> a3 >> a4 >> a5;

    c1 -= a1;
    c2 -= a2;
    c3 -= a3;

    if (c1 < 0 || c2 < 0 || c3 < 0)
    {
        cout << "NO" << endl;
        return;
    }

    if (a4)
    {
        if (c1 >= 0)
        {
            a4 -= c1;
        }

        if (a4 > 0)
        {
            c3 -= a4;
        }
    }

    if (a5)
    {
        if (c2 >= 0)
        {
            a5 -= c2;
        }

        if (a5 > 0)
        {
            c3 -= a5;
        }
    }

    if (c3 < 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
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