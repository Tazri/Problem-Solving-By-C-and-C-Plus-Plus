// link : https://codeforces.com/problemset/problem/1921/A
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
    int px = x;
    int py = y;
    int d = 0;

    for (int i = 0; i < 3; i++)
    {
        cin >> x >> y;

        if (x == px)
            d = py > y ? py - y : y - py;
    }

    cout << d * d << endl;
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