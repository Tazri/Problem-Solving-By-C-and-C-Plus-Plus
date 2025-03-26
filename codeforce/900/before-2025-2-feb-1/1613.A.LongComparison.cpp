// link : https://codeforces.com/problemset/problem/1613/A
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
    int x1, p1;
    int x2, p2;
    cin >> x1 >> p1;
    cin >> x2 >> p2;

    int d1 = 0;
    int d2 = 0;
    int ax = x1;

    while (ax)
    {
        d1++;
        ax /= 10;
    }

    ax = x2;
    while (ax)
    {
        d2++;
        ax /= 10;
    }

    if (d1 < d2)
    {
        int n1 = d2 - d1;

        if (n1 > p1)
        {
            cout << "<" << endl;
            return;
        }
        p1 -= n1;

        for (int i = 0; i < n1; i++)
            x1 *= 10;
    }
    else if (d2 < d1)
    {
        int n2 = d1 - d2;

        if (n2 > p2)
        {
            cout << ">" << endl;
            return;
        }

        p2 -= n2;

        for (int i = 0; i < n2; i++)
            x2 *= 10;
    }

    if (p1 < p2)
    {
        cout << "<" << endl;
    }
    else if (p1 > p2)
    {
        cout << ">" << endl;
    }
    else if (x1 < x2)
    {
        cout << "<" << endl;
    }
    else if (x1 > x2)
    {
        cout << ">" << endl;
    }
    else if (x1 == x2)
    {
        cout << "=" << endl;
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