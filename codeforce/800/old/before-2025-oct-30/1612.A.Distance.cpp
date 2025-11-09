// link : https://codeforces.com/problemset/problem/1612/A
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
    int bx, by;
    cin >> bx >> by;

    int sum = bx + by;

    if (sum & 1)
    {
        cout << -1 << " " << -1 << endl;
        return;
    }

    int h = sum / 2;

    if (bx == by)
    {
        cout << h << " " << 0 << endl;
        return;
    }

    int mn = min(bx, by);
    int mx = max(bx, by);

    int a1 = mx - h;
    int a2 = h - a1;

    if (mx == bx)
        cout << a1 << " " << a2 << endl;
    else
        cout << a2 << " " << a1 << endl;
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