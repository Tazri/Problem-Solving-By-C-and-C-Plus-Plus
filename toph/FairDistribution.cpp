// link : https://toph.co/p/fair-distribution
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
    int x, y;
    cin >> x >> y;

    int r = y % x;
    if (r == 0)
        cout << 0 << endl;
    else
        cout << x - r << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}