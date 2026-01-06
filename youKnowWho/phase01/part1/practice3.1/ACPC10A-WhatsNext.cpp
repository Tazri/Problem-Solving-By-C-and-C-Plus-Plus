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

bool program()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a == 0 && b == 0 && c == 0)
        return false;

    int d1 = b - a;
    int d2 = c - b;

    if (d1 == d2)
    {
        cout << "AP " << c + d1 << endl;
        return true;
    }

    int r = b / a;
    cout << "GP " << c * r << endl;

    return true;
}

int32_t main()
{
    optimize();
    while (program())
        ;
    return 0;
}