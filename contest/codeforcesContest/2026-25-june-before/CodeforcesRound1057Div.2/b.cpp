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
    int x, y, z;
    cin >> x >> y >> z;

    int a, b, c;
    a = x;
    b = x;
    c = y;

    int m = 1;

    while (m)
    {
        if (y & m)
        {
            b |= m;
        }

        m <<= 1;
    }

    m = 1;
    while (m)
    {
        if (z & m)
        {
            a |= m;
            c |= m;
        }
        m <<= 1;
    }

    int aAb = a & b;
    int bAc = b & c;
    int aAc = a & c;

    if (aAb == x && bAc == y && aAc == z)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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