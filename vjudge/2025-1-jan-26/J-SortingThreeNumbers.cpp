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

#define print(a, b, c) cout << a << " " << b << " " << c << endl
#define con(a, b, c) a <= b &&b <= c

int main()
{
    optimize();
    int a, b, c;

    cin >> a >> b >> c;

    /*
        abc
        acb
        bac
        bca
        cab
        cba
    */

    // abc
    if (con(a, b, c))
        print(a, b, c);
    else if (con(a, c, b))
        print(a, c, b);
    else if (con(b, a, c))
        print(b, a, c);
    else if (con(b, c, a))
        print(b, c, a);
    else if (con(c, a, b))
        print(c, a, b);
    else if (con(c, b, a))
        print(c, b, a);
    return 0;
}