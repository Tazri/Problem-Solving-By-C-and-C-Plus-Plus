// link : https://codeforces.com/problemset/problem/1928/A
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
    int w, h;

    cin >> w >> h;

    if (w == 1 && h == 1)
    {
        cout << "NO" << endl;
        return;
    }

    if ((w & 1) && (h & 1))
    {
        cout << "NO" << endl;
        return;
    }

    if (w % 2 == 0 && h % 2 == 0)
    {
        if (w / 2 != h || h / 2 != w)
        {
            cout << "YES" << endl;
            return;
        }
    }

    if (w % 2 == 0)
        if (w / 2 == h)
        {
            cout << "NO" << endl;
            return;
        }

    if (h % 2 == 0)
        if (h / 2 == w)
        {
            cout << "NO" << endl;
            return;
        }

    cout << "YES" << endl;
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